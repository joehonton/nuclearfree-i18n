<?php
//=============================================================================
//
// File:         /i18n/abcBasePage.inc
//
// Language:     PHP
//
// Contents:     abc = ABC
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class abcBasePage extends i18nPage
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
		return "Translate";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Please help with translating the “promise towards a world without fission”';
	}
}
?>