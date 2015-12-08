<?php
//=============================================================================
//
// File:         /i18n/mrThankyou.inc
//
// Language:     PHP
//
// Contents:     mr = मराठी   (Marathi)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 11, 2014
//
//=============================================================================

require_once( __DIR__ . '/mrBasePage.inc' );


//-------------------------------------
class mrThankyou extends mrBasePage
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
		return "आणव विखंडन न जागतिक कटिबद्ध धन्यवाद";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "पुरेशी आवाज आणव विखंडन धोके बद्दल धैर्याने बोलत, आम्ही आणव विखंडन न या जगात करू शकता.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "जग, आणव विखंडन";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>आपल्या वचन धन्यवाद</h1>

		<p>आपण $personal_name धन्यवाद.</p>
		
		<p>मी हे महत्त्वाचे शोध वर आपले समर्थन येत प्रशंसा करतो. आपण शपथ घेतली झालेल्या $num_pledges इतर सामील आहेत.</p> 
		
		<p>शूर असल्याचे लक्षात ठेवा - वेळ योग्य आहे तेव्हा साक्ष. आपले मित्र आणि ओळखीचा आपण आणव विखंडन न जगात विश्वास कळवा.</p>
		
		<p><strong>मी एकत्र आम्ही बदल घडवू शकतो अशी आशा.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>