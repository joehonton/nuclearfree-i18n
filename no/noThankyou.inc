<?php
//=============================================================================
//
// File:         /i18n/noThankyou.inc
//
// Language:     PHP
//
// Contents:     no = Norsk (Norwegian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/noBasePage.inc' );


//-------------------------------------
class noThankyou extends noBasePage
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
		return "Takk for at du forplikter deg til en verden uten kjernefysisk fisjon";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Med nok stemmer snakker modig om farene ved fisjon, kan vi gjøre dette til en verden uten kjernefysisk fisjon.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "verden, kjernekraft, fisjon";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Takk for at du løftet din</h1>

		<p>Takk $personal_name.</p>
		
		<p>Jeg virkelig setter pris på å ha støtte på dette viktige oppdrag. Du har sluttet $num_pledges andre som har tatt i ed.</p> 
		
		<p>Husk å være modig - vitner om når tiden er riktig. La dine venner og bekjente vet at du tror på en verden uten kjernefysisk fisjon.</p>
		
		<p><strong>Jeg håper at vi sammen kan gjøre en forskjell.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>