<?php
//=============================================================================
//
// File:         /i18n/cyThankyou.inc
//
// Language:     PHP
//
// Contents:     cy = Cymraeg (Welsh)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/cyBasePage.inc' );


//-------------------------------------
class cyThankyou extends cyBasePage
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
		return "Diolch i chi am gyflawni i fyd heb ymholltiad niwclear";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Gyda digon o leisiau siarad wrol am beryglon ymholltiad niwclear, gallwn wneud hwn yn byd heb ymholltiad niwclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "byd, niwclear, ymholltiad";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Diolch i chi am eich addewid</h1>

		<p>Diolch i chi $personal_name.</p>
		
		<p>Fi 'n sylweddol yn gwerthfawrogi cael eich cefnogaeth ar y cwest pwysig. Rydych wedi ymuno $num_pledges eraill sydd wedi cymryd y llw.</p> 
		
		<p>Cofiwch fod yn ddewr - dystio pan fydd yr amser yn iawn. Gadewch i'ch ffrindiau a chydnabod yn gwybod eich bod yn credu mewn byd heb ymholltiad niwclear.</p>
		
		<p><strong>Yr wyf yn gobeithio bod, gyda'n gilydd gallwn wneud gwahaniaeth.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>