<?php
//=============================================================================
//
// File:         /i18n/afPledge.inc
//
// Language:     PHP
//
// Contents:     af = Afrikaans
//
// Author:       Joe Honton © 2013
//
// Initial date: September 27, 2013
//
//=============================================================================

require_once( __DIR__ . '/afBasePage.inc' );


//-------------------------------------
class afPledge extends afBasePage
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
		return "Belofte na 'n wêreld sonder fisie";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Verenig met mede-burgers van die wêreld in belowende te moedig praat oor die gevare wat deur die gebruik van kernsplyting.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kernsplyting, kernkrag, kern wapens, praat moed, belofte, plegtig belowe, sweer, eed";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ek belowe om dapper te praat.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sweer die "geen meer fisie" eed nou!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Jou gegee naam en familie naam";
	}

	//---------------------------------
	function city()
	{
		return "Jou stad of tuisdorp";
	}
	
	//---------------------------------
	function country()
	{
		return "jou nasionaliteit";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Die eed sal meer effektief te wees as jy verskaf jou naam. Kan jy vul in die vorm?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Jou eed sou meer sinvol as jy voorsien jou tuisdorp en nasionaliteit, maar as jy wil om dit te laat, druk net op die "Ek belowe" knoppie een keer meer.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Belofte na 'n wêreld sonder fisie</h1>
			
			<p>Ek, $personal_name, verenig met my mede-burgers van die wêreld in belowende te moedig praat oor die gevare opgelê aarde en al sy inwoners deur die gebruik van kernsplyting in die opwekking van elektrisiteit en in militêre wapens.</p>
			
			<p><strong>Ek plegtig belowe om dapper te praat oor die gevare van kernkrag</strong>. Die meriete van die gebruik van kernsplyting in die opwekking van elektrisiteit is oordrewe, en die ware langtermyn-risiko's is te groot om voort te gaan.</p>
			
			<ol>
				<li>Elektrisiteit wat gegenereer word deur kernkragsentrales is nie goedkoper as ander vorme van die opwekking van elektrisiteit.</li>
				<li>Kernkragsentrales gemaak kan word nie 100% veilig van katastrofiese mislukking.</li>
				<li>Die isotoop afval geskep deur kernsplyting sal bly giftig vir 'n baie lang tyd, en ons het nie 'n plek om dit te sit.</li>
				<li>Kernenergie is nie skoon energie: die mynbou, verfyning en verryking van uraan erts skep groot ekologiese Woest wat skadelik is vir mense en natuurlewe.</li>
				<li>Verrykte uraan vir krag plante en hoogs verrykte uraan vir kernwapens is gemaak met dieselfde toerusting.</li>
			</ol>
			
			<p><strong>Ek belowe plegtig te moedig praat oor die militêre gebruik van kernwapens</strong>. Die tyd het aangebreek vir al die nasies van die gebruik van kernwapens afstand te doen.</p>
			
			<ol start='6'>
				<li>Daar is geen moreel wettige rede vir enige individu, organisasie, of 'n staat van kernwapens te gebruik.</li>
				<li>Die besit van kernwapens as 'n afskrikmiddel is 'n mislukte beleid.</li>
				<li>Nasies met kernwapens moet ontwikkel planne vir veilig aftakeling hul arsenaal.</li>
				<li>Nasies met kern vermoëns moet betrokke raak in onderhandelinge wie se doel is om die volledige afskaffing van alle kernwapens.</li>
				<li>Niemand moet streef na die ontwikkeling van nuwe kernwapens.</li>
			</ol>
			
			<p>Gesweer om hierdie dag, $this_date, in<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>