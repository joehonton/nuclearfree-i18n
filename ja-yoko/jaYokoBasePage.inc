<?php
//=============================================================================
//
// File:         /i18n/jaYokoBasePage.inc
//
// Language:     PHP
//
// Contents:     ja-x-Yoko = 横書き日本語		(Japanese yokogaki - horizontal)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class jaYokoBasePage extends i18nPage
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
		return "翻訳する";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '「核分裂のない世界に向けた約束」翻訳で役立て下さい';
	}
}
?>