<?php
//=============================================================================
//
// File:         /i18n/htBasePage.inc
//
// Language:     PHP
//
// Contents:     ht = Kreyòl (Haitian Creole)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class htBasePage extends i18nPage
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
		return "tradwui";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Tanpri, ede ak tradiksyon "pwomès la nan direksyon pou yon mond san yo pa fisyon"';
	}
}
?>