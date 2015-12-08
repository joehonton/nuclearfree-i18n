<?php
//=============================================================================
//
// File:         /i18n/noPledge.inc
//
// Language:     PHP
//
// Contents:     no = Norsk (Norwegian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/noBasePage.inc' );


//-------------------------------------
class noPledge extends noBasePage
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
		return "Et løfte mot en verden uten fisjon";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Gå sammen med andre borgere av verden i å love å snakke modig om farene som følger av bruk av kjernefysisk fisjon.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kjernefysisk fisjon, kjernekraft, atomvåpen, snakke modig, løfte, høytidelig løfte, sverger ed";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Jeg lover å snakke modig.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sverger "ikke mer fisjon" ed nå!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Ditt fornavn og etternavn";
	}

	//---------------------------------
	function city()
	{
		return "Din by eller hjemby";
	}
	
	//---------------------------------
	function country()
	{
		return "Din nasjonalitet";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Eden ville være mer effektivt hvis du har oppgitt navnet ditt. Kan du fylle ut skjemaet?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Din ed ville være mer meningsfylt hvis du har oppgitt din hjemby og nasjonalitet, men hvis du ønsker å utelate dem, trykker du bare på "Jeg lover"-knappen en gang til.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Et løfte mot en verden uten fisjon</h1>
			
			<p>Jeg, $personal_name, forene med mine medborgere i verden i å love å snakke modig om farene pålagt jorden og alle dens innbyggere ved bruk av kjernefysisk fisjon i produksjon av elektrisitet og i militære våpen.</p>
			
			<p><strong>Jeg høytidelig lover å snakke modig om farene ved kjernekraft.</strong> Fortjeneste av å bruke kjernefysisk fisjon i produksjon av elektrisitet er overdrevet, og de ​​virkelige langsiktige risikoen er for stor til å fortsette.</p>
			
			<ol>
				<li>Elektrisitet generert av atomkraftverk er ikke billigere enn andre former for kraftproduksjon.</li>
				<li>Kjernekraftverk kan ikke gjøres 100% sikker fra katastrofale feil.</li>
				<li>Den isotoper avfall skapt av kjernefysisk fisjon vil forbli giftige i svært lang tid, og vi har ikke noe sted å sette den.</li>
				<li>Kjernekraft er ikke ren energi: gruvedrift, fresing, og anriking av uran malm skaper store økologiske avfall-lander som er skadelige for mennesker og dyr.</li>
				<li>Anriket uran for kraftverk og høyanriket uran til atomvåpen er laget med det samme utstyret.</li>
			</ol>
			
			<p><strong>Jeg høytidelig lover å snakke modig om militær bruk av atomvåpen.</strong> Tiden har kommet for alle nasjoner til å gi avkall på bruk av atomvåpen.</p>
			
			<ol start='6'>
				<li>Det er ingen moralsk legitim grunn for ethvert individ, organisasjon eller stat å bruke atomvåpen.</li>
				<li>Besittelse av atomvåpen som en avskrekkende er en mislykket politikk.</li>
				<li>Nasjoner med atomvåpen bør utvikle planer for trygt demontering sine bomber.</li>
				<li>Nasjoner med kjernefysiske evner bør engasjere seg i forhandlingene som har som målsetting fullstendig avskaffelse av alle atomvåpen.</li>
				<li>Ingen bør arbeide for utvikling av nye atomvåpen.</li>
			</ol>
			
			<p>Sverget til denne dag, $this_date, i<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>