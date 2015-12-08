<?php
//=============================================================================
//
// File:         /i18n/afBasePage.inc
//
// Language:     PHP
//
// Contents:     af = Afrikaans
//
// Author:       Joe Honton © 2013
//
// Initial date: September 27, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class afBasePage extends i18nPage
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
		return 'Te vertaal';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Let asseblief help met die vertaling van die "Belofte na &apos;n wêreld sonder Fission"';
	}
}
?>