<?php
//=============================================================================
//
// File:         /i18n/daPledge.inc
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
class daPledge extends daBasePage
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
		return "Løfte hen imod en verden uden fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Deltag sammen med medborgere i verden, lover at tale modigt om farerne pålagt af anvendelsen af ​​nuklear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fission, atomenergi, atomvåben, tale modigt, lover højtideligt løfte, sværger, ed";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Jeg lover at tale modigt.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sværger de "ikke mere fission" ed nu!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Dit fornavn og efternavn";
	}

	//---------------------------------
	function city()
	{
		return "Din by eller hjemby";
	}
	
	//---------------------------------
	function country()
	{
		return "Din nationalitet";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Den ed ville være mere effektiv, hvis du har opgivet dit navn. Kunne du udfylde formularen?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Din ed ville være mere mening, hvis du har opgivet din hjemby og nationalitet, men hvis du ønsker at udelade dem, bare trykke på "jeg lover" knappen en gang mere.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Løfte hen imod en verden uden fission</h1>
			
			<p>Jeg, $personal_name, forene sig med mine medborgere i verden, lover at tale modigt om farerne pålagt Jorden og alle dens indbyggere ved anvendelse af nuklear fission i produktion af elektricitet og i militære våben.</p>
			
			<p><strong>Jeg højtideligt lover at tale modigt om farerne ved atomkraft.</strong> Fordelene ved at bruge nuklear fission i elproduktionen er overdrevne, og de ​​sande langsigtede risici er for store til at fortsætte.</p>
			
			<ol>
				<li>Elektricitet fra atomkraftværker er ikke billigere end andre former for elproduktion.</li>
				<li>Atomkraftværker kan ikke gøres 100% sikkert fra katastrofale fejl.</li>
				<li>Den isotopiske affald skabt af nuklear fission vil forblive giftigt i meget lang tid, og vi har ingen sted at sætte det.</li>
				<li>Atomkraft er ikke ren energi: minedrift, fræsning, og berigelse af uran malm skaber store økologiske ødemarker, der er skadelige for mennesker og dyreliv.</li>
				<li>Beriget uran til kraftværker og højt beriget uran til atomvåben er lavet med det samme udstyr.</li>
			</ol>
			
			<p><strong>Jeg højtideligt lover at tale modigt over den militære anvendelse af atomvåben.</strong> Tiden er kommet for alle nationer til at give afkald på brugen af ​​atomvåben.</p>
			
			<ol start='6'>
				<li>Der er ikke nogen moralsk legitim grund til enhver person, organisation eller stat at bruge atomvåben.</li>
				<li>Besiddelse af atomvåben som en afskrækkende er en mislykket politik.</li>
				<li>Nationer med atomvåben skal udvikle planer for sikker demontering deres arsenal.</li>
				<li>Nationer med atomvåben skal engagere sig i forhandlingerne, hvis mål er en fuldstændig afskaffelse af alle atomvåben.</li>
				<li>Ingen bør fortsætte udviklingen af ​​nye atomvåben.</li>
			</ol>
			
			<p>Svoret til denne dag, $this_date i<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>