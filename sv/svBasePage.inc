<?php
//=============================================================================
//
// File:         /i18n/svBasePage.inc
//
// Language:     PHP
//
// Contents:     sv = Svenska (Swedish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class svBasePage extends i18nPage
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
		return "Översätta";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Snälla hjälp med att översätta "löfte mot en värld utan kärnklyvning"';
	}
}
?>