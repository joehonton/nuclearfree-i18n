<?php
//=============================================================================
//
// File:         /i18n/huBasePage.inc
//
// Language:     PHP
//
// Contents:     hu = Magyar (Hungarian)
//
// Author:       Joe Honton © 2013
//
// Initial date: Octiber 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class huBasePage extends i18nPage
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
		return "Lefordít";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Kérem, segítsen fordításának "ígéret felé egy olyan világban, anélkül, hogy hasadási"';
	}
}
?>