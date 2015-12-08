<?php
//=============================================================================
//
// File:         /i18n/euBasePage.inc
//
// Language:     PHP
//
// Contents:     eu = Euskara (Basque)  Using Google Translate Alpha
//
// Author:       Joe Honton © 2013
//
// Initial date: October 2, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class euBasePage extends i18nPage
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
		return "Traducir";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Mesedez, "mundu baterantz promesa fisio gabe" itzultzen laguntzeko';
	}
}
?>