<?php
//=============================================================================
//
// File:         /i18n/kmBasePage.inc
//
// Language:     PHP
//
// Contents:     km = ភាសាខ្មែរ  	(Khmer/Cambodian)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../i18nPage.inc' );


//-------------------------------------
class kmBasePage extends i18nPage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->styles = "body {word-break: break-all;} li {list-style-type: khmer;}";
	}
	
	//=============================================================================
	// Common page items
	//=============================================================================
	
	//---------------------------------
	function translateButton()
	{
		return "បកប្រែ";
	}
	
	//---------------------------------
	function translateButtonAlt()
	{
		return 'សូមជួយជាមួយនឹងប្រែថា "ការសន្យាឆ្ពោះទៅរកពិភពលោកដោយគ្មានការបែងចែកនុយក្លេអ៊ែរ"';
	}
}
?>