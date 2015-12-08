<?php
//=============================================================================
//
// File:         /i18n/enEnvision.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: November 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enEnvision extends enBasePage
{
	public $slug = '';
	public $buttons = array();
	
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );

		$this->slug = "Envision a world without fission"; // "No More Fission: It's Too Risky";
		
		// each button has [0] CSS styles, [1] button text, [2] popup text
		$this->buttons['Envision'] = array( '',
								'Envision a world without fission', //'No More Fission',
								'Here are a few things you can do now to help make this a world without nuclear fission.' );
		$this->buttons['Favor'] = array( '',
								'I have a favor to ask you',
								'You can help by speaking up.' );
		$this->buttons['Pledge'] = array( '',
								'Nuclear free pledge',
								'Take the "Nuclear Free Pledge" now!' );
		$this->buttons['Story'] = array( '',
								"What's your story?",
								'Why do you believe in a world without fission?' );
		$this->buttons['Information'] = array( '',
								'Make a difference now',
								'Stay informed . . . share your pledge . . . speak courageously.' );
		$this->buttons['Courageous'] = array( '',
								'Courageous voices',
								'Real people courageously sharing hopes for a nuclear-free world.' );
		$this->buttons['Translate'] = array( '',
								$this->translateButton(),
								$this->translateButtonAlt() );
	}
	
	//=============================================================================
	// Standard <head> items
	//=============================================================================
	
	//---------------------------------
	function pageTitle()
	{
		return $this->buttons['Envision'][1];
	}
	
	//---------------------------------
	function metaDescription()
	{
		return $this->buttons['Envision'][2];
	}
	
	//---------------------------------
	function metaKeywords()
	{
		$language = iso639::Native( $this->language );
		return "I have a favor, nuclear free pledge, your story, information you can use, translate into $language";  //TODO
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
		<h1>Envision a world without fission</h1>
ENDHTML;
	}
}
?>