<?php
//=============================================================================
//
// File:         /i18n/sqThankyou.inc
//
// Language:     PHP
//
// Contents:     sq = Shqip (Albanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/sqBasePage.inc' );


//-------------------------------------
class sqThankyou extends sqBasePage
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
		return "Faleminderit për kryerje të një bote pa atomike bërthamore";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Me zëra të mjaftueshme duke folur me guxim rreth rreziqeve të atomike bërthamore, ne mund të bëjë këtë një botë pa atomike bërthamore.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "bota, bërthamore, Fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Faleminderit për premtimin tuaj</h1>

		<p>Faleminderit $personal_name.</p>
		
		<p>Unë me të vërtetë të vlerësojmë që ka mbështetjen tuaj në këtë kërkim rëndësishëm. Ju keni bashkuar $num_pledges tjerët të cilët kanë bërë betimin.</p> 
		
		<p>Mos harroni të jetë i guximshëm - të dëshmojë, kur koha është e drejtë. Le miqtë tuaj dhe të njohurit e di se ti beson në një botë pa atomike bërthamore.</p>
		
		<p><strong>Unë shpresoj që së bashku ne mund të bëjë një ndryshim.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>