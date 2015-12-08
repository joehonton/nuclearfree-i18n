<?php
//=============================================================================
//
// File:         /i18n/enThankyou.inc
//
// Language:     PHP
//
// Contents:     es = Spanish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 10, 2013
//
//=============================================================================

require_once( __DIR__ . '/esBasePage.inc' );


//-------------------------------------
class esThankyou extends esBasePage
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
		return 'Gracias por tomar el compromiso';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Con suficientes voces hablando sobre los peligros de la fisión nuclear, podemos hacer de este por un mundo sin fisión nuclear.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'gracias por hablar fuerte,sin armas nucleares,plantas de energía nuclear,la energía nuclear,armas nucleares,fisión nuclear';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Gracias por Tomar el Compromiso</h1>

		<p>¡Gracias $personal_name!</p>

		<p>Realmente aprecio que tiene su apoyo en esta importante misión. Usted se ha unido a otros $pledges que han hecho la promesa.</p> 
		
		<p>Recuerde que debe ser couragous — hablar cuando sea el momento adecuado. Deja que tus amigos y conocidos saben que usted cree en un mundo sin fisión nuclear.</p>
		
		<p><strong>Espero que juntos podemos hacer la diferencia.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>