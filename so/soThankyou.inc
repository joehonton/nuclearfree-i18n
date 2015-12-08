<?php
//=============================================================================
//
// File:         /i18n/soThankyou.inc
//
// Language:     PHP
//
// Contents:     so = Af-Soomaali  (Somali)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/soBasePage.inc' );


//-------------------------------------
class soThankyou extends soBasePage
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
		return "Waad ku mahadsan tahay ballanqaadaya dunida ah aan lahayn qashin attam nukliyeerka";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Iyada oo codad ku filan dhiirranaada hadlayay saabsan khatarta qashin attam nukliyeerka, waxaan ka dhigi kartaa tan dunida ah aan lahayn qashin attam nukliyeerka.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dunida, qashin attam nukliyeerka";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Waad ku mahadsan tahay ballankii</h1>

		<p>Waad ku mahadsan tahay $personal_name.</p>
		
		<p>Runtii waxaan u doorbida in aad taageero on baaris muhiim tan. Waxaad ku soo biiray $num_pledges kuwa kale kuwaas oo qaatay dhaartii.</p> 
		
		<p>Xasuuso inaad dhiirranaada - markhaati fura in wakhtigu goortuu yahay xaq. Ha saaxiibadaa iyo kuway isbarteen ogahay inaad rumaysan tahay in adduunka oo aan qashin attam nukliyeerka.</p>
		
		<p><strong>Waxaan rajaynayaa in wada waxaan ka dhigi kartaa faraqa u ah.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>