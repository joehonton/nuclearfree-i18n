<?php
//=============================================================================
//
// File:         /i18n/filPledge.inc
//
// Language:     PHP
//
// Contents:     fil = Filipino
//
// Author:       Joe Honton © 2013
//
// Initial date: October 5, 2013
//
//=============================================================================

require_once( __DIR__ . '/filBasePage.inc' );


//-------------------------------------
class filPledge extends filBasePage
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
		return "Pangako patungo sa isang mundo na walang fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Sumali nang magkasama sa kapwa mamamayan ng mundo sa may pag-asa upang makipag-usap sa tapang tungkol sa mga panganib ipataw sa pamamagitan ng paggamit ng nukleyar fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukleyar fission, nukleyar enerhiya, nukleyar armas, makipag-usap sa tapang, pangako, mataimtim na pangako, pasumpain, panunumpa";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Nangangako ako upang makipag-usap sa tapang.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Isumpa ang "wala nang fission" panunumpa ngayon!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Ang iyong ibinigay na pangalan at apelyido";
	}

	//---------------------------------
	function city()
	{
		return "Ang iyong lungsod o bayan";
	}
	
	//---------------------------------
	function country()
	{
		return "Ang iyong nasyonalidad";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Ang panunumpa ay magiging mas epektibo kung ibinigay mo ang iyong pangalan. Maaari mo bang mangyaring punan ang form?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Ang iyong panunumpa ay magiging mas makabuluhan kung iyong ibinigay sa iyong bayan at nasyonalidad, ngunit kung nais mong ligtaan ang mga ito, pindutin lamang ang "nangangako ako" na pindutan nang isang beses pa.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Pangako patungo sa isang mundo na walang fission</h1>
			
			<p>Ako, $personal_name, makiisa sa aking mga kapwa mamamayan ng mundo sa may pag-asa upang makipag-usap sa tapang tungkol sa mga panganib ipapataw sa Daigdig at ang lahat ng mga naninirahan sa pamamagitan ng paggamit ng nukleyar fission sa henerasyon ng koryente at sa militar armas.</p>
			
			<p><strong>Ako mataimtim pangako magsalita may tapang tungkol sa mga panganib ng nukleyar enerhiya.</strong> Ang mga merito ng paggamit ng nukleyar fission sa henerasyon ng koryente ay pinalaking, at ang tunay na pang-matagalang panganib ay masyadong mahusay na upang magpatuloy.</p>
			
			<ol>
				<li>Kuryente na nabuo sa pamamagitan ng nukleyar power halaman ay hindi mas mura kaysa sa iba pang mga paraan ng koryente henerasyon.</li>
				<li>Nukleyar power halaman ay hindi maaaring gawing 100% ligtas mula sa sakuna pagkabigo.</li>
				<li>Ang isotopic basurang nilikha sa pamamagitan ng nukleyar fission ay mananatiling may lason para sa isang napaka-haba ng panahon, at wala kaming lugar upang ilagay ito.</li>
				<li>Nukleyar enerhiya ay hindi malinis na enerhiya: ang pagmimina, nagpapaikut-ikot, at pagpayaman ng yureyniyum mineral lumilikha ng malaking ekolohiya lupang basura na nakakapinsala sa mga tao at hayop.</li>
				<li>Enriched uraniyo para sa mga halaman kapangyarihan at mataas na enriched yureyniyum para sa nukleyar armas ay ginawa gamit ang parehong mga aparato.</li>
			</ol>
			
			<p><strong>Ako mataimtim pangako magsalita may tapang tungkol militar paggamit nukleyar armas.</strong> Ang oras dumating para lahat bansa upang tiwalagan paggamit ng nukleyar armas.</p>
			
			<ol start='6'>
				<li>Walang sa kagandahang-asal lehitimong dahilan para sa anumang indibidwal, organisasyon, o estado upang gamitin nukleyar armas.</li>
				<li>Ang pagkakaroon ng armas nukleyar bilang isang nagpapaudlot ay isang nabigong patakaran.</li>
				<li>Bansang may nukleyar armas ay dapat bumuo ng mga plano para sa ligtas na pagtatanggal-tanggal ang kanilang armas.</li>
				<li>Bansang may nukleyar kakayahan ay dapat makisali sa pag-uusap na ang layunin ay ang kumpletong pagpawi ng lahat ng mga nukleyar armas.</li>
				<li>Walang sinuman ang dapat ituloy ang pagbuo ng mga bagong nukleyar armas.</li>
			</ol>
			
			<p>Sinumpaang sa araw na ito, $this_date, sa<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>