<?php
//=============================================================================
//
// File:         /i18n/laPledge.inc
//
// Language:     PHP
//
// Contents:     la = Latin
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/laBasePage.inc' );


//-------------------------------------
class laPledge extends laBasePage
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
		return "Sed promissio in a saecula nuclearis scissionis";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Promittens copulabis ut cives mundi pericula audacissime nuclearis scissionis usum sumptis.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuclearis scissionis, nuclear industria, nuclear arma, et dicere audacissime, promissio, dexteras fidemque solemniter iuro, iurare";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Promitto dicere audacissime";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jura ergo «non scissionis» juramentum!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "nomen et cognomento";
	}

	//---------------------------------
	function city()
	{
		return "urbem vel civitatem";
	}
	
	//---------------------------------
	function country()
	{
		return "patriae";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Si ita esset efficacior iusiurandum nomine. Lorem forma potuistis?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Si modo is tibi sacramento tuo patriam nationis esset significantius et omittenda sis iustus premere "Promitto" iterum felis.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Et promissio in mundo, sine nuclearis scissionis</h1>
			
			<p>Ego, $personal_name, adunare pollicente ad civibus fortiter mundi pericula et omnes habitatores Terræ, impositum a generatione in electricitatis usus militaris nuclearis scissionis armis.</p>
			
			<p><strong>Solemniter dico spondemus nuclear industria fortiter circa pericula.</strong> Per merita sunt exaggerabant nuclearis scissionis electricitatis in generatione et minae quidem nimium diu manere.</p>
			
			<ol>
				<li>Electricity generatur per nuclear potentia plantarum non vilius quam alia quae ex electricitatis generationem.</li>
				<li>100% tutus nuclei potentia non potest fieri a exitialium herbae.</li>
				<li>Damnum vastum creata atomicus diutissime nuclearis scissionis manebit, et nescimus ubi posuerunt eum.</li>
				<li>Nuclei eu non intentio: in fodienda, molere, et locupletent Uranium metallum qui facit magna oecologiae vastorum noxium et homines et bestias.</li>
				<li>Uranium, edicimus, et pro industria altus locupletatus uranium nuclear arma, cum eodem apparatu.</li>
			</ol>
			
			<p><strong>Solemniter dico spondemus militum ad fortiter in usum nuclear arma.</strong> Tempus est renuntiare omnibus gentibus uti nuclear arma.</p>
			
			<ol start='6'>
				<li>Nulla causa iusta cuiquam moraliter amet, ut aut rei publicae nuclear arma.</li>
				<li>Possessio nuclear arma, homines deterrere, et defecerunt consilium.</li>
				<li>Et ambulabunt gentes in nuclear arma, ut in pace ad evolvere consilia sua republica arma.</li>
				<li>Cuius finis est actio de populis debent nuclei facultatem plenariam omnium abolitio nuclear arma.</li>
				<li>Nemo novae enatae instare nuclear arma.</li>
			</ol>
			
			<p>Juravit in præsentem diem, $this_date, in<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>