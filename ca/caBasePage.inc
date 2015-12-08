<?php
//=============================================================================
//
// File:         /i18n/caBasePage.inc
//
// Language:     PHP
//
// Contents:     ca = Català (Catalan)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class caBasePage extends i18nPage
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
		return "Traduir";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Si us plau, ajuda amb la traducció de la "promesa cap a un món sense fissió"';
	}
}
?>