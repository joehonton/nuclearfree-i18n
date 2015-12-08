<?php
//=============================================================================
//
// File:         /i18n/etThankyou.inc
//
// Language:     PHP
//
// Contents:     et = Eesti (Estonian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/etBasePage.inc' );


//-------------------------------------
class etThankyou extends etBasePage
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
		return "Täname kohustub maailma ilma tuuma lõhustumise";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Mis piisavalt hääli räägib julgelt ohtudest tuumalõhustumise, saame teha seda maailma ilma tuuma lõhustumise.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "maailmas, tuumaenergia, tuuma lõhustumise";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Täname lubadus</h1>

		<p>Aitäh $personal_name.</p>
		
		<p>Ma tõesti hindan võttes oma toetust selle tähtsa quest. Sul on liitunud $num_pledges teised, kes on andnud ametivande.</p> 
		
		<p>Pea meeles, et olla julge - tunnistan, kui on õige aeg. Olgu teie sõbrad ja tuttavad teavad, et sa usud maailma ilma tuuma lõhustumise.</p>
		
		<p><strong>Ma loodan, et me saame koos ära teha.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>