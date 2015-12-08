<?php
//=============================================================================
//
// File:         /i18n/hrBasePage.inc
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

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class hrBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "Prevoditi";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Molim pomoć s prevođenjem "Obećanje prema svijetu bez fisije"';
	}
}
?>