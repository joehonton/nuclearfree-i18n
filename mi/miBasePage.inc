<?php
//=============================================================================
//
// File:         /i18n/miBasePage.inc
//
// Language:     PHP
//
// Contents:     mi = 'te reo Māori'  (Maori)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class miBasePage extends i18nPage
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
		return "Whakamāoritia";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Koa te āwhina ki te whakamāori i te "kupu whakaari ki te ao, kahore whakangotangota"';
	}
}
?>