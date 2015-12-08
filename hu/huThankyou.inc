<?php
//=============================================================================
//
// File:         /i18n/huThankyou.inc
//
// Language:     PHP
//
// Contents:     hu = Magyar (Hungarian)
//
// Author:       Joe Honton © 2013
//
// Initial date: Octiber 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/huBasePage.inc' );


//-------------------------------------
class huThankyou extends huBasePage
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
		return "Köszönjük, hogy vállalta, hogy egy olyan világban, anélkül, hogy atommaghasadásra";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Elegendő hang beszél merészen a veszélyek a atommaghasadásra, tudjuk, hogy ez egy olyan világban, anélkül, hogy atommaghasadásra.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "világ, a nukleáris, hasadási";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Köszönjük az ígéretét</h1>

		<p>Köszönöm $personal_name.</p>
		
		<p>Nagyra értékelem, amelyek a támogatás ezt a fontos küldetést. Ön csatlakozott $num_pledges, akik esküt tettek.</p> 
		
		<p>Ne feledje, hogy bátor - tanúskodik, amikor eljön az ideje. Hagyd, hogy a barátok és ismerősök, hogy hisz egy olyan világban, anélkül, hogy atommaghasadásra.</p>
		
		<p><strong>Remélem, hogy együtt tudunk különbséget tenni.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>