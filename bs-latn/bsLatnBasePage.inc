<?php
//=============================================================================
//
// File:         /i18n/bsLatnBasePage.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class bsLatnBasePage extends i18nPage
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
		return "Prevoditi";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Molim vas, pomozite sa prevođenje "obećanje prema svijetu bez fisije"';
	}
}
?>