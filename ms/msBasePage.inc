<?php
//=============================================================================
//
// File:         /i18n/msBasePage.inc
//
// Language:     PHP
//
// Contents:     ms = Bahasa Melayu (Malay)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class msBasePage extends i18nPage
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
		return "Menterjemahkan";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Sila membantu dengan menterjemahkan "janji ke arah dunia tanpa pembelahan"';
	}
}
?>