<?php
//=============================================================================
//
// File:         /i18n/frThankyou.inc
//
// Language:     PHP
//
// Contents:     fr = French
//
// Author:       Joe Honton © 2013
//
// Initial date: September 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/frBasePage.inc' );


//-------------------------------------
class frThankyou extends frBasePage
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
		return "Merci pour s'engager dans un monde sans fission nucléaire";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Avec suffisamment de voix parlant courageusement sur ​​les dangers de la fission nucléaire, nous pouvons faire un monde sans fission nucléaire.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "monde, le nucléaire, la fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Nous vous remercions de votre promesse</h1>

		<p>Merci $personal_name.</p>
		
		<p>J'apprécie vraiment avoir votre soutien sur cette importante recherche. Vous avez rejoint $num_pledges autres qui ont pris le serment.</p> 
		
		<p>N'oubliez pas d'être courageux - témoigner lorsque le moment sera venu. Laissez vos amis et connaissances savent que vous croyez en un monde sans fission nucléaire.</p>
		
		<p><strong>J'espère qu'ensemble, nous pouvons faire une différence.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>