<?php
//=============================================================================
//
// File:         /i18n/msThankyou.inc
//
// Language:     PHP
//
// Contents:     ms = Bahasa Melayu (Malay)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/msBasePage.inc' );


//-------------------------------------
class msThankyou extends msBasePage
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
		return "Terima kasih kerana melakukan untuk dunia tanpa pembelahan nuklear";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Dengan suara yang cukup berani bercakap mengenai bahaya pembelahan nuklear, kita boleh menjadikan dunia ini tanpa pembelahan nuklear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dunia, nuklear, pembelahan";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Terima kasih kerana janji</h1>

		<p>Terima kasih $personal_name.</p>
		
		<p>Saya benar-benar menghargai mempunyai sokongan anda pada usaha yang penting ini. Anda telah menyertai $num_pledges orang lain yang telah mengambil sumpah.</p> 
		
		<p>Ingat untuk menjadi berani - memberi keterangan apabila tiba masa yang betul. Mari kawan-kawan dan kenalan anda tahu bahawa anda percaya dalam dunia tanpa pembelahan nuklear.</p>
		
		<p><strong>Saya berharap bahawa bersama-sama kita boleh membuat perbezaan.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>