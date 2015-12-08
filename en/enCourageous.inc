<?php
//=============================================================================
//
// File:         /i18n/enCourageous.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2014
//
// Initial date: May 31, 2014
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enCourageous extends enBasePage
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
		return "Courageous voices";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Real people courageously sharing hopes for a nuclear-free world.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'courage,courageous,voice,story,nuclear-free';
	}
	
	//=============================================================================
	// Buttons for story-preview
	//=============================================================================
	
	//---------------------------------
	function plusOneButtonAlt()
	{
		return 'This story is worth reading';
	}
	
	//---------------------------------
	function editButton()
	{
		return 'Edit';
	}
	
	//---------------------------------
	function editButtonAlt()
	{
		return 'Continue editing your story';
	}
	
	//---------------------------------
	function doneButton()
	{
		return 'Done';
	}
	
	//---------------------------------
	function doneButtonAlt()
	{
		return 'Send your story to Joseph Honton';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Courageous Voices</h1>
ENDHTML;
	}
}
?>