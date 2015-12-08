<?php
//=============================================================================
//
// File:         /i18n/htThankyou.inc
//
// Language:     PHP
//
// Contents:     ht = Kreyòl (Haitian Creole)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/htBasePage.inc' );


//-------------------------------------
class htThankyou extends htBasePage
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
		return "Mèsi pou komèt nan yon mond san yo pa fisyon nikleyè";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Avèk ase vwa pale kouraj sou danje ki genyen nan fisyon nikleyè, nou ka fè sa-a yon mond san yo pa fisyon nikleyè.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "mond lan, fisyon nikleyè";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Mèsi pou pwomès ou</h1>

		<p>Mèsi poutèt ou $personal_name.</p>
		
		<p>Mwen vrèman apresye li te gen sipò ou sou demand enpòtan sa a. Ou te mete $num_pledges lòt moun ki te pran sèman an.</p> 
		
		<p>Sonje yo dwe vanyan gason - temwaye lè lè a ki dwat. Se pou zanmi ou yo ak zanmi konnen ke ou kwè nan yon mond san yo pa fisyon nikleyè.</p>
		
		<p><strong>Mwen espere ke ansanm nou ka fè yon diferans.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>