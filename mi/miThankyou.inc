<?php
//=============================================================================
//
// File:         /i18n/miThankyou.inc
//
// Language:     PHP
//
// Contents:     mi = 'te reo Māori'  (Maori)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/miBasePage.inc' );


//-------------------------------------
class miThankyou extends miBasePage
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
		return "Mauruuru no te mahi ki te ao, kahore whakangotangota";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ki te reo e korero ana nui te itoito e pā ana ki te mau fifi o te whakangotangota, e nehenehe tatou i meinga e tenei te ao, kahore whakangotangota.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "ao, whakangotangota";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Mauruuru e koe mo tau kupu</h1>

		<p>Mauruuru koe $personal_name.</p>
		
		<p>Tino mauruuru e ahau ia koutou i runga i te tautoko i tēnei feinga nui. Kua piri koe $num_pledges ētahi atu te hunga kua riro i te oati.</p> 
		
		<p>Kia mahara ki te kia maia - te faaite papû nei i te tika o te wā. Kia mohio koutou hoa, me i mohio ai e whakapono koe i roto i te ao, kahore whakangotangota.</p>
		
		<p><strong>Tumanako ahau e tahi e nehenehe e rave tatou i te hoê rerekētanga i.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>