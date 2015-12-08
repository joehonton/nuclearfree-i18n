<?php
//=============================================================================
//
// File:         /i18n/bsCyrlBasePage.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class bsCyrlBasePage extends i18nPage
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
		return "Преводити";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Молим вас, помозите са превођење "обећање према свијету без фисије"';
	}
}
?>