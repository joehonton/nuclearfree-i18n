<?php
//=============================================================================
//
// File:         /i18n/igBasePage.inc
//
// Language:     PHP
//
// Contents:     ig = Asụsụ Igbo
//
// Author:       Joe Honton © 2014
//
// Initial date: April 27, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class igBasePage extends i18nPage
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
		return "ntụgharị";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Biko nyere aka na-asụgharị "nkwa kwupụta ụwa na-enweghị nuklia fission"';
	}
}
?>