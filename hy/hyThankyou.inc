<?php
//=============================================================================
//
// File:         /i18n/hyThankyou.inc
//
// Language:     PHP
//
// Contents:     hy = Հայերեն  (Armenian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/hyBasePage.inc' );


//-------------------------------------
class hyThankyou extends hyBasePage
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
		return "Շնորհակալություն կատարում է մի աշխարհում, առանց միջուկային տրոհման";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Բավարար ձայները խոսում խիզախորեն վտանգների մասին միջուկային տրոհման, մենք կարող ենք անել դա մի աշխարհ է առանց միջուկային տրոհման.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "Աշխարհ, միջուկային, տրոհման";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Շնորհակալություն ձեր խոստումը</h1>

		<p>Շնորհակալություն ձեզ $personal_name.</p>
		
		<p>Ես, իրոք, բարձր ենք գնահատում, որ ձեր աջակցությունը այս կարեւոր որոնել. Դուք միացել $num_pledges ուրիշներին, ովքեր վերցրել երդումը.</p> 
		
		<p>Հիշել լինել քաջ, վկայում է, երբ ժամանակը ճիշտ է. Թող ձեր ընկերներին եւ ծանոթներին, որ կարծում եք, որ մի աշխարհում, առանց միջուկային տրոհման.</p>
		
		<p><strong>Հուսով եմ, որ միասին կարող ենք շատ բան փոխել:</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>