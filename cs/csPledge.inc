<?php
//=============================================================================
//
// File:         /i18n/csPledge.inc
//
// Language:     PHP
//
// Contents:     cs = Čeština (Czech)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/csBasePage.inc' );


//-------------------------------------
class csPledge extends csBasePage
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
		return "Zaslíbení ke světu bez štěpení";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Spojte se s ostatními občany světa slibuje mluvit odvážně o nebezpečích uložených využívání jaderné štěpení.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jaderné štěpení, jaderná energie, jaderné zbraně, mluvit odvážně, slib, slib slavnostně přísahat, slib";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Slibuji, že budu mluvit odvážně.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Přísahat "nic víc štěpení" přísahu teď!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Vaše křestní jméno a příjmení";
	}

	//---------------------------------
	function city()
	{
		return "Vaše město nebo rodné";
	}
	
	//---------------------------------
	function country()
	{
		return "Vaše národnost";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Přísaha by být účinnější, pokud jste zadali své jméno. Mohl byste mi prosím vyplnit formulář?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vaše přísaha by mnohem smysluplnější, pokud jste zadali své rodné město a národnost, ale pokud chcete vynechat, stačí stisknout tlačítko "Slibuji," ještě jednou tlačítko.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Zaslíbení ke světu bez štěpení</h1>
			
			<p>I, $personal_name, spojte se s mými spoluobčany na světě slibuje mluvit odvážně o nebezpečích uložených na Zemi a všechny její obyvatele použitím jaderného štěpení při generování elektřiny a vojenských zbraní.</p>
			
			<p><strong>Jsem slavnostně zavazuji mluvit odvážně o nebezpečí jaderné energie.</strong> O výhodách využívání jaderného štěpení v oblasti výroby elektrické energie jsou přehnané, a skutečné dlouhodobá rizika jsou příliš velká pokračovat.</p>
			
			<ol>
				<li>Výroba elektřiny v jaderných elektrárnách není levnější než jiné formy elektřiny.</li>
				<li>Jaderné elektrárny nemůže být 100% bezpečný z katastrofického selhání.</li>
				<li>Izotopové odpad vytvořený jaderného štěpení zůstane toxické pro velmi dlouhou dobu, a my nemáme kam dát.</li>
				<li>Jaderná energie není čistá energie: těžby, drcení a obohacování uranu vytváří velké ekologické pustiny, které jsou škodlivé pro člověka a volně žijících zvířat.</li>
				<li>Obohacený uran pro elektrárny a vysoce obohaceného uranu pro jaderné zbraně jsou vyrobeny se stejným vybavením.</li>
			</ol>
			
			<p><strong>Jsem slavnostně zavazuji mluvit odvážně o vojenské použití jaderných zbraní.</strong> Nadešel čas pro všechny národy vzdát se použití jaderných zbraní.</p>
			
			<ol start='6'>
				<li>Není morálně legitimní důvod k jakékoli individuální, organizace nebo státu k použití jaderných zbraní.</li>
				<li>Držení jaderných zbraní jako odstrašující prostředek je neúspěšné politiky.</li>
				<li>Země s jadernými zbraněmi by měly vypracovat plány pro bezpečnou demontáž svůj arzenál.</li>
				<li>Národy s jadernými schopnostmi by se měly zapojit do jednání, jejichž cílem je úplné zrušení všech jaderných zbraní.</li>
				<li>Nikdo by neměl usilovat o vývoj nových jaderných zbraní.</li>
			</ol>
			
			<p>Čestné k tomuto dni, $this_date v<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>