<?php
//=============================================================================
//
// File:         /i18n/eoBasePage.inc
//
// Language:     PHP
//
// Contents:     eo = Esperanto
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class eoBasePage extends i18nPage
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
		return "Traduki";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Bonvolu helpi per tradukante la "promeson al mondo sen fisio"';
	}
}
?>