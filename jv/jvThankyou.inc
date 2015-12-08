<?php
//=============================================================================
//
// File:         /i18n/jvThankyou.inc
//
// Language:     PHP
//
// Contents:     jv = Basa Jawa (Javanese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/jvBasePage.inc' );


//-------------------------------------
class jvThankyou extends jvBasePage
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
		return "Matur nuwun kanggo nglakoni menyang janapada tanpa nuklir fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Kanthi cukup wong ngandika karo wani bab beboyo saka nuklir fission, kita bisa supaya janapada iki tanpa nuklir fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "janapada, nuklir, fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Matur nuwun kanggo janji</h1>

		<p>Matur nuwun $personal_name.</p>
		
		<p>Aku tenan matur nuwun kanggo dhukungan ing nggoleki penting. Sampeyan wis gabungan $num_pledges wong liyane sing wis dijupuk sumpah.</p> 
		
		<p>Eling kudu wani - mreksanono marang nalika wektu tengen. Ayo kanca ngerti sing pracaya ing janapada tanpa nuklir fission.</p>
		
		<p><strong>Mugi sing bebarengan dhewe bisa nggawe prabédan karo.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>