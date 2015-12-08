<?php
//=============================================================================
//
// File:         /i18n/isBasePage.inc
//
// Language:     PHP
//
// Contents:     is = Íslenska (Icelandic)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class isBasePage extends i18nPage
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
		return "þýða";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Vinsamlegast hjálpa við að þýða "loforð í átt að heimi án kjarnaklofnun"';
	}
}
?>