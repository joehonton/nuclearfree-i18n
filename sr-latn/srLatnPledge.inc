<?php
//=============================================================================
//
// File:         /i18n/srLatnPledge.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/srLatnBasePage.inc' );


//-------------------------------------
class srLatnPledge extends srLatnBasePage
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
		return "Obećanje ka svetu bez fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Pridružite zajedno sa sugrađanima sveta u obećavajući da hrabro govori o opasnostima koje nameće korišćenje nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearna fisija, nuklearna energija, nuklearno oružje, govori hrabro, obećanje, Svečano se zaklinjem, zaklinjem, zakletva";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Obećavam da hrabro govori.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "više ne fisija" zakletvu sada!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "dato ime i prezime";
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
		return "Zakletva bi biti efikasniji ako ste dali svoje ime. Molim vas popunite formular?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vaša zakletva bi više smisla ako se obezbedila svoj rodni grad i državljanstvo, ali ako želite da ih izostaviti, samo pritisnite "Obećavam" još jednom dugme.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Obećanje ka svetu bez fisije</h1>
			
			<p>Ja, $personal_name, ujedini sa svojim sugrađanima sveta u obećavajući da hrabro govori o opasnostima nametnuta Zemlji i svim njenim stanovnicima upotrebom nuklearne fisije u proizvodnji električne energije i u vojnim oružjem.</p>
			
			<p><strong>Svečano se zaklinjem da hrabro govori o opasnostima od nuklearne energije.</strong> Zasluge koristeći nuklearnu fisiju u proizvodnju električne energije su preuveličane, a pravi dugoročne rizici su suviše veliki da se nastavi.</p>
			
			<ol>
				<li>Električna energija generiše nuklearnih elektrana nije jeftiniji od drugih oblika električne energije.</li>
				<li>Nuklearne elektrane ne mogu biti 100% siguran od katastrofalnog neuspeha.</li>
				<li>Izotopski otpadom stvorio nuklearne fisije će ostati toksičan za veoma dugo, a nemamo gde da ga stavi.</li>
				<li>Nuklearna energija nije čista energija: rudarstvo, mlevenje, i obogaćivanje rude uranijuma stvara velike ekološke otpadnih zemlje koje su štetne za ljude i živi svet.</li>
				<li>Obogaćen uranijum za elektrane i visoko obogaćenog uranijuma za nuklearno oružje su sa istom opremom.</li>
			</ol>
			
			<p><strong>Svečano se zaklinjem da hrabro govori o vojnoj upotrebi nuklearnog oružja.</strong> Došlo je vreme za sve nacije da se odreknu upotrebe nuklearnog oružja.</p>
			
			<ol start='6'>
				<li>Nema moralno legitiman razlog za bilo kog pojedinca, organizacija, ili država koristiti nuklearno oružje.</li>
				<li>Posedovanje nuklearnog oružja za odvraćanje je propao politika.</li>
				<li>Nacija sa nuklearnim oružjem treba da razviju planove za bezbedno demontiranje svoj arsenal.</li>
				<li>Nacija sa nuklearnim sposobnostima treba da se uključe u pregovore čiji je cilj potpuna ukidanje svih nuklearnog oružja.</li>
				<li>Niko ne bi trebalo da nastavi razvoj novih nuklearnih oružja.</li>
			</ol>
			
			<p>Overeni do današnjeg dana, $this_date, u<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>