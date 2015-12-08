<?php
//=============================================================================
//
// File:         /i18n/neBasePage.inc
//
// Language:     PHP
//
// Contents:     ne = नेपाली  (Nepali)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class neBasePage extends i18nPage
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
		return "अनुवाद गर्नु";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '“अणु विखंडन नभएको एउटा संसार तिर प्रतिज्ञा” को अनुवाद मदत गर्नुहोस्';
	}
}
?>