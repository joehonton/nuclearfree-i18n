<?php
//=============================================================================
//
// File:         /i18n/faBasePage.inc
//
// Language:     PHP
//
// Contents:     fa = فارسی (Farsi)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class faBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: persian; }";
		$this->direction = 'RTL';
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "ترجمه کردن";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'لطفا با ترجمه "وعده به جهانی بدون شکافت" کمک';
	}
}
?>