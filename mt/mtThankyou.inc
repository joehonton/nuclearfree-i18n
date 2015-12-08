<?php
//=============================================================================
//
// File:         /i18n/mtThankyou.inc
//
// Language:     PHP
//
// Contents:     mt = Malti (Maltese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/mtBasePage.inc' );


//-------------------------------------
class mtThankyou extends mtBasePage
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
		return "Grazzi għal min jikkommetti għal dinja mingħajr fissjoni nukleari";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Bil vuċijiet biżżejjed jitkellem b'kuraġġ dwar il-perikli tal-fissjoni nukleari, nistgħu nagħmlu dan dinja mingħajr fissjoni nukleari.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dinja, nukleari, fissjoni";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Grazzi għall-wegħda tiegħek</h1>

		<p>Grazzi $personal_name.</p>
		
		<p>Jien verament japprezzaw li jkollhom l-appoġġ tiegħek fuq dan tfittxija importanti. Inti ngħaqdu $num_pledges oħrajn li ħadu l-ġurament.</p> 
		
		<p>Ftakar li jkun kuraġġuża - jixhdu meta l-ħin huwa dritt. Ħalli ħbieb tiegħek u konoxxenti jafu li inti temmen f'dinja mingħajr fissjoni nukleari.</p>
		
		<p><strong>Nittama li flimkien nistgħu nagħmlu differenza.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>