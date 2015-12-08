<?php
//=============================================================================
//
// File:         /i18n/zhHantHengBasePage.inc
//
// Language:     PHP
//
// Contents:     zhHantHeng = 繁體中文(橫排)  (Traditional Chinese hengpai) horizontal		
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class zhHantHengBasePage extends i18nPage
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
		return "翻譯";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '請幫忙翻譯「走向世界的承諾不裂變」';
	}
}
?>