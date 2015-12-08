<?php
//=============================================================================
//
// File:         /i18n/laBasePage.inc
//
// Language:     PHP
//
// Contents:     la = Latin
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class laBasePage extends i18nPage
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
		return "Transferendis";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'O cum translatione «fidem in mundo non nuclearis scissionis»';
	}
}
?>