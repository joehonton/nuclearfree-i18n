<?php
//=============================================================================
//
// File:         /i18n/itThankyou.inc
//
// Language:     PHP
//
// Contents:     it = Italian
//
// Author:       Joe Honton © 2013
//
// Initial date: September 16, 2013
//
//=============================================================================

require_once( __DIR__ . '/itBasePage.inc' );


//-------------------------------------
class itThankyou extends itBasePage
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
		return "Grazie per l'impegno che";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Con abbastanza voci parlare fuori circa i pericoli di fissione nucleare, siamo in grado di rendere questo un mondo libero dal nucleare.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "parlare fuori,centrali nucleari,l'energia nucleare,armi nucleari,fissione nucleare,mondo libero dal nucleare";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $pledges, $date_en )
	{
return <<<ENDHTML
		<h1>Grazie per L'impegno Che</h1>

		<p>Grazie $personal_name.</p>
		
		<p>Apprezzo molto avere il vostro sostegno in questa importante missione. Si sono uniti $pledges altri che hanno preso l'impegno.</p> 
		
		<p>Ricorda di essere coraggiosi — parlare fuori quando è il momento giusto. Lasciate che i vostri amici e conoscenti sanno che si crede in un mondo libero dal nucleare.</p>
		
		<p><strong>Spero che insieme possiamo fare la differenza.</strong></p>
		
		<p>Joseph Honton<br />
		$date_en</p>
ENDHTML;
	}
}
?>