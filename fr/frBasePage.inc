<?php
//=============================================================================
//
// File:         /i18n/frBasePage.inc
//
// Language:     PHP
//
// Contents:     fr = French
//
// Author:       Joe Honton © 2013
//
// Initial date: September 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class frBasePage extends i18nPage
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
		return "Traduire";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return "S&apos;il vous plaît aider à traduire la «Promesse vers un monde sans fission»";
	}
}
?>