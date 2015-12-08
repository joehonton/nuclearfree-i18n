<?php
//=============================================================================
//
// File:         /i18n/caPledge.inc
//
// Language:     PHP
//
// Contents:     ca = Català (Catalan)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/caBasePage.inc' );


//-------------------------------------
class caPledge extends caBasePage
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
		return "Promesa per un món sense fissió";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unir amb altres ciutadans del món en la promesa de parlar amb valentia sobre els perills impostos per l'ús de la fissió nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "la fissió nuclear, l'energia nuclear, armes nuclears, parlar amb valentia, promesa solemne promesa, juren, jurament";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Em comprometo a parlar amb valentia.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Juro que el "no més de fissió" jurament ara!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "El seu nom i cognom";
	}

	//---------------------------------
	function city()
	{
		return "La seva ciutat o poble natal";
	}
	
	//---------------------------------
	function country()
	{
		return "la seva nacionalitat";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "El jurament seria més eficaç si va proporcionar el seu nom. Podria vostè si us plau, ompli el formulari?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'El seu jurament seria més significatiu si es va proporcionar a la seva ciutat natal i la nacionalitat, però si voleu ometre-les, només ha de prémer el botó "Promet" una vegada més.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Promesa per un món sense fissió</h1>
			
			<p>Jo, $personal_name, m'uneixo als meus compagnons ciutadans del món en la promesa de parlar amb valentia sobre els perills que imposa sobre la Terra i tots els seus habitants per l'ús de la fissió nuclear en la generació d'electricitat i en les armes militars.</p>
			
			<p><strong>Em compromet solemnement a parlar amb valentia sobre els perills de l'energia nuclear.</strong> Els avantatges de la utilització de la fissió nuclear en la generació d'electricitat són exagerades, i els veritables riscos a llarg termini són massa grans per continuar.</p>
			
			<ol>
				<li>L'electricitat generada per les plantes d'energia nuclear no és més barat que altres formes de generació d'electricitat.</li>
				<li>Les centrals nuclears no es poden fer 100% segur d'una falla catastròfica.</li>
				<li>Els residus isotòpica creat per la fissió nuclear continuarà sent tòxics durant molt de temps, i no tenim lloc per posar-ho.</li>
				<li>L'energia nuclear no és una energia neta: l'extracció, mòlta i l'enriquiment d'urani genera grans deserts ecològics que són perjudicials per als éssers humans i la vida silvestre.</li>
				<li>Per urani enriquit per a les centrals elèctriques i l'urani altament enriquit per a armes nuclears estan fets amb el mateix equip.</li>
			</ol>
			
			<p><strong>Em compromet solemnement a parlar amb valentia sobre l'ús militar de les armes nuclears.</strong> ha arribat el moment de que totes les nacions a renunciar a l'ús de les armes nuclears.</p>
			
			<ol start='6'>
				<li>No hi ha cap raó moralment legítim per a qualsevol persona, organització o estat per l'ús d'armes nuclears.</li>
				<li>La possessió d'armes nuclears com un element de dissuasió és una política fracassada.</li>
				<li>Les nacions amb armes nuclears han de desenvolupar plans per desmantellar de forma segura el seu arsenal.</li>
				<li>Les nacions amb capacitat nuclear han de participar en les negociacions, l'objectiu és l'abolició total de les armes nuclears.</li>
				<li>No s'ha de perseguir el desenvolupament de noves armes nuclears.</li>
			</ol>
			
			<p>Jurat el dia d'avui, $this_date, en<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>