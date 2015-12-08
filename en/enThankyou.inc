<?php
//=============================================================================
//
// File:         /i18n/enThankyou.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: September 10, 2013
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enThankyou extends enBasePage
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
		return 'Thank you for taking the pledge';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'With enough voices speaking out about the dangers of nuclear fission, we can make this a nuclear-free world.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'thank you for speaking out,nuclear free,nuclear power plants,nuclear energy,nuclear weapons,nuclear fission';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Thank You for Taking the Pledge</h1>

		<p>Thank you $personal_name.</p>

		<p>I really appreciate having your support on this important quest. You have joined $pledges others who have taken the pledge.</p> 
		
		<p>Remember to be courageous — speak up when the time is right. Let your friends and acquaintances know that you believe in a nuclear-free world.</p>
		
		<p><strong>I hope that together we can make a difference.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>