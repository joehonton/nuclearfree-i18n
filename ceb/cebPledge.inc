<?php
//=============================================================================
//
// File:         /i18n/cebPledge.inc
//
// Language:     PHP
//
// Contents:     ceb = Binisaya (Cebuano)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/cebBasePage.inc' );


//-------------------------------------
class cebPledge extends cebBasePage
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
		return "Saad ngadto sa usa ka kalibutan nga walay fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Makighiusa uban sa isigka-lungsoranon sa sa kalibutan diha sa nagasaad sa pagsulti nga maisugon sa mga katalagman nga ginapatuman pinaagi sa paggamit sa nukleyar fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukleyar fission, nukleyar nga kusog, armas nukleyar, pagsulti maisugon, saad, ligdong nga saad, manumpa, panumpa";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mosaad ko sa pagsulti nga maisugon.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Manumpa sa "dili na fission" panumpa karon!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Gihatag ngalan ug sa ngalan sa pamilya";
	}

	//---------------------------------
	function city()
	{
		return "Inyong lungsod o lungsod";
	}
	
	//---------------------------------
	function country()
	{
		return "Ang imong nasyonalidad";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Ang panumpa nga mas epektibo kon ikaw nga gihatag sa imong ngalan. Ang imong palihug pun-on diha sa porma?";
	}
	
	//---------------------------------		 
	function missingCityAndCountry()
	{
		return 'Ang imong panumpa nga mas makahuluganon kon ikaw naghatag og ang imong lungsod, ug ang nasyonalidad, apan kon gusto kang omit kanila, lang mopadayon sa "Ako mosaad" button makausa pa.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Saad ngadto sa usa ka kalibutan nga walay fission</h1>
			
			<p>Ako, $personal_name, makighiusa uban sa akong mga kauban sa mga lungsoranon sa kalibutan diha sa nagasaad sa pagsulti nga maisugon sa mga katalagman nga gipahamtang sa ibabaw sa Yuta ug ang tanang mga pumoluyo sa paggamit sa nukleyar fission sa kaliwatan sa kuryente ug sa militar nga mga hinagiban.</p>
			
			<p><strong>Ako sa ligdong nga saad sa pagsulti nga maisugon sa mga kakuyaw sa nukleyar nga enerhiya.</strong> Ang takos sa paggamit sa nuclear fission sa kaliwatan sa kuryente mao ang exaggerated, ug ang mga tinuod nga long-term risgo mao ang halayo ra kaayo sa pagpadayon.</p>
			
			<ol>
				<li>Kuryente nga namugna pinaagi sa nukleyar nga gahum sa mga pasilidad dili mas barato pa kay sa uban pang mga matang sa elektrisidad nga kaliwatan.</li>
				<li>Nukleyar nga gahum sa mga pasilidad sa dili na 100% nga luwas gikan sa bug-os nga kinatibuk-ang kapakyasan.</li>
				<li>Ang isotopic basura sa gibuhat sa nukleyar fission magpabilin nga makahilo sa usa ka hataas nga panahon, ug kami walay dapit sa pagsalikway niini.</li>
				<li>Nukleyar kusog dili mahinlo kusog: ang pagmina ug enrichment sa uranium ore nagmugna dako nga ecological basura sa mga yuta nga makadaot sa tawo ug sa hayop.</li>
				<li>Enriched uranium alang sa gahum sa mga tanom ug sa kaayo enriched uranium alang sa mga armas nukleyar nga gihimo uban sa sama nga mga ekipo.</li>
			</ol>
			
			<p><strong>Ako sa ligdong nga saad sa pagsulti mahitungod sa maisugon sa militar nga paggamit sa armas nukleyar.</strong> Ang panahon miabut alang sa tanan nga mga nasud sa pag-isalikway ang sa paggamit sa mga armas nukleyar.</p>
			
			<ol start='6'>
				<li>Walay moral lehitimo nga rason alang sa bisan unsa nga indibidwal, organisasyon, o nga kahimtang sa paggamit sa armas nukleyar.</li>
				<li>Ang pagpanag-iya sa armas nukleyar sama sa sa usa ka deterrent mao ang usa ka napakyas nga palisiya.</li>
				<li>Mga nasud uban sa armas nukleyar kinahanglan nga pagpalambo sa mga plano alang sa luwas nga pagbungkag sa ilang mga arsenal.</li>
				<li>Mga nasud uban sa nukleyar kapabilidad kinahanglan makiglambigit sa negosasyon kang kansang tumong mao ang bug-os nga abolition sa tanan nga armas nukleyar.</li>
				<li>Walay bisan usa nga kinahanglan nga ipadayon ang pagpalambo sa bag-o nga armas nukleyar.</li>
			</ol>
			
			<p>Nanumpa niini nga adlaw, $this_date, sa<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>