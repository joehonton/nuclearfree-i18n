<?php
//=============================================================================
//
// File:         /i18n/slBasePage.inc
//
// Language:     PHP
//
// Contents:     sl = Slovenščina (Slovene)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class slBasePage extends i18nPage
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
		return "Prevajati";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Prosim, pomagajte pri prevajanju "obljubo proti svetu brez fisije"';
	}
}
?>