<?php
//=============================================================================
//
// File:         /i18n/cebBasePage.inc
//
// Language:     PHP
//
// Contents:     ceb = Binisaya (Cebuano) [Using Google Translate Alpha)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class cebBasePage extends i18nPage
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
		return "Paghubad";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Palihug sa pagtabang sa uban sa paghubad sa "Saad ngadto sa usa ka kalibutan nga walay fission"';
	}
}
?>