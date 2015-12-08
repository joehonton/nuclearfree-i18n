<?php
//=============================================================================
//
// File:         /i18n/swBasePage.inc
//
// Language:     PHP
//
// Contents:     sw = Kiswahili (Swahili)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class swBasePage extends i18nPage
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
		return "Kutafsiri";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Tafadhali msaada kwa kutafsiri "ahadi kuelekea dunia bila fission"';
	}
}
?>