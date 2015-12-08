<?php
//=============================================================================
//
// File:         /i18n/hrThankyou.inc
//
// Language:     PHP
//
// Contents:     hr = Hrvatski (Croatian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/hrBasePage.inc' );


//-------------------------------------
class hrThankyou extends hrBasePage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
	}
	
	//=============================================================================
	// Standard <head> items
	//=============================================================================
	
	//---------------------------------
	function pageTitle()
	{
		return "Hvala počinio na svijetu bez nuklearne fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "S dovoljno glasovi govoreći hrabro o opasnosti od nuklearne fisije, možemo napraviti ovaj svijet bez nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "Svijet, nuklearna, fisija";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Hvala vam za vaše obećanje</h1>

		<p>Hvala $personal_name.</p>
		
		<p>Stvarno cijenim što je svoju potporu na ovom važnom zadatku. Pridružili ste se $num_pledges drugima koji su se zakletve.</p> 
		
		<p>Sjeti se hrabro - svjedoče kada je pravo vrijeme. Neka vaši prijatelji i poznanici znaju da vjerujem u svijet bez nuklearne fisije.</p>
		
		<p><strong>Nadam se da ćemo zajedno napraviti razliku.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>