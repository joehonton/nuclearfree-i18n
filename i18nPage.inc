<?php
//=============================================================================
//
// File:         /i18n/i18nPage.inc
//
// Language:     PHP
//
// Contents:     Internationalization Page class
//
// Author:       Joe Honton © 2013
//
// Initial date: September 10, 2013
//
//=============================================================================

require_once( __DIR__ . '/iso639.inc' );

//-------------------------------------
class i18nPage
{
	public $pagename;			// Favor, Pledge, Thankyou
	public $language;			// a language code, either two letter or regional specific like 'zh-Hans'
	public $direction;			// 'LTR' is the default; specify 'RTL' for Arabic and Hebrew
	public $writing_mode;		// CSS writing-mode: 'horizontal-tb' or 'vertical-rl'
	public $styles;				// additional <styles> for a specific page, a string.
	public $viewport;			// override the viewport device=device-with
	
	//---------------------------------
	// The constructor should be called from the Factory
	protected function __construct( $pagename, $language )
	{
		$this->pagename = $pagename;
		$this->language = $language;
		$this->direction = 'LTR';
		$this->writing_mode = 'horizontal-tb';
		$this->styles = null;
		$this->viewport = null;
	}
	
	//---------------------------------
	//^ The Factory will create an object for the given pagename
	//  Use this instead of the constuctor when the language is to be
	//  determined automatically from the domain name.
	//> $pagename is 'BasePage', 'Favor', 'Pledge', 'Thankyou', 'MyStory', 'Information', 'NoMoreFission'
	//> $requested_language is typically not passed and is determined automatically from the domain name,
	//  but if provided, it is an ISO639 language code, possibly with regional and script subparts.
	//> Only pass the language name when calling this from something like translate.php where
	//  an explicit language is to be requested that is not the same as the DNS subdomain.
	public static function Factory( $pagename, $requested_language = null )
	{
		$validPagenames = array(
			'BasePage', 		// use 'BasePage' for just the language-specific BasePage (translation and instruction page use this)
			'Favor',			// I have a favor to ask (index.php)
			'Pledge',			// Nuclear Free Pledge
			'Thankyou',			// Thank you for taking the pledge
			'Story',			// What's your story?
			'Information',		// Information you can use
			'Envision',			// menu with square buttons
			'Courageous'		// Courageous voices
		);
		if ( !in_array($pagename, $validPagenames ) )
			$pagename = 'Favor';

		$parts = explode( '.', $_SERVER['HTTP_HOST'] );
		if ( count($parts) == 3 )
			$dns_subdomain = $parts[0];														// pt-br <-- pt-br.domain.com
		else
			$dns_subdomain = 'unspecified';
		
		// If the language is not explicitly passed as an argument (which is the normal case)
		// determine the language from the DNS domain.
		if ( $requested_language == null )
		{
			if ( $dns_subdomain == 'unspecified' )
				i18nPage::ContentLanguageNegotiation();										// completes with an HTTP 303
			else
			{
				$requested_language = iso639::GetLanguageFromSubdomain( $dns_subdomain );	// pt-BR <-- pt-br
				$prefix = iso639::ClassPrefix( $dns_subdomain );							// ptBR
			}
		}
		// If the language is passed as an argument (for translate.php)
		// determine the prefix in two steps
		else
		{
			$dns_subdomain = iso639::GetSubdomainFromLanguage( $requested_language );		// pt-pr <-- pt-BR
			$prefix = iso639::ClassPrefix( $dns_subdomain );								// ptBR
		}
		
		$directory = $dns_subdomain;														// pt-br
			
		// assemble the actual classname and filename
		$classname = $prefix . $pagename;													// ptBRFavor = 'ptBR' . 'Favor'
		$language_specific_page = "$directory/$classname.inc";								// pt-br/ptBRFavor.inc
			
		// Just in case the language page doesn't exist, fall back to English
		// This shouldn't occur, except during development (or when a user specifies a new language in instructions.php/translate.php)
		$full_filename = __DIR__ . '/' .$language_specific_page;
		if ( !file_exists( $full_filename ) )
		{
			$prefix = 'en';
			$classname = $prefix . $pagename;
			$language_specific_page = "en/$classname.inc";
		}
		
		// instantiate a language-specific object	
		require_once( $language_specific_page );											// require_once( 'pt-br/ptBRFavor.inc' );
		return new $classname( $pagename, $requested_language );							// return new ptBRFavor( 'Favor', 'pt-BR' );
	}

		
	//---------------------------------
	//^ The ContentLanguageNegotiation function is called when the DNS name
	//  is nuclearfree.earth and the prefix language subdomain is missing.
	//  Use HTTP content negotiation to determine how to forward the request to
	//  a language-specific subdomain. This will trigger its own Factory request
	//  which will follow the normal route through that function.
	//< This function does not return, it always triggers an HTTP 303.
	public static function ContentLanguageNegotiation()
	{
		$requested_language = '';
		
		// Usually the client browser will give us the user's language preference like this:
		if ( isset( $_SERVER['HTTP_ACCEPT_LANGUAGE'] ) )
		{
			$accept_string = isset($_SERVER['HTTP_ACCEPT_LANGUAGE']) ? $_SERVER['HTTP_ACCEPT_LANGUAGE'] : '';					// like 'pt-BR,pt;q=0.5'
			$semicolon = strpos( $accept_string, ';' );
			$languages_without_quality = ($semicolon === false) ? $accept_string : substr( $accept_string, 0, $semicolon );		// like 'pt-BR,pt'
			$accept_languages = explode( ',', $languages_without_quality );		// like [0]=>'pt-BR'  [1]=>'pt'
			
			// loop through user-acceptable languages looking for an exact language match, including regional variant if specified
			foreach ( $accept_languages as $preference )
			{
				if ( iso639::LanguageExists($preference) )
				{
					$requested_language = $preference;
					break;
				}
			}

			// loop through again, if necessary, discarding the regional variant and only using the base language
			if ( $requested_language == '' )
			{
				foreach ( $accept_languages as $preference )
				{
					$hyphen = strpos( $preference, '-' );
					if ( $hyphen !== false )
					{
						$base_language = substr( $preference, 0, $hyphen );		// 'pt' <-- 'pt-BR'
						if ( iso639::LanguageExists($base_language) )
						{
							$requested_language = $base_language;
							break;
						}
					}
				}
			}
		}
					
		// final fallback, if the user-agent doesn't specify a language that we've defined
		if ( $requested_language == '' )
			$requested_language = 'en';

		// finally, lookup the subdomain for the requested language
		$dns_subdomain = iso639::GetSubdomainFromLanguage($requested_language);
		
		// Send the user to the correct domain
		header( 'HTTP/1.1 303 See Other' );
		header( "Content-Language: $requested_language" );
		header( "Location: http://$dns_subdomain." . DOMAIN_NAME . $_SERVER['REQUEST_URI'] );
		exit;
	}


	//=============================================================================
	// Initialization
	//=============================================================================
	
	//---------------------------------
	function setupPage( $press )
	{		
		$press->page_title = $this->pageTitle();
		$press->description = $this->metaDescription();
		$press->keywords = $this->metaKeywords();
		$press->language = $this->language;
		
		if ( $this->direction == 'RTL' )
			$press->direction = $this->direction;
		
		if ( $this->writing_mode == 'vertical-rl' )
		{
			$press->html_attributes[] = "class='cs_tate'";
			$press->css_files[] = '/css/tate.css';
			$press->local_script_files[] = '/js/tate.js';
		}

		if ( $this->styles != null )
			$press->styles = $this->styles;

		if ( $this->viewport != null )
			$press->viewport = $this->viewport;
	}

	
	//=============================================================================
	// Standard <head> items
	//=============================================================================
	
	//---------------------------------
	function pageTitle()
	{
		return '';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return '';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return '';
	}
	
	//=============================================================================
	// Standard form errors
	//=============================================================================
	
	//---------------------------------
	function unsweetenedHoneypot()
	{
		return 'Unsweetened honeypot.';
	}
		
	//---------------------------------
	function staleHoneypot()
	{
		return 'That took a long time! Would you try again please?';
	}
}
?>