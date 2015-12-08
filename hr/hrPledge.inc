<?php
//=============================================================================
//
// File:         /i18n/hrPledge.inc
//
// Language:     PHP
//
// Contents:     hr = Hrvatski (Croatian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/hrBasePage.inc' );


//-------------------------------------
class hrPledge extends hrBasePage
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
		return "Obećanje prema svijetu bez fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Pridružite se zajedno sa sugrađanima na svijetu u obećavši da govorim hrabro o opasnostima koje nameće korištenje nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearne fisije, nuklearne energije, nuklearna oružja, govore hrabro, obećanje, svečano obećanje, zakleti, zakletvu";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Obećajem da govorim hrabro.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "nema više fisija" zakletvu sada!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Vaše ime i prezime";
	}

	//---------------------------------
	function city()
	{
		return "Vaš grad ili rodni";
	}
	
	//---------------------------------
	function country()
	{
		return "Vaš nacionalnosti";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Prisega će biti učinkovitiji ako uvjetom svoje ime. Možete li molimo vas da ispunite obrazac?";
	}
			 
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Zakletvu bi više smisla ako uvjetom svoj rodni grad i nacionalnost, ali ako želite da ih izostavi, samo pritisnite "Obećajem" tipku još jednom.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Obećanje prema svijetu bez fisije</h1>
			
			<p>Ja, $personal_name, ujedinite se s mojim sugrađanima svijeta u obećavši da govorim hrabro o opasnostima koje nameće nakon Zemlji i svim njezinim stanovnicima korištenjem nuklearne fisije u proizvodnji električne energije i vojnog oružja.</p>
			
			<p><strong>Svečano obećajem da govorim hrabro o opasnostima nuklearne energije.</strong> Zasluge pomoću nuklearnoj fisiji u proizvodnji električne energije su pretjerane, a pravi dugoročni rizici su prevelike da bi se nastaviti.</p>
			
			<ol>
				<li>Električne energije iz nuklearnih elektrana nije jeftiniji od ostalih oblika proizvodnje električne energije.</li>
				<li>Nuklearne elektrane ne mogu biti 100% siguran od katastrofalnog neuspjeha.</li>
				<li>Izotopna otpad stvorio nuklearne fisije će ostati otrovno za jako dugo vremena, a mi nemamo mjesto da ga stavi.</li>
				<li>Nuklearna energija nije čiste energije: rudarstvo, glodanje, te obogaćivanje urana rude stvara velike ekološke pustara koje su štetne za ljude i životinjski svijet.</li>
				<li>Obogaćenog urana za elektrane i visoko obogaćenog urana za nuklearno oružje su s istom opremom.</li>
			</ol>
			
			<p><strong>Svečano obećajem da govorim hrabro o vojnoj uporabi nuklearnog oružja.</strong> Je došlo vrijeme za sve narode da se odreknu uporabe nuklearnog oružja.</p>
			
			<ol start='6'>
				<li>Nema moralno opravdan razlog za bilo kojeg pojedinca, organizacije ili države, koristiti nuklearno oružje.</li>
				<li>Posjedovanje nuklearnog oružja kao zastrašujući je uspio politika.</li>
				<li>Narodi s nuklearnim oružjem treba razvijati planove za sigurno rastavljanje svoj ​​arsenal.</li>
				<li>Narodi s nuklearnim mogućnostima trebali sudjelovati u pregovorima čiji je cilj potpuna ukidanje svih nuklearnih oružja.</li>
				<li>Nitko ne bi trebao nastaviti razvoj novih nuklearnih oružja.</li>
			</ol>
			
			<p>Zakleti na ovaj dan, $this_date, u<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>