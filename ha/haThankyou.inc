<?php
//=============================================================================
//
// File:         /i18n/haThankyou.inc
//
// Language:     PHP
//
// Contents:     ha = Harshen Hausa
//
// Author:       Joe Honton © 2014
//
// Initial date: January 18, 2014
//
//=============================================================================

require_once( __DIR__ . '/haBasePage.inc' );


//-------------------------------------
class haThankyou extends haBasePage
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
		return "Na gode da aikata zuwa duniya ba tare da makaman nukiliya fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Tare da isasshen ƙarfin hali da muryoyin da yake magana game da hatsarori da makaman nukiliya fission, za mu iya yin wannan a duniya ba tare da makaman nukiliya fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "duniya, da makaman nukiliya fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Na gode da alkawarin</h1>

		<p>Na gode $personal_name.</p>
		
		<p>Ina godiya sosai da ciwon da goyon baya a kan wannan muhimmiyar nema. Ka shiga $num_pledges wasu suka dauka da rantsuwar.</p> 
		
		<p>Ka tuna ta zama m - shaida da lokaci da ke daidai. Bari abokanka da dangi san cewa ku yi ĩmãni, a cikin duniya, ba tare da makaman nukiliya fission.</p>
		
		<p><strong>Ina fatan cewa, tare za mu iya yin bambanci.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>