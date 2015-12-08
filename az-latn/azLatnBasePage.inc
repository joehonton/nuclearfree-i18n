<?php
//=============================================================================
//
// File:         /i18n/azLatnBasePage.inc
//
// Language:     PHP
//
// Contents:     az-Latn = Azərbaycanca (Azerbaijani) using Google Translate
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class azLatnBasePage extends i18nPage
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
		return "tərcümə";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '"Parçalanma olmadan dünyaya doğru söz" də tərcümə ilə kömək edin';
	}
}
?>