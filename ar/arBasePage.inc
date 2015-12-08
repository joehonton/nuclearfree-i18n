<?php
//=============================================================================
//
// File:         /i18n/arBasePage.inc
//
// Language:     PHP
//
// Contents:     ar = العربية (Arabic)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class arBasePage extends i18nPage
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
		return "ترجمة";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'الرجاء المساعدة على ترجمة "الوعد صوب عالم متحرر الانشطار"';
	}
}
?>