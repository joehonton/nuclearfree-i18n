<?php
//=============================================================================
//
// File:         /i18n/glPledge.inc
//
// Language:     PHP
//
// Contents:     gl = Galego (Galician)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/glBasePage.inc' );


//-------------------------------------
class glPledge extends glBasePage
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
		return "Promesa para un Mundo sen a Fisión";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unirse con outros cidadáns do mundo ao prometer a falar con coraxe sobre os perigos impostos polo uso da fisión nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fisión nuclear, a enerxía nuclear, armas nucleares, falar con coraxe, promesa, solemnemente, xuro, xuramento";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Prometo Falar con Coraxe.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Xuro que o "non máis fisión" xuramento agora!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "O seu nome eo nome de familia";
	}

	//---------------------------------
	function city()
	{
		return "A súa cidade ou cidade natal";
	}
	
	//---------------------------------
	function country()
	{
		return "súa nacionalidade";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "O xuramento sería máis eficaz se ten solicitado o seu nome. Podería, por favor enche o formulario?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Seu xuramento sería máis significativo se proporcionou a súa cidade natal e nacionalidade, pero se quere omiti-los, basta premer o "Eu Prometer" botón unha vez máis.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Promesa para un Mundo sen a Fisión</h1>
			
			<p>I, $personal_name, unir-se cos meus concidadáns do mundo prometendo falar con coraxe sobre os perigos impostos sobre a Terra e os seus habitantes a través do uso da fisión nuclear na xeración de electricidade e armas militares.</p>
			
			<p><strong>Eu solemnemente prometo falar con coraxe sobre os perigos da enerxía nuclear.</strong> Os méritos do uso da fisión nuclear na xeración de electricidade son esaxeradas, e os verdadeiros riscos a longo prazo son grandes de máis para continuar.</p>
			
			<ol>
				<li>Electricidade xerada por centrais nucleares non é máis barato que outras formas de xeración de electricidade.</li>
				<li>As centrais nucleares non se pode facer 100% seguro contra fallo catastrófica.</li>
				<li>Os residuos isotópica creado por fisión nuclear seguirá sendo tóxico para un tempo moi longo, e non temos sitio para poñelas.</li>
				<li>A enerxía nuclear non é unha enerxía limpa: a minería, usinagem e enriquecemento do mineral de uranio xera grandes desertos ecolóxicos que son nocivos para os seres humanos e animais salvaxes.</li>
				<li>Uranio enriquecido para centrais de enerxía e de uranio altamente enriquecido para armas nucleares son feitas co mesmo equipo.</li>
			</ol>
			
			<p><strong>Eu solemnemente prometo falar con coraxe sobre o uso militar de armas nucleares.</strong> Chegou o momento de todas as nacións a renunciar ao uso de armas nucleares.</p>
			
			<ol start='6'>
				<li>Non hai ningunha razón moralmente lexítimo para calquera persoa, organización ou estado a usar armas nucleares.</li>
				<li>A posesión de armas nucleares como un elemento de disuasión é unha política fracasada.</li>
				<li>Nacións con armas nucleares deben desenvolver plans de desmantelamento de forma segura o seu arsenal.</li>
				<li>Países con capacidade nuclear debe implicar nas negociacións, cuxo obxectivo é a completa abolición de todas as armas nucleares.</li>
				<li>Ninguén debe buscar o desenvolvemento de novas armas nucleares.</li>
			</ol>
			
			<p>Xurado para o día de hoxe, $this_date, en<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>