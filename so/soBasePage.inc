<?php
//=============================================================================
//
// File:         /i18n/soBasePage.inc
//
// Language:     PHP
//
// Contents:     so = Af-Soomaali  (Somali)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class soBasePage extends i18nPage
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
		return "Turjum";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Fadlan caawiyo tarjumaadda "ballanqaadi dunida aan lahayn qashin attam nukliyeerka"';
	}
}
?>