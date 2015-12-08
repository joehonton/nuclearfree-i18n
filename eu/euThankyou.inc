<?php
//=============================================================================
//
// File:         /i18n/euThankyou.inc
//
// Language:     PHP
//
// Contents:     eu = Euskara (Basque)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 2, 2013
//
//=============================================================================

require_once( __DIR__ . '/euBasePage.inc' );


//-------------------------------------
class euThankyou extends euBasePage
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
		return "Eskerrik asko mundu bat fisio nuklearra gabe egiteko konpromisoa";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ahotsak nahikoa fisio nuklearraren arriskuei buruzko ausardia hitz batera, mundu hau egin ahal izango dugu, fisio nuklearra gabe.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "mundua, nuklearra, fisio";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Eskerrik asko zure promesa egiteko</h1>

		<p>Eskerrik $personal_name.</p>
		
		<p>Balora dut zure laguntza beharrik hau garrantzitsua bilatzea da. Sartu duzu $num_pledges beste batzuk hartu duten zin.</p> 
		
		<p>Gogoratu ausarta izan - deklaratuko unea eskubidea da. Utzi zure lagun eta ezagunen ezagutzen fisio nuklearra gabeko mundu bat dela uste duzu.</p>
		
		<p><strong>Elkarrekin diferentzia bat egin ahal izango dugu espero dut.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>