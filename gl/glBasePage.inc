<?php
//=============================================================================
//
// File:         /i18n/glBasePage.inc
//
// Language:     PHP
//
// Contents:     gl = Galego (Galician)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class glBasePage extends i18nPage
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
		return "Traducir";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Por favor, axude a traducir a "Promesa para un Mundo sen Fisión"';
	}
}
?>