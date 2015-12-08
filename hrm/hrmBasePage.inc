<?php
//=============================================================================
//
// File:         /i18n/hrmBasePage.inc
//
// Language:     PHP
//
// Contents:     hrm = Hmong
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class hrmBasePage extends i18nPage
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
		return "Txhais";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Thov pab nrog txhais lus lub "cog lus rau lub ntiaj teb no ib yam uas tsis muaj fission"';
	}
}
?>