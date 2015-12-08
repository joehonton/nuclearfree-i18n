<?php
//=============================================================================
//
// File:         /i18n/csThankyou.inc
//
// Language:     PHP
//
// Contents:     cs = Čeština (Czech)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/csBasePage.inc' );


//-------------------------------------
class csThankyou extends csBasePage
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
		return "Děkuji za spáchání na světě bez jaderného štěpení";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "S dostatkem hlasy mluví odvážně o nebezpečí jaderného štěpení, můžeme tento svět bez jaderného štěpení.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "svět, jaderná energie, štěpení";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Děkujeme za váš slib</h1>

		<p>Děkuji $personal_name.</p>
		
		<p>Opravdu si toho vážím, že vaše podpora na tomto důležitém úkolu. Připojili jste se $num_pledges ostatní, kteří složili slib.</p> 
		
		<p>Nezapomeňte být odvážný - svědčit, když je správný čas. Nechte vaši přátelé a známí vědí, že si myslíte, že ve světě bez jaderného štěpení.</p>
		
		<p><strong>Doufám, že společně můžeme něco změnit.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>