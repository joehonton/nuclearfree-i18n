<?php
//=============================================================================
//
// File:         /i18n/paBasePage.inc
//
// Language:     PHP
//
// Contents:     pa = ਪੰਜਾਬੀ  (Punjabi)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 11, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class paBasePage extends i18nPage
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
		return "ਅਨੁਵਾਦ ਇਸ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '“ਨਿਊਕਲੀ ਬਿਨਾ ਇੱਕ ਸੰਸਾਰ ਲਈ ਵਾਅਦਾ” ਅਨੁਵਾਦ ਲਈ ਮਦਦ ਕਰੋ ਜੀ';
	}
}
?>