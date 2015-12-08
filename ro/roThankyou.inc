<?php
//=============================================================================
//
// File:         /i18n/roThankyou.inc
//
// Language:     PHP
//
// Contents:     ro = Română (Romanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/roBasePage.inc' );


//-------------------------------------
class roThankyou extends roBasePage
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
		return "Vă mulțumim pentru a comite o lume fără fisiunea nucleară";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Cu destule voci vorbind cu curaj despre pericolele de fisiune nucleară, putem face acest lucru o lume fără fisiunea nucleară.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "lume, nucleare, fisiune";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Vă mulțumim pentru promisiunea</h1>

		<p>Multumesc $personal_name.</p>
		
		<p>Apreciez având sprijinul dumneavoastră în această căutare importante. Ai s-au alăturat $num_pledges de alții, care au depus jurământul.</p> 
		
		<p>Amintiți-vă să fie curajos - depună mărturie atunci când este momentul potrivit. Să prietenii și cunoscuții știu că tu crezi într-o lume fără fisiunea nucleară.</p>
		
		<p><strong>Sper ca împreună să putem face o diferență.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>