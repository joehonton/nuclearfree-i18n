<?php
//=============================================================================
//
// File:         /i18n/etBasePage.inc
//
// Language:     PHP
//
// Contents:     et = Eesti (Estonian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class etBasePage extends i18nPage
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
		return "Tõlkima";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Palun abi tõlkimisel "Lubad suunas maailm ilma lõhustumise"';
	}
}
?>