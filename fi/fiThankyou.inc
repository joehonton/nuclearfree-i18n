<?php
//=============================================================================
//
// File:         /i18n/fiThankyou.inc
//
// Language:     PHP
//
// Contents:     fi = Suomi (Finnish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 4, 2013
//
//=============================================================================

require_once( __DIR__ . '/fiBasePage.inc' );


//-------------------------------------
class fiThankyou extends fiBasePage
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
		return "Kiitos sitoutumista maailmaa ilman fissio";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Tarpeeksi äänet puhuvat rohkeasti vaaroista fissio, voimme tehdä tästä maailmasta ilman fissio.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "maailman, ydinvoima, fissio";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Kiitos lupaus</h1>

		<p>Kiitos $personal_name.</p>
		
		<p>Olen todella arvostavat tukeanne tässä tärkeässä tehtävässä. Olet liittynyt $num_pledges muita, jotka ovat ottaneet valan.</p> 
		
		<p>Muista olla rohkea - todistamasta, kun aika on oikea. Anna ystävät ja tuttavat tietävät, että uskot maailmassa ilman fissio.</p>
		
		<p><strong>Toivon, että voimme yhdessä tehdä ero.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>