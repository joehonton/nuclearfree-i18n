<?php
//=============================================================================
//
// File:         /i18n/azCyrlBasePage.inc
//
// Language:     PHP
//
// Contents:     az-Cyrl = Азәрбајҹан дили (Azerbaijani)
//               transliterated from Latn using Mousa Moradi's AzConvert v3.3
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class azCyrlBasePage extends i18nPage
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
		return "тәрҹүмә";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '"Парчаланма олмадан дүнјаја доғру сөz" дә тәрҹүмә илә көмәк един';
	}
}
?>