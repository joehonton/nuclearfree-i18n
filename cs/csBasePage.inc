<?php
//=============================================================================
//
// File:         /i18n/csBasePage.inc
//
// Language:     PHP
//
// Contents:     cs = Čeština (Czech)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class csBasePage extends i18nPage
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
		return "Překládat";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Prosím, pomozte s překladem "Zaslíbení směrem ke světu bez štěpení"';
	}
}
?>