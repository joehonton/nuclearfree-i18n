<?php
//=============================================================================
//
// File:         /i18n/swPledge.inc
//
// Language:     PHP
//
// Contents:     sw = Kiswahili (Swahili)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/swBasePage.inc' );


//-------------------------------------
class swPledge extends swBasePage
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
		return "Ahadi kuelekea dunia bila mwatuko";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Kujiunga pamoja na raia wenzako wa dunia katika kuahidi kusema kwa uhodari kuhusu hatari zilizowekwa na matumizi ya mwatuko nyuklia.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nyuklia fission, nishati nyuklia, silaha za nyuklia, kusema kwa uhodari, ahadi, wameweka ahadi, kuapa kiapo";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mimi ahadi kusema kwa ujasiri.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Kuapa "hakuna zaidi fission" kiapo sasa!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "kutokana na jina la familia";
	}

	//---------------------------------
	function city()
	{
		return "mji wako au kijiji";
	}
	
	//---------------------------------
	function country()
	{
		return "yako utaifa";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Kiapo bila kuwa na ufanisi zaidi kama wewe zinazotolewa jina lako. Unaweza tafadhali kujaza fomu?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Kiapo yako itakuwa na maana zaidi kama wewe zinazotolewa mji wako na utaifa, lakini kama unataka omit yao, vyombo vya habari tu "mimi ahadi" button mara moja zaidi.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Ahadi kuelekea dunia bila mwatuko</h1>
			
			<p>Mimi, $personal_name, kuungana na wananchi wenzangu wa dunia katika kuahidi kusema kwa uhodari kuhusu hatari zilizowekwa juu ya Dunia, na wakazi wake wote kwa matumizi ya mwatuko nyuklia katika uzalishaji wa umeme na katika silaha za kijeshi.</p>
			
			<p><strong>Kweli ahadi kusema kwa uhodari juu ya hatari ya nishati ya nyuklia</strong>. uhalali wa kutumia mwatuko nyuklia katika uzalishaji wa umeme ni chumvi, na kweli ya muda mrefu ya hatari ni kubwa mno kuendelea.</p>
			
			<ol>
				<li>Umeme yanayotokana na mitambo ya nyuklia si nafuu zaidi kuliko aina nyingine ya uzalishaji wa umeme.</li>
				<li>Mitambo ya nyuklia haiwezi kufanywa 100% salama kutoka kushindwa janga.</li>
				<li>Taka isotopic zilizoundwa na mwatuko nyuklia utabaki sumu kwa muda mrefu sana, na hatuna pa kuweka.</li>
				<li>Nishati ya nyuklia ni si nishati safi: madini, kusaga, na utajiri wa madini ya uranium inajenga kubwa kiikolojia taka-ardhi ambayo ni hatari kwa binadamu na wanyamapori.</li>
				<li>Uranium utajiri kwa ajili ya mitambo na yenye utajiri wa madini ya uranium kwa silaha za nyuklia ni kufanywa na vifaa hivyo.</li>
			</ol>
			
			<p><strong>Kweli ahadi kusema kwa uhodari juu ya matumizi ya kijeshi na silaha za nyuklia</strong>. wakati umefika kwa mataifa yote na kujinyima matumizi ya silaha za nyuklia.</p>
			
			<ol start='6'>
				<li>Hakuna sababu halali kimaadili kwa shirika lolote binafsi, au hali ya kutumia silaha za nyuklia.</li>
				<li>Milki ya silaha za nyuklia kama njia ya kuzuia ni sera alishindwa.</li>
				<li>Mataifa na silaha za nyuklia wanapaswa kuendeleza mipango kwa ajili ya usalama ya kuvunjwa arsenal yao.</li>
				<li>Mataifa na uwezo nyuklia wanapaswa kushirikiana katika mazungumzo ambayo lengo lake ni kamili ya kukomesha silaha zote za nyuklia.</li>
				<li>Hakuna mtu anatakiwa kutekeleza maendeleo ya silaha za kinuklia.</li>
			</ol>
			
			<p>Ameapa kwa siku hii, $this_date, katika<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>