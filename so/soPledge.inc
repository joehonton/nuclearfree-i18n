<?php
//=============================================================================
//
// File:         /i18n/soPledge.inc
//
// Language:     PHP
//
// Contents:     so = Af-Soomaali  (Somali)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/soBasePage.inc' );


//-------------------------------------
class soPledge extends soBasePage
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
		return "Ballanqaadi xagga dunida ah aan lahayn qashin attam";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Biir wada jir ah ula muwaadiniinta walaalahooda ee dunida ee balan-qaadyada ku dhiirranaada ku hadlaan khatarta ka soo rogtay by isticmaalka qashin attam nukliyeerka.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "qashin attam nukliyeerka, tamarta nukliyeerka, hubka nukliyeerka, dhiirranaada ku hadlaan, ballanka, furtaa, oo balan ku qaaday, ku dhaarto, dhaartii";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Waxaan u balan-dhiirranaada ku hadlaan";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Dhaaro, ee "maya qashin attam nukliyeerka" dhaar hadda';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Magaca la eego iyo magaca qoyska";
	}

	//---------------------------------
	function city()
	{
		return "Magaalada ama salahudiin";
	}
	
	//---------------------------------
	function country()
	{
		return "Dhalashadiisa";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Dhaartuna waxay noqon lahaa intan ka waxtar badan haddii aad bixisay magacaaga. Fadlan buuxi foomka?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Dhaartii tani waxay noqon lahayd more macno leh haddii aad bixisay oo aad salahudiin iyo dhalashadaada, laakiin haddii aad rabto in aad iyaga ka tegid, kaliya ee "Waa ballan" badhanka mar riix.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Ballanqaadi xagga dunida ah aan lahayn qashin attam</h1>
			
			<p>Ayaan, $personal_name, oofso muwaadiniinta asxaab aheyn ee dunida ee balan-qaadyada ku dhiirranaada ku hadlaan khatarta ka soo rogtay dhulka iyo dalka deggan oo dhan by isticmaalka qashin attam nukliyeerka ee jiilka korontada iyo in hub ciidan.</p>
			
			<p><strong>Furtaa balan ku qaaday in dhiirranaada ku hadlaan saabsan khatarta tamarta nukliyeerka.</strong> Taxanaha ee isticmaalaya qashin attam nukliyeerka ee jiilka korontada yihiin korniinka, iyo khataraha muddada-dheer waa run aad u weyn oo in ay sii wadaan.</p>
			
			<ol>
				<li>Korontada ee ay quwadda nukliyarka korontada ka aan ka raqiisan noocyada kale ee korontada.</li>
				<li>Quwadda nukliyeerka ma la samayn karaa 100% ka ammaan fashal ba'an.</li>
				<li>Qashinka qaaradda abuuray by qashin attam nukliyeerka sii joogi doonaa sun for waqti aad u dheer, oo ma haysanno meel aan si rid.</li>
				<li>Tamarta nukliyeerka ma aha tamar nadiif ah: macdanta, axdi qarameedka, iyo kobcin ee dhadhaab uranium abuurtaa qashinka-dalalkan dhawrista weyn oo ah in halis u ah dadka iyo duur-joogta.</li>
				<li>Uranium taajireen for quwadda iyo uranium heer sare ah ku taajireen hubka nukliyeerka waxa la sameeyaa iyada oo qalab la mid ah.</li>
			</ol>
			
			<p><strong>Furtaa balan ku qaaday in dhiirranaada ku hadasho saabsan isticmaalka military ee hubka nukliyeerka.</strong> Wakhtigii waa yimid, waayo, quruumahaas oo dhan soo biiraan isticmaalka hubka nukliyeerka.</p>
			
			<ol start='6'>
				<li>Ma jirto sabab damiir sharci ah ee qofka u, urur, ama gobolkasta in ay isticmaalaan hubka nukliyeerka.</li>
				<li>Haysashada hubka nukliyeerka horjoogsadaan waa siyaasad fashilmay.</li>
				<li>Quruumaha hub nuclear waa in qorshayaasha si ammaan ah ay qalab dagaal ah burburiyan.</li>
				<li>Quruumaha leh awoodaha nukliyeerka galaan waa in wada hadal goolka waa la baabiiyay dhamaystiran oo dhan hubka nukliyeerka.</li>
				<li>Qofna waa u eryan horumarinta hubka cusub ee nukliyeerka.</li>
			</ol>
			
			<p>Dhaariyay in ay maalintan, $this_date, in<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>