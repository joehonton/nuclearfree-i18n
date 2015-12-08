<?php
//=============================================================================
//
// File:         /i18n/azLatnThankyou.inc
//
// Language:     PHP
//
// Contents:     az-Latn = Azərbaycanca (Azerbaijani) using Google Translate
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/azLatnBasePage.inc' );


//-------------------------------------
class azLatnThankyou extends azLatnBasePage
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
	}
	
	//=============================================================================
	// Standard <head> items
	//=============================================================================
	
	//---------------------------------
	function pageTitle()
	{
		return "Nüvə parçalanma olmadan dünyanın törətməkdə üçün təşəkkür edirik";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Kifayət qədər səsləri nüvə parçalanma təhlükələri haqqında yüreklice danışan, biz nüvə parçalanma olmadan bu dünya edə bilərsiniz.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dünya, nüvə, atom";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Sizin söz üçün təşəkkür edirik</h1>

		<p>Siz $personal_name edirik.</p>
		
		<p>Mən, həqiqətən, bu mühüm araşdırma dəstək olan qiymətləndiririk. Siz andı almış $num_pledges başqaları qoşulublar.</p> 
		
		<p>Cəsarətli olmaq saxla - zaman doğru zaman göstərir. Sizin dostlar və tanışlar nüvə parçalanma olmadan bir dünyada iman ki, bildirin.</p>
		
		<p><strong>Birlikdə biz bir fərq edə bilər ki, ümid edirik.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>