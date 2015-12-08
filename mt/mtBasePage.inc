<?php
//=============================================================================
//
// File:         /i18n/mtBasePage.inc
//
// Language:     PHP
//
// Contents:     mt = Malti (Maltese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class mtBasePage extends i18nPage
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
		return "Tittraduċi";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Jekk jogħġbok jgħinu mal-traduzzjoni tal-"wegħda lejn dinja mingħajr fissjoni"';
	}
}
?>