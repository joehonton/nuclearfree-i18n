<?php
//=============================================================================
//
// File:         /i18n/jvBasePage.inc
//
// Language:     PHP
//
// Contents:     jv = Basa Jawa (Javanese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class jvBasePage extends i18nPage
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
		return "Terjemahaken";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Mangga bantuan karo sing nerjemahne "janji menyang Janapada tanpa fission"';
	}
}
?>