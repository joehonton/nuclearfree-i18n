<?php
//=============================================================================
//
// File:         /i18n/daThankyou.inc
//
// Language:     PHP
//
// Contents:     da = Dansk (Danish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/daBasePage.inc' );


//-------------------------------------
class daThankyou extends daBasePage
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
		return "Tak for at forpligte sig til en verden uden nuklear fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Med nok stemmer taler modigt om farerne ved nuklear fission, kan vi gøre dette til en verden uden nuklear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "verden, nukleare, fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Tak for dit løfte</h1>

		<p>Tak $personal_name.</p>
		
		<p>Jeg virkelig sætter pris på at have din støtte på dette vigtige søgen. Du har sluttet $num_pledges andre, der har taget eden.</p> 
		
		<p>Husk at være modig - vidner, når tiden er inde. Lad dine venner og bekendte ved, at du tror på en verden uden nuklear fission.</p>
		
		<p><strong>Jeg håber, at vi sammen kan gøre en forskel.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>