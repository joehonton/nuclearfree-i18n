<?php
//=============================================================================
//
// File:         /i18n/ltThankyou.inc
//
// Language:     PHP
//
// Contents:     lt = Lietuvių (Lithuanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/ltBasePage.inc' );


//-------------------------------------
class ltThankyou extends ltBasePage
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
		return "Dėkojame už įsipareigojant pasaulį be branduolinio dalijimosi";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Su pakankamai balsai kalbėti drąsiai apie branduolių dalijimosi pavojų, mes galime padaryti šį pasaulį be branduolinio skilimo.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "pasaulis, branduolinė energija, skilimas";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Dėkojame už Jūsų pažadas</h1>

		<p>Dėkoju $personal_name.</p>
		
		<p>Aš tikrai vertiname turintys savo paramą šiuo svarbiu siekiu. Jūs prisijungėte $num_pledges kitiems, kurie prisiekė.</p> 
		
		<p>Nepamirškite būti drąsus - liudyti, kai laikas yra teisė. Tegul jūsų draugų ir pažįstamų žinau, kad tu tiki be branduolių dalijimosi pasaulyje.</p>
		
		<p><strong>Tikiuosi, kad kartu mes galime padaryti skirtumą.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>