<?php
//=============================================================================
//
// File:         /i18n/plBasePage.inc
//
// Language:     PHP
//
// Contents:     pl = Polski (Polish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class plBasePage extends i18nPage
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
		return "Tłumaczyć";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Prosimy o pomoc w tłumaczeniu "obietnicę kierunku świata bez rozszczepienia"';
	}
}
?>