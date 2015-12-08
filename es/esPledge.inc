<?php
//=============================================================================
//
// File:         /i18n/enPledge.inc
//
// Language:     PHP
//
// Contents:     es = Spanish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/esBasePage.inc' );


//-------------------------------------
class esPledge extends esBasePage
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
		return 'Compromiso por un Mundo sin Fisión Nuclear';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Únase a otros ciudadanos del mundo en su promesa de hablar con valentía sobre los peligros impuestos por el uso de la fisión nuclear.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'compromiso,Mundo libre de armas nucleares,mundo sin fisión nuclear';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Me comprometo a hablar fuerte.';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return '¡Compromiso por un Mundo sin Fisión Nuclear!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return 'Su nombre y apellido';
	}

	//---------------------------------
	function city()
	{
		return 'Su ciudad o pueblo natal';
	}
	
	//---------------------------------
	function country()
	{
		return 'Su nacionalidad';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'El compromiso sería más eficaz si proporcionó su nombre. ¿Podría usted por favor, rellene el formulario?';
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Su compromiso sería más significativo si se proporcionó a su ciudad natal y la nacionalidad, pero si desea omitirlos, simplemente pulse el botón "Me comprometo" una vez más.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $w_personal_name, $w_date, $w_city, $w_country )
	{
return <<<ENDHTML
			<h1>Compromiso por un Mundo sin Fisión Nuclear</h1>
			
			<p>Yo, $w_personal_name, únase a otros ciudadanos del mundo en su promesa de hablar con valentía sobre los peligros que impone sobre la Tierra y todos sus habitantes por el uso de la fisión nuclear en la generación de electricidad y en las armas militares.</p>
			
			<p><strong>Me comprometo a hablar acerca de la energía nuclear.</strong> Las ventajas de la utilización de la fisión nuclear en la generación de electricidad son exageradas, y los verdaderos riesgos a largo plazo son demasiado grandes para continuar.</p>
			
			<ol>
				<li>La electricidad generada por las plantas de energía nuclear no es más barato que otras formas de generación de electricidad.</li>
				<li>Las centrales nucleares no se pueden hacer 100% seguro de una falla catastrófica.</li>
				<li>Los residuos isotópica creado por la fisión nuclear seguirá siendo tóxicos durante mucho tiempo, y no tenemos lugar para ponerlo.</li>
				<li>La energía nuclear no es una energía limpia: la extracción, molienda y el enriquecimiento de uranio genera grandes desiertos ecológicos que son perjudiciales para los seres humanos y la vida silvestre.</li>
				<li>Por uranio enriquecido para las centrales eléctricas y el uranio altamente enriquecido para armas nucleares están hechos con el mismo equipo.</li>
			</ol>
			
			<p><strong>Me comprometo a hablar sobre el uso militar de la fisión nuclear.</strong> Ha llegado la hora de que todas las naciones a renunciar al uso de las armas nucleares.</p>
			
			<ol start='6'>
				<li>No hay ninguna razón moralmente legítimo para cualquier persona, organización o estado para el uso de armas nucleares.</li>
				<li>La posesión de armas nucleares como un elemento de disuasión es una política fracasada.</li>
				<li>Las naciones con armas nucleares deben desarrollar planes para desmantelar de forma segura su arsenal.</li>
				<li>Las naciones con capacidad nuclear deben participar en las negociaciones, cuyo objetivo es la abolición total de las armas nucleares.</li>
				<li>Ninguna nación debe perseguir el desarrollo de nuevas armas nucleares.</li>
			</ol>
			
			<p>Firmado el día, $w_date, en <br />
			$w_city, $w_country.</p>
ENDHTML;
	}
}
?>