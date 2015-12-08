<?php
//=============================================================================
//
// File:         /i18n/lvPledge.inc
//
// Language:     PHP
//
// Contents:     lv = Latviešu (Latvian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/lvBasePage.inc' );


//-------------------------------------
class lvPledge extends lvBasePage
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
		return "Solījums uz pasauli bez skaldīšana";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Apvienoties ar līdzpilsoņiem par pasaules sola runāt droši uzlabot par briesmām, ko uzliek izmantojot kodola skaldīšanas.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kodola skaldīšana, kodolenerģija, kodolieroči, runā droši uzlabot, solījums, svinīgi ieķīlāt, zvēru, zvērestu";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Es apsolu runāt droši uzlabot.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zvēru, ka "ne vairāk kodolskaldīšanas" zvērestu tagad!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Jūsu vārds un uzvārds";
	}

	//---------------------------------
	function city()
	{
		return "Jūsu pilsētas vai dzimtajā";
	}
	
	//---------------------------------
	function country()
	{
		return "Jūsu pilsonība";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Zvērests būtu efektīvāka, ja jūs norādījāt savu vārdu. Vai jūs, lūdzu aizpildiet formu?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Jūsu zvērests Būtu daudz lietderīgāk, ja jums sniedz jūsu dzimtajā un tautību, bet, ja jūs vēlaties, lai tos izlaist, vienkārši nospiediet "Es apsolu" pogu vēlreiz.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Solījums uz pasauli bez skaldīšana</h1>
			
			<p>Es, $personal_name, apvienoties ar saviem līdzpilsoņiem pasaules sola runāt droši uzlabot par briesmām uzliktas Zemi un visiem tās iedzīvotājiem, izmantojot kodola skaldīšanas, kas rodas elektrības un kaujas ieročiem.</p>
			
			<p><strong>Es svinīgi apsolu runāt droši uzlabot par kodolenerģijas briesmām</strong>. Izmantot kodola skaldīšana, kas elektroenerģijas ražošanā būtības ir pārspīlētas, un patiesi ilgtermiņa risks ir pārāk liels, lai turpinātu.</p>
			
			<ol>
				<li>Elektroenerģija, kas saražota ar atomelektrostaciju nav lētāki nekā cita veida elektroenerģijas ražošanā.</li>
				<li>Atomelektrostacijas nevar būt 100% drošs no katastrofālu atteices.</li>
				<li>Izotopu atkritumus, ko rada kodola skaldīšanas paliks toksiska ļoti ilgu laiku, un mums nav kur likt to.</li>
				<li>Kodolenerģija nav tīra enerģija: ieguvi raktuvēs, malšanu, un urāna rūdas bagātināšana rada lielus ekoloģiskos atkritumu-zemju, kas ir kaitīgs cilvēkiem un savvaļas dzīvniekiem.</li>
				<li>Bagātināts urāns elektrostacijām un augsti bagātinātu urānu kodolieroču tiek veikti ar to pašu aprīkojumu.</li>
			</ol>
			
			<p><strong>Es svinīgi apsolu runāt droši uzlabot par militāro izmantošanu kodolieročiem</strong>. Ir pienācis laiks visām valstīm atteikties izmantot kodolieročus.</p>
			
			<ol start='6'>
				<li>Nav morāli pamatots iemesls, lai jebkuru indivīdu, organizāciju vai valsts izmantot kodolieročus.</li>
				<li>Kodolieroču kā preventīvs līdzeklis īpašumā ir izdevies politikas.</li>
				<li>Nācijas ar kodolieročiem jāizstrādā plāni droši demontāžu savu arsenālu.</li>
				<li>Nācijas ar kodolpotenciālu jāiesaistās sarunās, kuru mērķis ir pilnīga atcelšana visiem kodolieročiem.</li>
				<li>Neviens nedrīkst turpināt jaunu kodolieroču.</li>
			</ol>
			
			<p>Zvērināts līdz šai dienai, $this_date, jo<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>