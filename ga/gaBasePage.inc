<?php
//=============================================================================
//
// File:         /i18n/gaBasePage.inc
//
// Language:     PHP
//
// Contents:     ga = Gaeilge (Irish)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class gaBasePage extends i18nPage
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
		return "Aistrigh";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Cabhrú leis an aistriú "Promise dtreo domhan gan eamhnaithe" le do thoil';
	}
}
?>