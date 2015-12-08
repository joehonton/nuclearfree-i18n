<?php
//=============================================================================
//
// File:         /i18n/huPledge.inc
//
// Language:     PHP
//
// Contents:     hu = Magyar (Hungarian)
//
// Author:       Joe Honton © 2013
//
// Initial date: Octiber 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/huBasePage.inc' );


//-------------------------------------
class huPledge extends huBasePage
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
		return "Egy ígéret felé egy olyan világban, anélkül, hogy maghasadás";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Összefoghatna polgártársai a világ ígéretes beszélni merészen a veszélyek által a nukleáris maghasadás.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "atommaghasadásra, nukleáris energia, a nukleáris fegyverek, beszéljen merészen, ígéret, ünnepélyesen fogadalmat, esküszöm, eskü";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ígérem, hogy beszélni merészen.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Esküszöm, a "nincs több hasadási" eskü most!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Az utónév és családi név";
	}

	//---------------------------------
	function city()
	{
		return "A város vagy szülővárosában";
	}
	
	//---------------------------------
	function country()
	{
		return "Az állampolgárság";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Az eskü hatékonyabb lenne, ha megadta a nevét. Tudna kérjük, töltse ki az űrlapot?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Az eskü lenne értelme, ha biztosított a szülővárosában és az állampolgárság, de ha azt akarjuk, hogy kihagyja őket, csak nyomja meg a "Megígérem" gombot még egyszer.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Egy ígéret felé egy olyan világban, anélkül, hogy maghasadás</h1>
			
			<p>I, $personal_name, egyesüljetek honfitársaim a világ ígéretes beszélni merészen a veszélyekkel szemben támasztott Föld és minden lakója használata által a atommaghasadásra, a villamosenergia-és a katonai fegyverek.</p>
			
			<p><strong>Ünnepélyesen fogadom, hogy beszéljen merészen a veszélyekre a nukleáris energia.</strong> Az előnyeit, ha atommaghasadásra, a villamosenergia eltúlzottak, a valódi, hosszú távú kockázatok túl nagyok, hogy folytassa.</p>
			
			<ol>
				<li>Termelt villamos energia atomerőművekben nem olcsóbb, mint más villamosenergia-termelés.</li>
				<li>A nukleáris erőművek nem lehet 100%-osan biztonságos a katasztrofális hiba.</li>
				<li>Az izotóp hulladék által létrehozott atommaghasadásra marad mérgező egy nagyon hosszú idő, és nincs hová tenni azt.</li>
				<li>A nukleáris energia nem tiszta energia: a bányászat, a marás és gazdagítása uránérc miatt nagy ökológiai parlagon heverő, amelyek károsak az emberre és az élővilágra.</li>
				<li>Dúsított urán erőmű és erősen dúsított urán nukleáris fegyverek készülnek ugyanazzal a berendezéssel.</li>
			</ol>
			
			<p><strong>Ünnepélyesen fogadom, hogy beszéljen merészen a katonai célú nukleáris fegyverek.</strong> Az ideje, hogy minden nemzet, hogy mondjon le a nukleáris fegyverek.</p>
			
			<ol start='6'>
				<li>Nincs erkölcsileg jogos indok bármely személy, szervezet, vagy az állam a nukleáris fegyverek használatára.</li>
				<li>A birtokában nukleáris fegyverek elrettentő a sikertelen politika.</li>
				<li>Nemzetek nukleáris fegyverek terveket kell kidolgozni a biztonságos leszerelés saját arzenál.</li>
				<li>Nemzetek nukleáris képességekkel kell kezdjenek tárgyalásokat, amelynek célja a teljes eltörlése a nukleáris fegyvereket.</li>
				<li>Senki ne folytassa az új nukleáris fegyverek.</li>
			</ol>
			
			<p>Megesküdött, hogy a mai napig, $this_date, a<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>