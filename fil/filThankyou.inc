<?php
//=============================================================================
//
// File:         /i18n/filThankyou.inc
//
// Language:     PHP
//
// Contents:     fil = Filipino
//
// Author:       Joe Honton © 2013
//
// Initial date: October 5, 2013
//
//=============================================================================

require_once( __DIR__ . '/filBasePage.inc' );


//-------------------------------------
class filThankyou extends filBasePage
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
		return "Salamat sa iyo para tanggapin ang alok sa isang mundo na walang nukleyar fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "May sapat na tinig na nagsasalita na may tapang tungkol sa mga panganib ng nukleyar fission, maaari naming gawin ang isang mundo na walang nukleyar fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "mundo, nukleyar, fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Salamat sa iyo para sa iyong mga pangako</h1>

		<p>Salamat sa iyo $personal_name.</p>
		
		<p>Ko talagang pinahahalagahan pagkakaroon ng iyong suporta sa ito mahalaga pakikipagsapalaran. Sumali ka sa $num_pledges na kinuha ang panunumpa.</p> 
		
		<p>Tandaang maging malakas ang loob - tumestigo kapag ang oras ay tama. Hayaan ang iyong mga kaibigan at mga kakilala malaman na naniniwala ka sa isang mundo na walang nukleyar fission.</p>
		
		<p><strong>Umaasa ako na magkasama maaari naming gumawa ng isang pagkakaiba.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>