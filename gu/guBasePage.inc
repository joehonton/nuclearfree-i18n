<?php
//=============================================================================
//
// File:         /i18n/guBasePage.inc
//
// Language:     PHP
//
// Contents:     gu = ગુજરાતી  (Gujarati)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 11, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class guBasePage extends i18nPage
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
		return "અનુવાદ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '“દ્વિભાજિત થતું વગર દુનિયા તરફ વચન” ધ અનુવાદ સાથે મદદ કરો';
	}
}
?>