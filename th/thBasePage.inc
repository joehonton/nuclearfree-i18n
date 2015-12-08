<?php
//=============================================================================
//
// File:         /i18n/thBasePage.inc
//
// Language:     PHP
//
// Contents:     th = ไทย	(Thai)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 22, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class thBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: thai; }";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "แปลความ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'กรุณาช่วยในการแปล "สัญญาสำหรับโลกที่ไม่มีการแยก"';
	}
}
?>