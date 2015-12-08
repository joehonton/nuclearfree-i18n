<?php
//=============================================================================
//
// File:         /i18n/svThankyou.inc
//
// Language:     PHP
//
// Contents:     sv = Svenska (Swedish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/svBasePage.inc' );


//-------------------------------------
class svThankyou extends svBasePage
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
		return "Tack för att binda dig till en värld utan kärnklyvning";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Med tillräckligt många röster som talar modigt om farorna med kärnklyvning, kan vi göra detta till en värld utan kärnkraft.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "värld, kärnkraft, kärnklyvning";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Tack för ditt löfte</h1>

		<p>Tack $personal_name.</p>
		
		<p>Jag uppskattar verkligen att ha ert stöd i denna viktiga strävan. Du har anslutit $num_pledges andra som har avlagt ed.</p> 
		
		<p>Kom ihåg att vara modig - vittna när tiden är rätt. Låt dina vänner och bekanta vet att du tror på en värld utan kärnkraft.</p>
		
		<p><strong>Jag hoppas att vi tillsammans kan göra skillnad.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>