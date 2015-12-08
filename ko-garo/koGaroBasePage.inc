<?php
//=============================================================================
//
// File:         /i18n/koGaroBasePage.inc
//
// Language:     PHP
//
// Contents:     ko-x-Garo = 한국어(가로쓰기)  (Korean garosseugi) horizontal
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class koGaroBasePage extends i18nPage
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
		return "번역을";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '「핵분열없는 세상을 향한 약속」번역을 도와주세요';
	}
}
?>