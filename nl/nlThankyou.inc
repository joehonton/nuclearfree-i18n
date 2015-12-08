<?php
//=============================================================================
//
// File:         /i18n/nlThankyou.inc
//
// Language:     PHP
//
// Contents:     nl = Dutch
//
// Author:       Joe Honton © 2013
//
// Initial date: September 25, 2013
//
//=============================================================================

require_once( __DIR__ . '/nlBasePage.inc' );


//-------------------------------------
class nlThankyou extends nlBasePage
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
		return 'Dank u voor het plegen van een wereld zonder kernsplijting';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Met genoeg stemmen moedig spreken over de gevaren van kernsplijting, kunnen we dit een wereld zonder kernsplijting.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'wereld, nucleaire, kernsplijting';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Bedankt voor je Belofte</h1>

		<p>Dank u $personal_name.</p>
		
		<p>Ik waardeer het echt dat het hebben van uw steun voor deze belangrijke queeste. Je lid $pledges anderen die de eed hebben afgelegd.</p> 
		
		<p>Vergeet niet om moedig te zijn - getuigen wanneer de tijd rijp is. Laat je vrienden en kennissen weten dat je gelooft in een wereld zonder kernsplijting.</p>
		
		<p><strong>Ik hoop dat we samen een verschil kunnen maken.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>