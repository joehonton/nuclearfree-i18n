<?php
//=============================================================================
//
// File:         /i18n/euPledge.inc
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
class euPledge extends euBasePage
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
		return "Fisio gabeko mundu baterantz promesa";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Elkartzen munduko herritarren duten ausardia hitz fisio nuklearraren erabilera inposatutako arriskuei buruzko zin egin zuen.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fisio nuklearra, energia nuklearra, arma nuklearrak, kemena, promesa, handikiro konpromisoa, zin, zin hitz";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Egiteko ausardia hitz agintzen dut.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zin egiten du, "ez gehiago fisio" zin orain!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Zure izena eta abizena";
	}

	//---------------------------------
	function city()
	{
		return "Zure hiri edo jaioterrian";
	}
	
	//---------------------------------
	function country()
	{
		return "Zure nazionalitatea";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Zin eraginkorragoa izango litzateke, baldin eta zure izena bada. Ezin bete mesedez duzu?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Zure zin gehiago esanguratsua izango litzateke emandako duzu zure jaioterrian eta naziotasuna bada, baina nahi dituzu kendu nahi izanez gero, besterik gabe, "agintzen dut" botoia behin sakatu.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Fisio gabeko Mundu baterantz Promesa</h1>
			
			<p>Dut, $personal_name, nire munduko herritarren batera batzeko ausardia hitz Lurraren eta bertako biztanleek inposatutako du fisio nuklearraren erabilera elektrizitatea sortzen du eta arma militarrak arabera arriskuei buruzko zin egin zuen.</p>
			
			<p><strong>Konpromisoa handikiro dut ausardia hitz energia nuklearraren arriskuei buruz.</strong> Fisio nuklearra erabiliz elektrizitatea sortzeko merituak gehiegizkoa dira, eta benetako epe luzeko arrisku oso handia jarraitzeko.</p>
			
			<ol>
				<li>Energia elektrikoa indar nuklearraren landareak sortutako ez da elektrizitatea sortzeko beste modu batzuk baino merkeagoa da.</li>
				<li>Energia nuklearra landareak ezin dira% 100 porrota hondamendi seguru.</li>
				<li>fisio nuklearrak sortutako isotopikoak hondakin toxikoak egongo da, oso denbora luzean, eta hau ez da jarri behar dugu.</li>
				<li>Energia nuklearra ez da energia garbia: meatzaritza, fresaketa, mea eta uranioa aberasteko ekologiko handiak sortzen ditu hondakin-lurrak dira, gizakien eta fauna kaltegarria.</li>
				<li>Aberastu zentral oso aberastu eta arma nuklearrak egiteko uranioa egiteko uranioa bera ekipamendu egin.</li>
			</ol>
			
			<p><strong>Konpromisoa handikiro dut arma nuklearrak erabilera militarrak ausardia buruz hitz egiten.</strong> Garaia da nazio guztiak etorri arma nuklearrak erabilera uko egin.</p>
			
			<ol start='6'>
				<li>Ez dago moralki legitimoa edozein, banako, erakunde, edo egoera arma nuklearrak erabiltzeko arrazoia da.</li>
				<li>Disuasio gisa, arma nuklearrak jabetzaren huts egin du politika bat da.</li>
				<li>Arma nuklearrak dituzten Nazio segurtasunez beren hornikuntzen desegitea planak garatu behar da.</li>
				<li>Gaitasun nuklearra nazio behar dituzten negoziazioak helburu guztiak arma nuklearrak indargabetzea osoa da burutzeko.</li>
				<li>No bat arma nuklear berriak garatzeko ekiteko behar.</li>
			</ol>
			
			<p>Egun horretarako zinpeko, $this_date, en<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>