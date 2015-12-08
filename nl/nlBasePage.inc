<?php
//=============================================================================
//
// File:         /i18n/nlBasePage.inc
//
// Language:     PHP
//
// Contents:     nl = Dutch
//
// Author:       Joe Honton © 2013
//
// Initial date: September 25, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class nlBasePage extends i18nPage
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
		return 'Vertalen';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Gelieve te helpen met het vertalen van de "Belofte richting van een Wereld zonder Kernsplijting"';
	}
}
?>