<?php
//=============================================================================
//
// File:         /i18n/eoThankyou.inc
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
class eoThankyou extends eoBasePage
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
		return "Dankon pro fari al mondo sen nuklea fisio";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Kun sufiĉe voĉoj parolante kuraĝe pri la danĝeroj de la nuklea fisio, ni povas fari ĉi mondon sen nukleaj fisio.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "mondo, nuklea fisio";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Dankon por via promeso</h1>

		<p>Dankon $personal_name.</p>
		
		<p>Mi vere dankas havi vian subtenon pri tiu grava serĉado. Vi aliĝis $num_pledges aliaj, kiuj faris la ĵuron.</p> 
		
		<p>Memoru esti kuraĝa - protestas kiam la tempo estas prava. Lasu viajn amikojn kaj konatojn scias ke vi kredas en mondo sen nukleaj fisio.</p>
		
		<p><strong>Mi esperas, ke kune ni povas fari diferencon.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>