<?php
//=============================================================================
//
// File:         /i18n/srLatnThankyou.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/srLatnBasePage.inc' );


//-------------------------------------
class srLatnThankyou extends srLatnBasePage
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
		return "Hvala vam za izvršenje na svetu bez nuklearne fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Sa dovoljno govori hrabro glasovi o opasnostima od nuklearne fisije, možemo napraviti ovo svet bez nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "svet, nuklearna, fisija";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Hvala vam na obećanje</h1>

		<p>Hvala vam $personal_name.</p>
		
		<p>Zaista cenim vašu podršku da na ovom važnom zadatku. Pridružili ste $num_pledges druge koji su položili zakletvu.</p> 
		
		<p>Ne zaboravite da bude hrabar - svedoče kada je pravo vreme. Neka vaši prijatelji i poznanici znaju da vi verujete u svetu bez nuklearne fisije.</p>
		
		<p><strong>Nadam se da zajedno možemo da napravimo razliku.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>