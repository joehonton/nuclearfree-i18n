<?php
//=============================================================================
//
// File:         /i18n/loBasePage.inc
//
// Language:     PHP
//
// Contents:     lo = ພາສາລາວ (Phasa Lao)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 22, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class loBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "body {word-break: break-all;} li {list-style-type: lao;}";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "ແປອອກ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'ກະລຸນາຊ່ວຍໃຫ້ມີການແປ "ຄໍາສັນຍາຕໍ່ໂລກໂດຍບໍ່ມີນິວເຄຼຍ"';
	}
}
?>