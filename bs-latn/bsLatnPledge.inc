<?php
//=============================================================================
//
// File:         /i18n/bsLatnPledge.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/bsLatnBasePage.inc' );


//-------------------------------------
class bsLatnPledge extends bsLatnBasePage
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
		return "A obećanje prema svijetu bez fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Pridružite zajedno sa sugrađanima svijeta u obećavši da govori hrabro o opasnostima koje nameće korištenje nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearne fisije, nuklearne energije, nuklearno oružje, govorim hrabro, obećanje, svečano obećavaju, kunem se, zakletvu";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Obećavam da govorim hrabro.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "više nema fisije" zakletvu sada!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "dati ime i prezime";
	}

	//---------------------------------
	function city()
	{
		return "grad ili rodni grad";
	}
	
	//---------------------------------
	function country()
	{
		return "državljanstvo";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Zakletva će biti efikasniji, ako ste dali svoje ime. Molim vas da ispunite obrazac?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vaš zakletvu bi biti smisleno ako ste dali svoj ​​rodni grad i nacionalnosti, ali ako želite da ih izostavite, samo "Obećavam" još jednom tipku pritisnite.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>A obećanje prema svijetu bez fisije</h1>
			
			<p>I, $personal_name, ujediniti sa svojim sugrađanima svijeta u obećavši da govori hrabro o opasnostima nametnuta Zemlje i svih njenih stanovnika po upotrebi nuklearne fisije u proizvodnju električne energije i vojno oružje.</p>
			
			<p><strong>Svečano obavezuju da govorim hrabro o opasnostima nuklearne energije.</strong> U zasluge korištenja nuklearne fisije u proizvodnju električne energije su preuveličane, a pravi dugoročni rizici su preveliki za nastavak.</p>
			
			<ol>
				<li>Električne energije proizvedene nuklearnih elektrana nije jeftiniji od drugih oblika proizvodnje električne energije.</li>
				<li>Nuklearne elektrane ne mogu biti 100% sigurni od katastrofalnih neuspjeha.</li>
				<li>U izotopa otpad stvorio nuklearne fisije će ostati otrovno za jako dugo vremena, a nemamo mjesta da ga stavim.</li>
				<li>Nuklearna energija nije čiste energije: na rudarstvo, glodanje, i obogaćivanje rude urana stvara velike ekološke otpadnih zemlje koje su štetne za ljude i divlje životinje.</li>
				<li>Obogaćeni uran za elektrane i visoko obogaćenog urana za nuklearno oružje su se sa istom opremom.</li>
			</ol>
			
			<p><strong>Svečano obavezuju da govorim hrabro o vojnoj upotrebi nuklearnog oružja.</strong> Došlo je vrijeme za sve narode da se odreknu upotrebe nuklearnog oružja.</p>
			
			<ol start='6'>
				<li>Nema moralno legitiman razlog za bilo pojedinca, organizacije ili države za korištenje nuklearnog oružja.</li>
				<li>Posjedovanje nuklearnog naoružanja kao sredstvo odvraćanja je propali politike.</li>
				<li>Nacija s nuklearno oružje bi trebalo da razviju planove za sigurno demontažu svom arsenalu.</li>
				<li>Nacija s nuklearnim sposobnostima treba se uključe u pregovore čiji je cilj potpuno ukidanje svih nuklearnih oružja.</li>
				<li>Niko ne treba da nastavi sa razvojem novih nuklearnih oružja.</li>
			</ol>
			
			<p>Zakleo da ovaj dan, $this_date, u<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>