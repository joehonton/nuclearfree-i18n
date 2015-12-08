<?php
//=============================================================================
//
// File:         /i18n/azArabBasePage.inc
//
// Language:     PHP
//
// Contents:     az-Arab = آذربایجان دیلی (Azerbaijani)
//               transliterated from Latn using Mousa Moradi's AzConvert v3.3
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class azArabBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: arabic-indic; }";
		$this->direction = 'RTL';
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "ترجومه";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '"پارچالانما اولمادان دونیایا دوغرو سؤز" ده ترجومه ایله کؤمک ائدین';
	}
}
?>