<?php
//=============================================================================
//
// File:         /i18n/srLatnBasePage.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//		 
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class srLatnBasePage extends i18nPage
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
		return "prevoditi";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Molim vas pomozite sa prevođenjem "obećanje ka svetu bez fisije"';
	}
}
?>