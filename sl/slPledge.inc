<?php
//=============================================================================
//
// File:         /i18n/slPledge.inc
//
// Language:     PHP
//
// Contents:     sl = Slovenščina (Slovene)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/slBasePage.inc' );


//-------------------------------------
class slPledge extends slBasePage
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
		return "Obljuba k svetu brez fisije";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Pridružite se skupaj s kolegi državljani sveta v obljubil, da bo pogumno govorijo o nevarnostih, ki jih uporabi jedrske fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jedrsko fisijo, jedrska energija, jedrska orožja, govori pogumno, obljuba, slovesno obljubo, prisežem, priseže";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Obljubim, da bom pogumno govoriti.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisežem, da "ni več fisije" prisego zdaj!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Vaš rojstno ime in priimek";
	}

	//---------------------------------
	function city()
	{
		return "Vaše mesto ali vas";
	}
	
	//---------------------------------
	function country()
	{
		return "Vaš državljanstvo";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Prisega bi bilo bolj učinkovito, če ste ga navedli svoje ime. Bi lahko, prosim, izpolnite obrazec?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vaša prisega, bi bilo bolj smiselno, če ste vnesli svoje rojstno mesto in država, če pa želite, da jih izpustijo, samo pritisnite "Obljubim" gumb še enkrat.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Obljuba k svetu brez fisije</h1>
			
			<p>I $personal_name, združiti s svojimi kolegi državljani sveta v obljubil, da bo pogumno govorijo o nevarnostih naložene Zemljo in vse njene prebivalce z uporabo jedrske cepitve v proizvodnji električne energije in vojaškega orožja.</p>
			
			<p><strong>Sem slovesno obljubo, da pogumno govorijo o nevarnosti jedrske energije.</strong> Prednosti uporabe jedrske fisije v proizvodnji električne energije, so pretirana, in pravi dolgoročnega tveganja so prevelika, da bi nadaljeval.</p>
			
			<ol>
				<li>Električna energija, proizvedena jedrskih elektrarn ni cenejši od drugih oblik pridobivanja električne energije.</li>
				<li>Jedrske elektrarne ne more biti 100% varna pred katastrofalno okvaro.</li>
				<li>Izotopsko odpadki, ki jih jedrske fisije ustvarjena bo ostala strupene za zelo dolgo časa, in nimamo mesto, da ga proda.</li>
				<li>Jedrska energija ni čista energija: rudarstvo, rezkanje in obogatitev urana povzroča velike ekološke odpadne zemljišča, ki so škodljivi za ljudi in prosto živeče živali.</li>
				<li>Obogatenega urana za elektrarne in visoko obogatenega urana za izdelavo jedrskega orožja, so izdelani z isto opremo.</li>
			</ol>
			
			<p><strong>Sem slovesno obljubo, da pogumno govoriti o vojaški uporabi jedrskega orožja.</strong> Prišel je čas za vse narode, da opustijo uporabo jedrskega orožja.</p>
			
			<ol start='6'>
				<li>Ni moralno legitimen razlog za kakršno koli posameznika, organizacije ali država do uporabe jedrskega orožja.</li>
				<li>Posedovanje jedrskega orožja kot svarilo je uspelo politika.</li>
				<li>Držav z jedrskim orožjem je treba razviti načrte za varno razgradnjo svoj arzenal.</li>
				<li>Narodov z jedrskimi zmogljivostmi naj se vključijo v pogajanja, katerih cilj je popolna odprava vsega jedrskega orožja.</li>
				<li>Nihče ne bi smel nadaljevati z razvojem novih jedrskih orožij.</li>
			</ol>
			
			<p>Prisegel na ta dan, $this_date, v<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>