<?php
//=============================================================================
//
// File:         /i18n/plThankyou.inc
//
// Language:     PHP
//
// Contents:     pl = Polski (Polish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/plBasePage.inc' );


//-------------------------------------
class plThankyou extends plBasePage
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
		return "Dziękujemy za zobowiązanie się do świata bez rozszczepienia jądrowego";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Z dość głosy mówiąc odważnie o niebezpieczeństwach rozszczepienia jądrowego, możemy ten świat bez rozszczepienia jądrowego.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "świat, jądrowej, rozszczepienia";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Dziękuję za obietnicę</h1>

		<p>Dziękujemy $personal_name.</p>
		
		<p>Ja doceniamy wasze wsparcie w tej ważnej misji. Masz dołączył $num_pledges innych, którzy złożyli przysięgę.</p> 
		
		<p>Pamiętaj, aby być odważnym - świadczą, gdy jest to właściwy moment. Niech twoi przyjaciele i znajomi wiedzą, że uważasz, że w świecie bez rozszczepienia jądrowego.</p>
		
		<p><strong>Mam nadzieję, że razem możemy coś zmienić.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>