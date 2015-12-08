<?php
//=============================================================================
//
// File:         /i18n/trBasePage.inc
//
// Language:     PHP
//
// Contents:     tr = Türkçe (Turkish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 31, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class trBasePage extends i18nPage
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
		return "çevirmek";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '"Fisyon olmadığı bir dünya doğru söz" tercüme ile yardım edin';
	}
}
?>