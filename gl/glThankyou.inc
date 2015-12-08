<?php
//=============================================================================
//
// File:         /i18n/glThankyou.inc
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
class glThankyou extends glBasePage
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
		return "Grazas por comprometerse a un mundo sen fisión nuclear";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Con voces suficientes falar con coraxe sobre os perigos da fisión nuclear, podemos facer deste un mundo sen fisión nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "mundo, nuclear, fisión";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Grazas pola súa promesa</h1>

		<p>Grazas $personal_name.</p>
		
		<p>Eu realmente aprecio que o seu apoio sobre esta importante misión. Vostede uniuse $num_pledges outros que tomaron o xuramento.</p> 
		
		<p>Lembre-se de ser valente - testemuña, cando sexa a hora certa. Deixe os seus amigos e coñecidos, sei que cre nun mundo sen a fisión nuclear.</p>
		
		<p><strong>Espero que xuntos podemos facer a diferenza.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>