<?php
//=============================================================================
//
// File:         /i18n/bnBasePage.inc
//
// Language:     PHP
//
// Contents:     bn = বাংলা  (Bengali)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class bnBasePage extends i18nPage
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
		return "অনুবাদ করা";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '“পারমানবিক বিদারণ ছাড়া একটি বিশ্বের প্রতি প্রতিশ্রুতি” অনুবাদ দিয়ে সাহায্য করুন';
	}
}
?>