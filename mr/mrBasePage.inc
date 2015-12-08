<?php
//=============================================================================
//
// File:         /i18n/mrBasePage.inc
//
// Language:     PHP
//
// Contents:     mr = मराठी   (Marathi)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 11, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class mrBasePage extends i18nPage
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
		return "अनुवाद";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '“दोन किंवा अधिक तुकडे होणे न जागतिक दिशेने वचन” अनुवादित मदत करा';
	}
}
?>