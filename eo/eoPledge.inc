<?php
//=============================================================================
//
// File:         /i18n/eoPledge.inc
//
// Language:     PHP
//
// Contents:     eo = Esperanto
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/eoBasePage.inc' );


//-------------------------------------
class eoPledge extends eoBasePage
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
		return "Al promeso al mondo sen fisio";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Aliĝu kune kun samurbanoj de la mondo en promesante parolu kuraĝe pri la danĝeroj imposto por la uzo de nuklea fisio.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklea fisio, nuklea energio, la nukleaj armiloj, parolu kuraĝe, promeso, solene promesi, jxuros jxuron";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mi promesas paroli kuraĝe";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Ĵuru al la "ne plu fisio" ĵuro nun!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Via persona nomo kaj familia nomo";
	}

	//---------------------------------
	function city()
	{
		return "Via urbo aŭ hejmurbo";
	}
	
	//---------------------------------
	function country()
	{
		return "Via ŝtataneco";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "La jxuron, estus pli efika se vi provizis vian nomon. Ĉu vi bonvolu plenigi la formo?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Via jxuro estus pli signifoplena se vi provizis via hejmurbo kaj nacieco, sed se vi volas ellasi ilin, simple premu la "mi promesas" butonon ankoraŭfoje.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Al promeso al mondo sen fisio</h1>
			
			<p>Mi, $personal_name unuiĝu kun miaj samurbanoj de la mondo en promesante parolu kuraĝe pri la danĝeroj trudita Tero kaj ĉiuj ĝiaj loĝantoj por la uzo de nuklea fisio en la generacio de elektro kaj en militaj bataliloj.</p>
			
			<p><strong>Mi solene promesi paroli kuraĝe pri la danĝeroj de la nuklea energio.</strong> La meritoj de uzante nuklean fision en la generacio de elektro estas troigita, kaj la vera longtempe riskoj estas tro granda por daŭrigi.</p>
			
			<ol>
				<li>Elektro generitaj per nuklea energio ne estas pli malkara ol aliaj formoj de elektro generacio.</li>
				<li>Nuklea energio ne povas esti farita 100% savas de katastrofa fiasko.</li>
				<li>La izotopa malŝparo kreita de nuklea fisio restos venena dum tre longa tempo, kaj ni ne havas lokon por meti ĝin.</li>
				<li>Nuklea energio ne estas pura energio: la ministoj, molienda kaj riĉigo de uranio erco kreas grandajn ekologiajn malŝparo-landoj, kiuj estas malutilaj por la homoj kaj naturo.</li>
				<li>Riĉigita uranio por potenco plantoj kaj tre riĉigita uranio por nukleaj armiloj estas farita per la sama teamo.</li>
			</ol>
			
			<p><strong>Mi solene promesi paroli kuraĝe pri la militan uzon de nukleaj armiloj.</strong> La tempo venis por ĉiuj nacioj por rezigni la uzon de nukleaj armiloj.</p>
			
			<ol start='6'>
				<li>Ne estas morale legitima kialo por ajna individuo, organizo, aŭ ŝtataj uzi nukleajn armilojn.</li>
				<li>La posedo de nukleaj armiloj kiel malinstigo estas fiaska politiko.</li>
				<li>Nacioj kun nukleaj armiloj devus evoluigi planojn por sekure malmunti iliaj arsenalo.</li>
				<li>Nacioj kun nukleaj kapablojn devus engaĝiĝi en intertraktadoj kies celo estas la kompleta abolo de ĉiuj nukleaj armiloj.</li>
				<li>Neniu devus sekvi la disvolviĝo de novaj nukleaj armiloj.</li>
			</ol>
			
			<p>Jxuris al ĉi tiu tago, $this_date, en<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>