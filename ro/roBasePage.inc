<?php
//=============================================================================
//
// File:         /i18n/roBasePage.inc
//
// Language:     PHP
//
// Contents:     ro = Română (Romanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class roBasePage extends i18nPage
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
		return "Traduce";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Vă rugăm să ajute cu traducerea "promisiunea față de o lume fără de fisiune"';
	}
}
?>