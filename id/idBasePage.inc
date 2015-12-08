<?php
//=============================================================================
//
// File:         /i18n/idBasePage.inc
//
// Language:     PHP
//
// Contents:     id = Bahasa Indonesia (Indonesian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class idBasePage extends i18nPage
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
		return 'Harap membantu dengan menerjemahkan "janji menuju dunia tanpa fisi"';
	}
}
?>