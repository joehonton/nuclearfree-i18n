<?php
//=============================================================================
//
// File:         /i18n/caThankyou.inc
//
// Language:     PHP
//
// Contents:     ca = Català (Catalan)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/caBasePage.inc' );


//-------------------------------------
class caThankyou extends caBasePage
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
		return "Gràcies per comprometre amb un món sense la fissió nuclear";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Amb suficients veus parlant amb valentia sobre els perills de la fissió nuclear, podem fer d'aquest un món lliure de la fissió nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "món, nuclear, la fissió";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Gràcies per la teva promesa</h1>

		<p>Gràcies $personal_name.</p>
		
		<p>Realment estima que us donen suport a aquesta important missió. T'has unit a $num_pledges altres persones que han pres el jurament.</p> 
		
		<p>Recordi que ha de ser valent - testificar quan sigui el moment adequat. Deixa que els teus amics i coneguts saben que vostè creu en un món sense la fissió nuclear.</p>
		
		<p><strong>Espero que junts podem fer la diferència.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>