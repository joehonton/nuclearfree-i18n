<?php
//=============================================================================
//
// File:         /i18n/ptThankyou.inc
//
// Language:     PHP
//
// Contents:     pt-BR = Brasileiro (copied from Portuguese)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/ptBrBasePage.inc' );


//-------------------------------------
class ptBrThankyou extends ptBrBasePage
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
		return 'Obrigado por Juramento a Promessa';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Com vozes suficientes falando sobre os perigos da fissão nuclear, podemos fazer deste um mundo desnuclearizado.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'falando para fora,desnuclearizado,fissão nuclear';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Obrigado por Concordar com o Juramento</h1>

		<p>Obrigado $personal_name.</p>
		
		<p>Eu realmente aprecio ter o seu apoio sobre esta importante missão. Você entrou $pledges outros que tomaram o compromisso.</p> 
		
		<p>Lembre-se de ser corajoso — falar quando é a hora certa. Deixe seus amigos e conhecidos, sei que você acredita em um mundo desnuclearizado.</p>
		
		<p><strong>Espero que juntos podemos fazer a diferença.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>