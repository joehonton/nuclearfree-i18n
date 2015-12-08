<?php
//=============================================================================
//
// File:         /i18n/daBasePage.inc
//
// Language:     PHP
//
// Contents:     da = Dansk (Danish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class daBasePage extends i18nPage
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
		return "Oversæt";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Behage hjælp med at oversætte "Løfte hen imod en verden uden fission"';
	}
}
?>