<?php
//=============================================================================
//
// File:         /i18n/hyBasePage.inc
//
// Language:     PHP
//
// Contents:     hy = Հայերեն  (Armenian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class hyBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "li { list-style-type: armenian; }";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "թարգմանել";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'Խնդրում ենք օգնել թարգմանել է «խոստումը նկատմամբ մի աշխարհում, առանց միջուկային տրոհման»';
	}
}
?>