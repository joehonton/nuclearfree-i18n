<?php
//=============================================================================
//
// File:         /i18n/yiBasePage.inc
//
// Language:     PHP
//
// Contents:     yi = Yiddish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================
		 		 
require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class yiBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: hebrew; }";
		$this->direction = 'RTL';
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "זעץ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return "ביטע העלפן מיט איבערזעצן די הבטחה צו אַ וועלט אָן פישאַן";
	}
}
?>