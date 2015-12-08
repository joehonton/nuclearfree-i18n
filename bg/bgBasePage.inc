<?php
//=============================================================================
//
// File:         /i18n/bgBasePage.inc
//
// Language:     PHP
//
// Contents:     bg = български (Bulgarian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class bgBasePage extends i18nPage
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
		return "Превеждам";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Моля, помогнете с превода на "обещанието за свят без делене"';
	}
}
?>