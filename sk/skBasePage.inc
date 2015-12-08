<?php
//=============================================================================
//
// File:         /i18n/skBasePage.inc
//
// Language:     PHP
//
// Contents:     sk = Slovenčina (Slovak)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class skBasePage extends i18nPage
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
		return "Prekladať";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Prosím, pomôžte s prekladom "sľub k svetu bez jadrové štiepenie"';
	}
}
?>