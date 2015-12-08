<?php
//=============================================================================
//
// File:         /i18n/itBasePage.inc
//
// Language:     PHP
//
// Contents:     it = Italian
//
// Author:       Joe Honton © 2013
//
// Initial date: September 16, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class itBasePage extends i18nPage
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
		return 'Tradurre';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Potete aiutarmi a tradurre il "Impegno per un Mondo Libero dal Nucleare"?';
	}
}
?>