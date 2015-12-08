<?php
//=============================================================================
//
// File:         /i18n/fiBasePage.inc
//
// Language:     PHP
//
// Contents:     fi = Suomi (Finnish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 4, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class fiBasePage extends i18nPage
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
		return "Kääntää";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Auttakaa kääntäminen "Lupaa kohti maailmaa ilman fissio"';
	}
}
?>