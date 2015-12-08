<?php
//=============================================================================
//
// File:         /i18n/enBasePage.inc
//
// Language:     PHP
//
// Contents:     es = Spanish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class esBasePage extends i18nPage
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
		return 'Traducir';
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return '¿Puedes ayudar a traducir «El Compromiso por un Mundo sin Fisión Nuclear»?';
	}

}
?>