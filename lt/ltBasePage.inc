<?php
//=============================================================================
//
// File:         /i18n/ltBasePage.inc
//
// Language:     PHP
//
// Contents:     lt = Lietuvių (Lithuanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class ltBasePage extends i18nPage
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
		return "Interpretuoti";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Prašome padėti vertimas "žada link pasaulio be dalijimosi"';
	}
}
?>