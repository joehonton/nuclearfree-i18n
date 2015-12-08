<?php
//=============================================================================
//
// File:         /i18n/	HengBasePage.inc
//
// Language:     PHP
//
// Contents:     zhHansHeng = 简体中文(横排)  (Simplified Chinese hengpai) horizontal		
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class zhHansHengBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: cjk-ideographic; }";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "翻译";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '请帮忙翻译「走向世界的承诺不裂变」';
	}
}
?>