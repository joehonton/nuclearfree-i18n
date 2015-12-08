<?php
//=============================================================================
//
// File:         /i18n/kaBasePage.inc
//
// Language:     PHP
//
// Contents:     ka = ქართული (Georgian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class kaBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: georgian; }";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "თარგმნა";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'გთხოვთ დახმარებას თარგმნის "დაპირება მიმართ მსოფლიოში გარეშე ბირთვული დაშლა"';
	}
}
?>