<?php
//=============================================================================
//
// File:         /i18n/idThankyou.inc
//
// Language:     PHP
//
// Contents:     id = Bahasa Indonesia (Indonesian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/idBasePage.inc' );


//-------------------------------------
class idThankyou extends idBasePage
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
		return "Terima kasih telah melakukan ke dunia tanpa fisi nuklir";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Dengan cukup berani berbicara suara tentang bahaya fisi nuklir, kita bisa membuat dunia ini tanpa fisi nuklir.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "dunia, nuklir, fisi";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Terima kasih atas janji Anda</h1>

		<p>Terima kasih $personal_name.</p>
		
		<p>Aku benar-benar menghargai memiliki dukungan Anda pada pencarian ini penting. Anda telah bergabung $num_pledges lain yang telah mengambil sumpah.</p> 
		
		<p>Ingat untuk menjadi berani - bersaksi kapan waktu yang tepat. Biarkan teman-teman dan kenalan tahu bahwa Anda percaya pada suatu dunia tanpa fisi nuklir.</p>
		
		<p><strong>Saya berharap bahwa bersama kita bisa membuat perbedaan.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>