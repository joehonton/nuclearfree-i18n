<?php
//=============================================================================
//
// File:         /i18n/bsLatnThankyou.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/bsLatnBasePage.inc' );


//-------------------------------------
class bsLatnThankyou extends bsLatnBasePage
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
		return "Hvala vam što ste počinili u svijetu bez nuklearnog fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Sa dovoljno glasova govoreći hrabro o opasnostima nuklearne fisije, možemo napraviti ovaj svijet bez nuklearnu fisiju.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "svijetu, nuklearna, fisije";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Hvala vam na obećanje</h1>

		<p>Hvala $personal_name.</p>
		
		<p>Zaista cijenim da vašu podršku na ovaj važan potragu. Ti su se pridružili $num_pledges drugih koji su se zakletve.</p> 
		
		<p>Ne zaboravite da je hrabar - svjedoči kada je pravo vrijeme. Neka vaši prijatelji i poznanici znaju da vjeruju u svijetu bez nuklearnog fisije.</p>
		
		<p><strong>Nadam se da zajedno možemo napraviti razliku.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>