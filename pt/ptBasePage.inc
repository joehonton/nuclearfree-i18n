<?php
//=============================================================================
//
// File:         /i18n/ptBasePage.inc
//
// Language:     PHP
//
// Contents:     pt = Portuguese
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class ptBasePage extends i18nPage
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
		return 'Traduzir';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Você pode ajudar a traduzir o "Juramento Desnuclearização"?';
	}
}
?>