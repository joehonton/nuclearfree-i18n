<?php
//=============================================================================
//
// File:         /i18n/lvThankyou.inc
//
// Language:     PHP
//
// Contents:     lv = Latviešu (Latvian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/lvBasePage.inc' );


//-------------------------------------
class lvThankyou extends lvBasePage
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
		return "Paldies par apņemoties pasauli bez kodola skaldīšanas";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ar pietiekami daudz balsis runājot droši uzlabot par kodola skaldīšanas briesmām, mēs varam padarīt šo pasauli bez kodola skaldīšanas.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "pasaulē, kodolieroču, skaldīšanu";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Paldies par jūsu solījumu</h1>

		<p>Paldies $personal_name.</p>
		
		<p>Es patiešām novērtēju, kam savu atbalstu šajā svarīgajā meklējumos. Jūs esat pievienojies $num_pledges citus, kuri ir devuši zvērestu.</p> 
		
		<p>Atcerieties, ka jābūt drosmīgiem - liecināt, kad ir īstais laiks. Ļaujiet jūsu draugiem un paziņām zinu, ka tu tici pasauli bez kodola skaldīšanas.</p>
		
		<p><strong>Es ceru, ka kopā mēs varam kaut ko mainīt.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>