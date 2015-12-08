<?php
//=============================================================================
//
// File:         /i18n/lvBasePage.inc
//
// Language:     PHP
//
// Contents:     lv = Latviešu (Latvian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class lvBasePage extends i18nPage
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
		return "Pārtulkot";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Lūdzu, palīdziet ar tulkošanu "solījumu uz pasauli bez skaldīšana"';
	}
}
?>