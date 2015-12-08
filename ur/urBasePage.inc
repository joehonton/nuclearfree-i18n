<?php
//=============================================================================
//
// File:         /i18n/urBasePage.inc
//
// Language:     PHP
//
// Contents:     ur = اُردُو	(Urdu)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class urBasePage extends i18nPage
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
		return "ترجمہ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '"وکھنڈن کے بغیر ایک ایسی دنیا کی طرف وعدہ "ترجمہ کے ساتھ مدد کریں';
	}
}
?>