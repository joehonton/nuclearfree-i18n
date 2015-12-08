<?php
//=============================================================================
//
// File:         /i18n/afThankyou.inc
//
// Language:     PHP
//
// Contents:     af = Afrikaans
//
// Author:       Joe Honton © 2013
//
// Initial date: September 27, 2013
//
//=============================================================================

require_once( __DIR__ . '/afBasePage.inc' );


//-------------------------------------
class afThankyou extends afBasePage
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
		return "Dankie vir die pleeg van 'n wêreld sonder kernsplyting";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Met genoeg stemme praat moedig oor die gevare van kernsplyting, kan ons dit 'n wêreld te maak sonder kernsplyting.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "wêreld, kernsplyting, fisie";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Dankie vir u belofte</h1>
		
		<p>Dankie $personal_name.</p>
		
		<p>Ek het regtig waardeer om jou ondersteuning op hierdie belangrike strewe. Jy aangesluit het by $num_pledges ander wat die eed afgelê.</p> 
		
		<p>Onthou om te wees moedige - getuig wanneer die tyd reg is. Laat jou vriende en kennisse weet dat jy glo in 'n wêreld sonder kernsplyting.</p>
		
		<p><strong>Ek hoop dat ons saam 'n verskil kan maak.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>