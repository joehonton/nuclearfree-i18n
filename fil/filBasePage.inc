<?php
//=============================================================================
//
// File:         /i18n/filBasePage.inc
//
// Language:     PHP
//
// Contents:     fil = Filipino
//
// Author:       Joe Honton © 2013
//
// Initial date: October 5, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class filBasePage extends i18nPage
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
		return "Isalin";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Mangyaring tulungan sa pagsalin ng "pangako patungo sa isang mundo na walang fission"';
	}
}
?>