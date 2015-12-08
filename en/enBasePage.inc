<?php
//=============================================================================
//
// File:         /i18n/enBasePage.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: September 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class enBasePage extends i18nPage
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
		return 'Translate';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Can you help to translate the "Nuclear-free Pledge"?';
	}
}
?>