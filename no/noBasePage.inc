<?php
//=============================================================================
//
// File:         /i18n/noBasePage.inc
//
// Language:     PHP
//
// Contents:     no = Norsk (Norwegian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class noBasePage extends i18nPage
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
		return "Oversette";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Vennligst hjelp med å oversette "løftet mot en verden uten fisjon"';
	}
}
?>