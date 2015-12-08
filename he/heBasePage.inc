<?php
//=============================================================================
//
// File:         /i18n/heBasePage.inc
//
// Language:     PHP
//
// Contents:     he = Hebrew
//
// Author:       Joe Honton © 2013
//
// Initial date: September 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class heBasePage extends i18nPage
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
		return "לתרגם";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'בבקשה לעזור עם תרגום "ההבטחה לקראת עולם ללא ביקוע"';
	}
}
?>