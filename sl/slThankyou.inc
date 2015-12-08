<?php
//=============================================================================
//
// File:         /i18n/slThankyou.inc
//
// Language:     PHP
//
// Contents:     sl = Slovenščina (Slovene)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/slBasePage.inc' );


//-------------------------------------
class slThankyou extends slBasePage
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
		return "Hvala za zavezal, da bo svet brez jedrske fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Z dovolj glasov pogumno govoril o nevarnostih jedrske fisije, lahko naredimo ta svet brez jedrske fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "svet, jedrska energija, fisije";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Hvala za vašo obljubo</h1>

		<p>Hvala vam $personal_name.</p>
		
		<p>Cenim imajo svojo podporo na tem pomembnem prizadevanju. Pridružili ste $num_pledges drugim, ki so zaprisegli.</p> 
		
		<p>Ne pozabite, da so pogumni - priča, ko je pravi čas. Naj vaši prijatelji in znanci vedo, da verjameš v svet brez jedrske fisije.</p>
		
		<p><strong>Upam, da bomo skupaj lahko naredimo razliko.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>