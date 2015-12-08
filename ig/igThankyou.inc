<?php
//=============================================================================
//
// File:         /i18n/igThankyou.inc
//
// Language:     PHP
//
// Contents:     ig = Asụsụ Igbo
//
// Author:       Joe Honton © 2014
//
// Initial date: April 27, 2014
//
//=============================================================================

require_once( __DIR__ . '/igBasePage.inc' );


//-------------------------------------
class igThankyou extends igBasePage
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
		return "Thank you for committing to a world without nuclear fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "With enough voices speaking courageously about the dangers of nuclear fission, we can make this a world without nuclear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "world,nuclear fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Thank you for your promise</h1>

		<p>Thank you $personal_name.</p>
		
		<p>I really appreciate having your support on this important quest. You have joined $num_pledges others who have taken the oath.</p> 
		
		<p>Remember to be courageous — testify when the time is right. Let your friends and acquaintances know that you believe in a world without nuclear fission.</p>
		
		<p><strong>I hope that together we can make a difference.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>