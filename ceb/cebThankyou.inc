<?php
//=============================================================================
//
// File:         /i18n/cebThankyou.inc
//
// Language:     PHP
//
// Contents:     ceb = Binisaya (Cebuano)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/cebBasePage.inc' );


//-------------------------------------
class cebThankyou extends cebBasePage
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
		return "Salamat sa pagbuhat sa usa ka kalibutan nga walay nukleyar fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Uban sa igo nga mga tingog nga namulong nga maisugon sa mga kakuyaw sa nukleyar fission, kita sa paghimo niini nga usa ka kalibutan nga walay nukleyar fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kalibutan, nukleyar, fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Salamat sa imong saad</h1>

		<p>Salamat sa $personal_name.</p>
		
		<p>Ko gayud makadayeg sa ingon nga ang inyong suporta niini nga importante nga pagpangita. Ikaw mikuyog sa $num_pledges sa uban nga gikuha sa panumpa.</p> 
		
		<p>Hinumdumi nga mahimong maisugon - nagpamatuod sa diha nga sa panahon nga matarung. Himoa nga ang inyong mga higala ug mga kaila nasayud nga ikaw nagtuo sa usa ka kalibutan nga walay nukleyar fission.</p>
		
		<p><strong>Ako maglaum nga ang manag-uban kita makahimo og kalainan. </strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>