<?php
//=============================================================================
//
// File:         /i18n/svPledge.inc
//
// Language:     PHP
//
// Contents:     sv = Svenska (Swedish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/svBasePage.inc' );


//-------------------------------------
class svPledge extends svBasePage
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
		return "Ett löfte mot en värld utan kärnklyvning";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Gå ihop med andra världsmedborgare i lovande att tala modigt om farorna som följer av användningen av kärnklyvning.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kärnklyvning, kärnkraft, kärnvapen, talar modigt, löfte, högtidligt löfte, svära, ed";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Jag lovar att tala modigt.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Svär det "inte mer kärnklyvning" ed nu!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "förnamn och efternamn";
	}

	//---------------------------------
	function city()
	{
		return "din stad eller hemstad";
	}
	
	//---------------------------------
	function country()
	{
		return "din nationalitet";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Eden skulle vara mer effektivt om du lämnat ditt namn. Kan du fylla i formuläret?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Din ed skulle vara mer meningsfullt om du lämnat din hemstad och nationalitet, men om du vill utelämna dem, trycker du bara på "Jag lovar" knappen en gång till.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Ett löfte mot en värld utan kärnklyvning</h1>
			
			<p>Jag, $personal_name, förena med mina landsmän i världen lovar att tala modigt om farorna åläggs Jorden och alla dess invånare genom användning av kärnklyvning i elproduktion och i militära vapen.</p>
			
			<p><strong>Jag lovar högtidligt att tala modigt om farorna med kärnenergi.</strong> Fördelarna med att använda kärnklyvning i elproduktion är överdrivna, och de sanna långsiktiga riskerna är för stora för att fortsätta.</p>
			
			<ol>
				<li>El från kärnkraftverk är inte billigare än andra former av elproduktion.</li>
				<li>Kärnkraftverk kan inte göras 100% säker från katastrofala fel.</li>
				<li>Den isotopiska avfall skapas av kärnklyvning förblir giftigt för en mycket lång tid, och vi har ingen plats att uttrycka det.</li>
				<li>Kärnkraften är inte ren energi: gruv, fräsning och anrikning av uranmalm skapar stora ekologiska avfall-länder som är skadliga för människor och djur.</li>
				<li>Anrikat uran för kraftverk och höganrikat uran för kärnvapen är gjorda med samma utrustning.</li>
			</ol>
			
			<p><strong>Jag lovar högtidligt att tala modigt om den militära användningen av kärnvapen.</strong> Det är dags för alla nationer att avstå från att använda kärnvapen.</p>
			
			<ol start='6'>
				<li>Det finns inget moraliskt legitimt skäl för varje enskild person, organisation eller stat att använda kärnvapen.</li>
				<li>Innehav av kärnvapen som ett avskräckande är en misslyckad politik.</li>
				<li>Nationer med kärnvapen bör utarbeta planer för ett säkert avveckla sin arsenal.</li>
				<li>Nationerna med kärnvapenkapacitet bör engagera sig i förhandlingarna, vars mål är ett fullständigt avskaffande av alla kärnvapen.</li>
				<li>Ingen ska driva på utvecklingen av nya kärnvapen.</li>
			</ol>
			
			<p>Svurit att denna dag, $this_date, i<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>