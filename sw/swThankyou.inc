<?php
//=============================================================================
//
// File:         /i18n/swThankyou.inc
//
// Language:     PHP
//
// Contents:     sw = Kiswahili (Swahili)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/swBasePage.inc' );


//-------------------------------------
class swThankyou extends swBasePage
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
		return "Asante kwa kutenda na dunia bila fission nyuklia";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Na sauti ya kutosha kusema kwa uhodari juu ya hatari ya mwatuko nyuklia, tunaweza kufanya hii dunia bila mwatuko nyuklia.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dunia, nyuklia, mwatuko";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Asante kwa ahadi yako</h1>

		<p>Asante $personal_name.</p>
		
		<p>Mimi kwa kweli kufahamu kuwa msaada wako juu ya jitihada hii muhimu. Una alijiunga wengine $num_pledges ambao wamechukua kiapo.</p> 
		
		<p>Kumbuka kuwa jasiri - kushuhudia wakati ni haki. Basi rafiki yako na marafiki kujua kwamba unaamini katika dunia bila mwatuko nyuklia.</p>
		
		<p><strong>Natumaini kwamba kwa pamoja tunaweza kuleta tofauti</strong>.</p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>