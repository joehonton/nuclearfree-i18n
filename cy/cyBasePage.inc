<?php
//=============================================================================
//
// File:         /i18n/cyBasePage.inc
//
// Language:     PHP
//
// Contents:     cy = Cymraeg (Welsh)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class cyBasePage extends i18nPage
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
		return "Cyfieithu";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Os gwelwch yn dda helpu i gyfieithu y "Addewid er mwyn creu byd heb ymholltiad"';
	}
}
?>