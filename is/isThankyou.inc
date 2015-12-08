<?php
//=============================================================================
//
// File:         /i18n/isThankyou.inc
//
// Language:     PHP
//
// Contents:     is = Íslenska (Icelandic)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/isBasePage.inc' );


//-------------------------------------
class isThankyou extends isBasePage
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
		return "Þakka þér fyrir að fremja til a veröld án kjarnaklofnun";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Með nógu raddir tala hugrekki um hættur kjarnaklofnun, getum við gert þessa heim án kjarnaklofnun.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "heimur, kjarnorku, kjarnaklofnun";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Þakka þér fyrir fyrirheiti þínu</h1>

		<p>Þakka þér $personal_name.</p>
		
		<p>Ég virkilega þakka að hafa stuðning á þessu mikilvæga leit. Þú tekur þátt $num_pledges aðrir sem hafa tekið eið.</p> 
		
		<p>Mundu að vera hugrökk - vitna þegar tíminn er réttur. Láttu vini þína og kunningja vita að þú trúir á heim án kjarnaklofnun.</p>
		
		<p><strong>Ég vona að saman getum við haft áhrif.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>