<?php
//=============================================================================
//
// File:         /i18n/enStory.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: November 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enStory extends enBasePage
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
		return "What's your story?";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Why do you believe in a world without fission?';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'email,contact,message';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function previewButton()
	{
		return 'Preview';
	}
	
	//---------------------------------
	function previewButtonAlt()
	{
		return 'Preview your message and examine it for completeness';
	}
	
	//=============================================================================
	// Form input labels and title attributes
	//=============================================================================
	
	//---------------------------------
	function email()
	{
		return 'Email:  your@email-address.com';
	}
		
	//---------------------------------
	function emailAlt()
	{
		return 'Your email address. This is where I will send my reply.';
	}
		
	//---------------------------------
	function toEmailAlt()
	{
		return 'Please use this web page to ensure direct delivery to this email address';
	}

	//---------------------------------
	function languageAlt()
	{
		return 'Use your native language for the greatest impact';
	}
	
	//---------------------------------
	function title()
	{
		return 'Title:  In just a few words, what is your story about?';
	}
	
	//---------------------------------
	function storyAlt()
	{
		return "Your story:  Share your thoughts on the topic of nuclear fission.";
	}
	
	function optional()
	{
		return "Optional";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingEmail()
	{
		return 'If you want to guarantee that your story is accepted, you should provide an email address.';
	}
		
	//---------------------------------
	function missingTitle()
	{
		return 'Please provide a short title to your story.';
	}
	
	//---------------------------------
	function missingStory()
	{
		return 'Please share your thoughts on the topic of nuclear fission.';
	}
	
	//---------------------------------
	function thankyouStory()
	{
		return 'Thank you for sharing your story. I read every story I receive.';
	}
}
?>