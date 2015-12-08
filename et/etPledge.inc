<?php
//=============================================================================
//
// File:         /i18n/etPledge.inc
//
// Language:     PHP
//
// Contents:     et = Eesti (Estonian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/etBasePage.inc' );


//-------------------------------------
class etPledge extends etBasePage
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
		return "Lubad suunas maailm ilma lõhustumine";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Liitu koos kaaskodanike maailma paljutõotav rääkida julgelt ohtudest kehtestatud tuuma lõhustumist.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "tuumalõhustumise, tuumaenergia, tuumarelvade, räägi julgelt, lubadus, pühalikult, vannun vande";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ma luban, et rääkida julgelt.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Vannu "enam lõhustumise" vande nüüd!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Teie ees-ja perekonnanimi";
	}

	//---------------------------------
	function city()
	{
		return "Teie linna või kodulinna";
	}
	
	//---------------------------------
	function country()
	{
		return "Teie kodakondsus";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Vanne oleks tõhusam, kui andsite oma nimi. Kas te võiksite palun täitke vorm?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Teie vanne oleks otstarbekam, kui te ette oma kodulinna ja kodakondsus, aga kui sa tahad jätta neid, lihtsalt vajuta "Luban" nuppu veel kord.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Lubad suunas maailm ilma lõhustumine</h1>
			
			<p>I $personal_name, ühendama oma kaaskodanike maailma paljutõotav rääkida julgelt ohtudest pandud Maa ja kõik selle elanikud tuuma lõhustumise elektri ja sõjaväerelvade.</p>
			
			<p><strong>Teile pühalikult rääkida julgelt ohtudest tuumaenergiat.</strong> Teeneid kasutades tuuma lõhustumise elektrienergia on liialdatud ja tõeline pikaajalised riskid on liiga suured, et jätkata.</p>
			
			<ol>
				<li>Elektrienergia tuumajaamad ei ole odavam kui muud elektri tootmiseks.</li>
				<li>Tuumajaamad ei saa 100% ohutu katastroofiline läbikukkumine.</li>
				<li>Isotoopide tekkivate jäätmete tuumalõhustumise jääb mürgine juba väga pikka aega, ja meil pole asetada ta.</li>
				<li>Tuumaenergia ei ole puhas energia: kaevandamise, töötlemise ja rikastamise uraanimaagi tekitab suuri ökoloogilisi tühermaad, mis on kahjulikud inimestele ja loodusele.</li>
				<li>Rikastatud uraan elektrijaamadele ja kõrgelt rikastatud uraani tuumarelvade jaoks tehakse samu seadmeid.</li>
			</ol>
			
			<p><strong>Teile pühalikult rääkida julgelt umbes sõjaline tuumarelva kasutamist.</strong> On aeg kõigi rahvaste loobuma tuumarelva kasutamist.</p>
			
			<ol start='6'>
				<li>Ei ole moraalselt õigustatud põhjus iga üksikisik, organisatsioon või riik kasutada tuumarelvi.</li>
				<li>Tuumarelva omamist kaitsevahendiks on ebaõnnestunud poliitika.</li>
				<li>Rahvaste tuumarelvadega peaks koostama plaane ohutult demonteerimine oma arsenal.</li>
				<li>Rahvaste tuumaseadeldisi tuleks alustada läbirääkimisi, mille eesmärgiks on täielik kaotamine kogu tuumarelvad.</li>
				<li>Keegi ei peaks jätkama uute tuumarelvi.</li>
			</ol>
			
			<p>Vannutatud tänaseni, $this_date, in<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>