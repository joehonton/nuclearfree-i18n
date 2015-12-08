<?php
//=============================================================================
//
// File:         /i18n/trThankyou.inc
//
// Language:     PHP
//
// Contents:     tr = Türkçe (Turkish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 31, 2013
//
//=============================================================================

require_once( __DIR__ . '/trBasePage.inc' );		 


//-------------------------------------
class trThankyou extends trBasePage
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
		return "Nükleer fisyon olmadığı bir dünya taahhüdünde için teşekkür ederiz";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Yeterli sesler nükleer fisyon tehlikeleri hakkında cesurca konuşma ile, nükleer fisyon olmadan bu bir dünya yapabilirsiniz.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dünya, nükleer, fizyon";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Sözünü için teşekkür ederiz</h1>

		<p>$personal_name teşekkür ederiz.</p>
		
		<p>Gerçekten bu önemli arayış destek olması takdir. Sen yemin almış $num_pledges diğerleri katıldı.</p> 
		
		<p>Zamanı geldiğinde tanıklık - cesur olmayı unutmayın. Arkadaşlarınız ve Dostlarınız sizi nükleer fisyon olmadığı bir dünyada inanıyorum bildirin.</p>
		
		<p><strong>Ben birlikte bir fark yaratabilir umuyoruz.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>