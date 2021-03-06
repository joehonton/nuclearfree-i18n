<?php
//=============================================================================
//
// File:         /i18n/taThankyou.inc
//
// Language:     PHP
//
// Contents:     ta = தமிழ்  (Tamil)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/taBasePage.inc' );


//-------------------------------------
class taThankyou extends taBasePage
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
		return "அணு பிளப்பு இல்லாமல் ஒரு உலக உறுதியளிப்பது நன்றி";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "போதுமான குரல்கள் அணு பிளப்பு ஆபத்துக்களை பற்றி தைரியத்தோடு பேசும், நாம் அணு பிளப்பு இல்லாமல் இந்த உலகில் செய்ய முடியும்.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "உலகின் அணு பிளப்பு";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>உங்கள் வாக்குறுதியை நன்றி</h1>

		<p>நீங்கள் $personal_name நன்றி.</p>
		
		<p>நான் இந்த முக்கியமான தேடி உங்கள் ஆதரவு இல்லாமல் பாராட்டவேண்டும். நீங்கள் உறுதிமொழி எடுத்து $num_pledges மற்றவர்கள் சேர்ந்தார்.</p> 
		
		<p>தைரியமான இருக்கும் நினைவில் - நேரம் சரியாக இருக்கும் போது சாட்சியமளிக்க. உங்கள் நண்பர்கள் மற்றும் நண்பர்களின் நீங்கள் அணு பிளப்பு இல்லாமல் ஒரு உலக நம்பிக்கை என்று தெரியப்படுத்துங்கள்.</p>
		
		<p><strong>நான் ஒன்றாக நாம் ஒரு வித்தியாசம் முடியும் என்று நம்புகிறேன்.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>