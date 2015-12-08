<?php
//=============================================================================
//
// File:         /i18n/nlPledge.inc
//
// Language:     PHP
//
// Contents:     nl = Dutch
//
// Author:       Joe Honton © 2013
//
// Initial date: September 25, 2013
//
//=============================================================================

require_once( __DIR__ . '/nlBasePage.inc' );


//-------------------------------------
class nlPledge extends nlBasePage
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
		return 'Belofte op weg naar een wereld zonder kernsplijting';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Verenigen met medeburgers van de wereld in de belofte om moedig te spreken over de gevaren die door het gebruik van kernsplijting.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'kernsplijting, kernenergie, kernwapens, moedig spreken, beloven, beloven plechtig, zweren, eed';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Ik Beloof om Moedig te Spreken.';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zweer het "niet meer kernsplijting" eed nu!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return 'Uw voornaam en achternaam';
	}

	//---------------------------------
	function city()
	{
		return 'Uw stad of woonplaats';
	}
	
	//---------------------------------
	function country()
	{
		return 'Uw nationaliteit';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'De eed zou effectiever zijn als je je naam voorzien. Kunt u het formulier invullen?';
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Uw eed zou zinvoller zijn als u op voorwaarde dat uw woonplaats en nationaliteit, maar als je ze wilt weglaten, drukt u nogmaals op de "ik beloof" knop opnieuw.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $w_personal_name, $w_date, $w_city, $w_country )
	{
return <<<ENDHTML
			<h1>Belofte op weg naar een Wereld zonder Kernsplijting</h1>
			
			<p>Ik, $w_personal_name, te verenigen met mijn medeburgers van de wereld in de belofte om moedig te spreken over de gevaren opgelegd Aarde en al haar bewoners door het gebruik van kernsplijting in de opwekking van elektriciteit en in militaire wapens.</p>
			
			<p><strong>Ik beloof plechtig om moedig te spreken over de gevaren van kernenergie.</strong> De voordelen van het gebruik van kernsplijting in de opwekking van elektriciteit zijn overdreven, en de echte lange-termijn risico's zijn te groot om door te gaan.</p>
			
			<ol>
				<li>Elektriciteit opgewekt door kerncentrales is niet goedkoper dan andere vormen van elektriciteitsproductie.</li>
				<li>Kerncentrales kunnen niet gemaakt worden 100% veilig van katastrofisch mislukking.</li>
				<li>De isotopische afval gecreëerd door kernsplijting zal giftig blijven voor een zeer lange tijd, en we hebben geen plaats om het te zetten.</li>
				<li>Kernenergie is geen schone energie: de winning, zuivering, en de verrijking van uranium erts creëert grote ecologische woestenijen die schadelijk zijn voor mens en dier zijn.</li>
				<li>Verrijkt uranium voor kerncentrales en hoogverrijkt uranium voor kernwapens zijn gemaakt met dezelfde apparatuur.</li>
			</ol>
			
			<p><strong>Ik beloof plechtig om moedig te spreken over het militair gebruik van kernwapens.</strong> De tijd is gekomen voor alle volken om het gebruik van kernwapens af te zweren.</p>
			
			<ol start='6'>
				<li>Er is geen moreel legitieme reden voor een individu, organisatie, of staat om nucleaire wapens te gebruiken.</li>
				<li>Het bezit van kernwapens als afschrikmiddel is een mislukt beleid.</li>
				<li>Naties met kernwapens moeten de plannen voor het veilig ontmantelen hun arsenaal te ontwikkelen.</li>
				<li>Naties met nucleaire capaciteiten moeten bezighouden met de onderhandelingen met als doel de volledige afschaffing van alle kernwapens.</li>
				<li>Niemand moet de ontwikkeling van nieuwe kernwapens na te streven.</li>
			</ol>
			
			<p>Gezworen aan deze dag, $w_date, in <br />
			$w_city, $w_country.</p>
ENDHTML;
	}
}
?>