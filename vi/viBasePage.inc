<?php
//=============================================================================
//
// File:         /i18n/viBasePage.inc
//
// Language:     PHP
//
// Contents:     vi = Tiếng Việt (Vietnamese)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class viBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "phiên dịch";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Xin vui lòng giúp với dịch "lời hứa hướng tới một thế giới không có phân hạch"';
	}
}
?>