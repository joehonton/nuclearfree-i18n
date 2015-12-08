<?php
//=============================================================================
//
// File:         /i18n/deBasePage.inc
//
// Language:     PHP
//
// Contents:     de = German
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class deBasePage extends i18nPage
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
		return 'Übersetzen';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Bitte helfen Sie mit der Übersetzung der "Versprechen in Richtung einer Welt ohne Fission"';
	}
}
?>