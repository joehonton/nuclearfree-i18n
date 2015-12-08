<?php
//=============================================================================
//
// File:         /i18n/laThankyou.inc
//
// Language:     PHP
//
// Contents:     la = Latin
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/laBasePage.inc' );


//-------------------------------------
class laThankyou extends laBasePage
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
		return "Lorem nuclearis scissionis peccaret ad saecula";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Satis voces cum fiducia loquebatur de periculis nuclearis scissionis, hoc est, quae possunt fieri per omnia saecula nuclearis scissionis.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "orbis terrarum, nuclearis scissionis";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Gratias enim ad promissio</h1>

		<p>Gratias, $personal_name.</p>
		
		<p>Ego vere appretiaris habeat tantam apponitis super se. Alios jurasse num_pledges $num_pledges.</p> 
		
		<p>Mementote lii fiant intrepidi - cum tempus fuerit, in testimonium. Scio quia credis in amici et noti tui nuclearis scissionis saecula.</p>
		
		<p><strong>Spero quod pariter possumus differentiam.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>