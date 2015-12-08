<?php
//=============================================================================
//
// File:         /i18n/sqPledge.inc
//
// Language:     PHP
//
// Contents:     sq = Shqip (Albanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/sqBasePage.inc' );


//-------------------------------------
class sqPledge extends sqBasePage
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
		return "Një premtim drejt një bote pa atomike";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ejani së bashku me qytetarët e tjerë të botës në premtimin për të folur me guxim rreth rreziqeve të imponuara nga përdorimi i shpërbërjes bërthamore.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "Fission bërthamore, energjia bërthamore, armët bërthamore, flasin me guxim, premtimi, solemnisht premtim, betohem, betimin";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Unë premtoj që të flasin me guxim.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Betohen "jo më shumë atomike" betimin tani!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Emri juaj dhënë dhe mbiemri";
	}

	//---------------------------------
	function city()
	{
		return "Qytetin tuaj apo qytetin e lindjes";
	}
	
	//---------------------------------
	function country()
	{
		return "kombësia juaj";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Betimi do të jetë më efektive nëse keni dhënë emrin tuaj. Ju lutem mund të plotësoni në formë?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Betimi juaj do të jetë më kuptimplote, nëse keni dhënë vendlindjen tuaj dhe kombësinë, por në qoftë se ju doni të heq ato, thjesht shtypni "Unë premtoj" button një herë më shumë.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Një premtim drejt një bote pa atomike</h1>
			
			<p>Unë, $personal_name, të bashkohen me bashkëqytetarëve të mi të botës në premtimin për të folur me guxim rreth rreziqeve të imponuara mbi tokë dhe të gjithë banorëve të saj nga përdorimi i shpërbërjes bërthamore në prodhimin e energjisë elektrike dhe në armët ushtarake.</p>
			
			<p><strong>Unë zotohem solemnisht të flasin me guxim për rreziqet e energjisë bërthamore.</strong> Meritat e përdorimit të atomike bërthamore në prodhimin e energjisë elektrike janë të tepruara, dhe e vërtetë afatgjata rreziqet janë shumë të mëdha për të vazhduar.</p>
			
			<ol>
				<li>Energjia e prodhuar nga centralet bërthamore nuk është më e lirë se format e tjera të prodhimit të energjisë elektrike.</li>
				<li>Reaktorët bërthamorë nuk mund të bëhet 100% të sigurt nga dështimi katastrofik.</li>
				<li>Mbeturinave izotopike krijuar nga atomike bërthamore do të mbetet toksike për një kohë shumë të gjatë, dhe ne nuk kemi vend për të vënë atë.</li>
				<li>Energjia bërthamore nuk është energji e pastër: minierave, mulliri, dhe pasurimi i mineralit të uraniumit krijon mëdha ekologjike-mbeturinave tokat që janë të dëmshme për njerëzit dhe kafshë të egra.</li>
				<li>Uraniumi i pasuruar për termocentralet dhe uranium të pasuruar për armë bërthamore janë bërë me pajisje të njëjtë.</li>
			</ol>
			
			<p><strong>Unë zotohem solemnisht të flasin me guxim për përdorim ushtarak të armëve bërthamore.</strong> Ka ardhur koha për të gjithë kombet që të heqë dorë nga përdorimi i armëve bërthamore.</p>
			
			<ol start='6'>
				<li>Nuk ka asnjë arsye moralisht legjitime për çdo organizatë individuale, apo shtetërore të përdorin armët bërthamore.</li>
				<li>Posedimi i armëve bërthamore si një parandalues është një politikë e dështuar.</li>
				<li>Kombet me armë bërthamore duhet të zhvillojnë plane për demontimin arsenalin e tyre në mënyrë të sigurtë.</li>
				<li>Kombet me aftësitë bërthamore duhet të angazhohen në negociata qëllimi i të cilit është heqja e plotë e të gjitha armëve bërthamore.</li>
				<li>Askush nuk duhet të ndjekë zhvillimin e armëve të reja bërthamore.</li>
			</ol>
			
			<p>Betuar në këtë ditë, $this_date, në<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>