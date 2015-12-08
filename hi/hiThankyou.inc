<?php
//=============================================================================
//
// File:         /i18n/hiThankyou.inc
//
// Language:     PHP
//
// Contents:     hi = हिन्दी  (Hindi)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 11, 2014
//
//=============================================================================

require_once( __DIR__ . '/hiBasePage.inc' );


//-------------------------------------
class hiThankyou extends hiBasePage
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
		return "परमाणु विखंडन के बिना एक दुनिया के लिए करने के लिए धन्यवाद";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "काफी आवाज परमाणु विखंडन के खतरों के बारे में हिम्मत से बोल के साथ, हम परमाणु विखंडन के बिना यह एक दुनिया बना सकते हैं.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "दुनिया, परमाणु विखंडन";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>अपना वादा करने के लिए धन्यवाद</h1>

		<p>आप $personal_name धन्यवाद.</p>
		
		<p>मैं वास्तव में इस महत्वपूर्ण खोज पर अपने समर्थन होने की सराहना करते हैं. आप शपथ ले लिया है, जो $num_pledges दूसरों शामिल हो गए हैं.</p> 
		
		<p>साहसी होने के लिए याद रखें - सही समय है जब गवाही देने के. अपने मित्रों और परिचितों आप परमाणु विखंडन के बिना एक दुनिया में विश्वास करते हैं कि पता करते हैं.</p>
		
		<p><strong>मैं एक साथ हम एक फर्क कर सकते हैं कि उम्मीद है.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>