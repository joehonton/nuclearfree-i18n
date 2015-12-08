<?php
//=============================================================================
//
// File:         /i18n/skPledge.inc
//
// Language:     PHP
//
// Contents:     sk = Slovenčina (Slovak)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/skBasePage.inc' );


//-------------------------------------
class skPledge extends skBasePage
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
		return "Sľub k svetu bez štiepenie";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Spojte sa s ostatnými občanmi sveta sľubuje hovoriť odvážne o nebezpečenstvách uložených využívaní jadrové štiepenie.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jadrové štiepenie, jadrová energia, jadrové zbrane, hovoriť odvážne, sľub, sľub slávnostne prisahať, sľub";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Sľubujem, že budem hovoriť odvážne.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisahať "nič viac štiepenie" prísahu teraz!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "krstné meno a priezvisko";
	}

	//---------------------------------
	function city()
	{
		return "vaše mesto alebo rodné";
	}
	
	//---------------------------------
	function country()
	{
		return "vaša národnosť";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Prísaha by byť účinnejšie, ak ste zadali svoje meno. Mohli by ste mi prosím vyplniť formulár?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vaša prísaha by omnoho zmysluplnejšie, ak ste zadali svoje rodné mesto a národnosť, ale ak chcete vynechať, stačí stlačiť tlačidlo "Sľubujem," ešte raz tlačidlo.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Sľub k svetu bez štiepenie</h1>
			
			<p>Aj, $personal_name, spojte sa s mojimi spoluobčanmi na svete sľubuje hovoriť odvážne o nebezpečenstvách uložených na Zemi a všetky jej obyvateľov použitím jadrového štiepenie pri generovaní elektriny a vojenských zbraní.</p>
			
			<p><strong>Som slávnostne zaväzujem hovoriť odvážne o nebezpečenstve jadrovej energie.</strong> O výhodách využívania jadrového štiepenie v oblasti výroby elektrickej energie sú prehnané, a skutočné dlhodobé riziká sú príliš veľká pokračovať.</p>
			
			<ol>
				<li>Výroba elektriny v jadrových elektrárňach nie je lacnejšie ako iné formy elektriny.</li>
				<li>Jadrové elektrárne nemôže byť 100% bezpečný z katastrofického zlyhania.</li>
				<li>Izotopové odpad vytvorený jadrového štiepenie zostane toxické pre veľmi dlhú dobu, a my nemáme kam dať.</li>
				<li>Jadrová energia nie je čistá energia: ťažbu, spracovanie a obohacovanie uránu vytvára veľké ekologická likvidácia-krajiny, ktoré sú škodlivé pre človeka a voľne žijúcich zvierat.</li>
				<li>Obohatený urán pre elektrárne a vysoko obohateného uránu pre jadrové zbrane sú vyrobené s rovnakým vybavením.</li>
			</ol>
			
			<p><strong>Som slávnostne zaväzujem hovoriť odvážne o vojenské použitie jadrových zbraní.</strong> Nadišiel čas pre všetky národy vzdať sa použitia jadrových zbraní.</p>
			
			<ol start='6'>
				<li>Nie je morálne legitímny dôvod k akejkoľvek individuálne, organizácie alebo štátu na použitie jadrových zbraní.</li>
				<li>Držanie jadrových zbraní ako odstrašujúci prostriedok je neúspešnej politiky.</li>
				<li>Krajiny s jadrovými zbraňami by mali vypracovať plány pre bezpečnú demontáž svoj ​​arzenál.</li>
				<li>Národy s jadrovými schopnosťami by sa mali zapojiť do rokovaní, ktorých cieľom je úplné zrušenie všetkých jadrových zbraní.</li>
				<li>Nikto by nemal usilovať o vývoj nových jadrových zbraní.</li>
			</ol>
			
			<p>Čestné k tomuto dňu, $this_date v<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>