<?php
//=============================================================================
//
// File:         /i18n/deThankyou.inc
//
// Language:     PHP
//
// Contents:     de = German
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/deBasePage.inc' );


//-------------------------------------
class deThankyou extends deBasePage
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
		return 'Danke für die Begehung zu einer Welt ohne Kernspaltung';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Mit genügend Stimmen sprechen mutig über die Gefahren der Kernspaltung, können wir diese eine Welt ohne Kernspaltung zu machen.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'Welt, Kernkraft, Kernspaltung';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Vielen Dank für Ihr Versprechen</h1>

		<p>Danke $personal_name.</p>
		
		<p>Ich schätze, die Ihre Unterstützung in dieser wichtigen Aufgabe. Sie haben $pledges andere, die den Eid beigetreten sind.</p> 
		
		<p>Denken Sie daran, mutig zu sein - bezeugen, wenn die Zeit reif ist. Informieren Sie Ihre Freunde und Bekannten wissen, dass Sie in einer Welt ohne Kernspaltung glauben.</p>
		
		<p><strong>Ich hoffe, dass wir gemeinsam einen Unterschied machen kann.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>