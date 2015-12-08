<?php
//=============================================================================
//
// File:         /i18n/sqBasePage.inc
//
// Language:     PHP
//
// Contents:     sq = Shqip (Albanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class sqBasePage extends i18nPage
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
		return "Përkthej";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Ju lutemi ndihmoni me përkthimin e "premtimin drejt një bote pa shpërbërjes bërthamore"';
	}
}
?>