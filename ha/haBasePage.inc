<?php
//=============================================================================
//
// File:         /i18n/haBasePage.inc
//
// Language:     PHP
//
// Contents:     ha = Harshen Hausa
//
// Author:       Joe Honton © 2014
//
// Initial date: January 18, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class haBasePage extends i18nPage
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
		return "Fassara";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Don Allah a taimaka tare da fassara da "wa`adi ga duniya ba tare da makaman nukiliya fission"';
	}
}
?>