<?php
//=============================================================================
//
// File:         /i18n/skThankyou.inc
//
// Language:     PHP
//
// Contents:     sk = Slovenčina (Slovak)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/skBasePage.inc' );


//-------------------------------------
class skThankyou extends skBasePage
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
		return "Ďakujem za spáchanie na svete bez jadrového štiepenie";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "S dostatkom hlasy hovoria odvážne o nebezpečenstve jadrového štiepenie, môžeme tento svet bez jadrového štiepenie.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "svet, jadrová energia, štiepenie";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Ďakujeme za váš sľub</h1>

		<p>Ďakujem $personal_name.</p>
		
		<p>Naozaj si toho vážim, že vaša podpora na tejto dôležitej úlohe. Pripojili ste sa $num_pledges ostatní, ktorí zložili sľub.</p> 
		
		<p>Nezabudnite byť odvážny - svedčiť, keď je správny čas. Nechajte vaši priatelia a známi vedia, že si myslíte, že vo svete bez jadrového štiepenie.</p>
		
		<p><strong>Dúfam, že spoločne môžeme niečo zmeniť.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>