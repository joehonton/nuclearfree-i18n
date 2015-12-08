<?php
//=============================================================================
//
// File:         /i18n/srCyrlBasePage.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//		 
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class srCyrlBasePage extends i18nPage
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
		return "преводити";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Молим вас помозите са превођењем "обећање ка свету без фисије"';
	}
}
?>