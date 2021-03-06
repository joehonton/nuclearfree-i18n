<?php
//=============================================================================
//
// File:         /i18n/hiPledge.inc
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
class hiPledge extends hiBasePage
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
		return "परमाणु विखंडन के बिना एक दुनिया की ओर एक वादा";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "परमाणु विखंडन के उपयोग द्वारा लगाए गए खतरों के बारे में हिम्मत से बात करने का वादा में एक साथ दुनिया के साथी नागरिकों के साथ जुड़ें.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "परमाणु विखंडन, परमाणु ऊर्जा, परमाणु हथियार, शपथ, कसम से, वादा, सत्यनिष्ठा से प्रतिज्ञा, हिम्मत से बात";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "मैं हिम्मत से बात करने के लिए वादा";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'अब “कोई और अधिक परमाणु विखंडन” शपथ!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "दिया नाम और परिवार के नाम";
	}

	//---------------------------------
	function city()
	{
		return "अपने शहर या गृहनगर";
	}
	
	//---------------------------------
	function country()
	{
		return "अपनी राष्ट्रीयता";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "आप अपना नाम प्रदान की अगर शपथ अधिक प्रभावी होगा. आप प्रपत्र में भरने के लिए कृपया सकता है?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'आपकी कसम आप अपने गृहनगर और राष्ट्रीयता प्रदान की अगर अधिक सार्थक हो सकता है, लेकिन आप उन्हें न आना चाहते हैं, तो बस “मैं वादा करता हूँ” बटन एक बार फिर प्रेस होगा.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>परमाणु विखंडन के बिना एक दुनिया की ओर एक वादा</h1>
			
			<p>मैं $personal_name, विद्युत उत्पादन में और सैन्य हथियारों में परमाणु विखंडन के प्रयोग से धरती पर लगाया खतरों और अपने सभी निवासियों के बारे में हिम्मत से बात करने का वादा में दुनिया के मेरे साथी नागरिकों के साथ एकजुट हो जाएं.</p>
			
			<p><strong>मैं सत्यनिष्ठा से परमाणु ऊर्जा के खतरों के बारे में हिम्मत से बात करने के लिए प्रतिज्ञा.</strong> विद्युत उत्पादन में परमाणु विखंडन का उपयोग करने का गुण अतिरंजित, और सच लंबी अवधि के जोखिम जारी रखने के लिए भी बहुत अच्छा कर रहे हैं.</p>
			
			<ol>
				<li>परमाणु ऊर्जा संयंत्रों से बिजली उत्पन्न बिजली उत्पादन के अन्य रूपों की तुलना में सस्ता नहीं है.</li>
				<li>परमाणु ऊर्जा संयंत्रों आपत्तिजनक असफलता से 100% सुरक्षित नहीं बनाया जा सकता.</li>
				<li>परमाणु विखंडन के द्वारा बनाई गई समस्थानिक अपशिष्ट एक बहुत लंबे समय के लिए विषाक्त बना रहेगा, और हम इसे लगाने के लिए कोई जगह नहीं है.</li>
				<li>परमाणु ऊर्जा स्वच्छ ऊर्जा नहीं है: यूरेनियम अयस्क का खनन, पिसाई, और संवर्धन मानव और वन्य जीवन के लिए हानिकारक हैं कि बड़े पारिस्थितिक बेकार भूमि बनाता है.</li>
				<li>बिजली संयंत्रों और परमाणु हथियारों के लिए अत्यधिक संवर्धित यूरेनियम के लिए संवर्धित यूरेनियम को एक ही उपकरण के साथ बना रहे हैं.</li>
			</ol>
			
			<p><strong>मैं सत्यनिष्ठा से परमाणु हथियारों के सैन्य उपयोग के बारे में हिम्मत से बात करने के लिए प्रतिज्ञा.</strong> सभी देशों को परमाणु हथियारों के इस्तेमाल का त्याग करने के लिए समय आ गया है.</p>
			
			<ol start='6'>
				<li>किसी भी व्यक्ति, संगठन, या राज्य में परमाणु हथियारों का इस्तेमाल करने के लिए कोई नैतिक रूप से वैध कारण नहीं है.</li>
				<li>एक निवारक के रूप में परमाणु हथियारों के कब्जे एक असफल नीति है.</li>
				<li>परमाणु हथियारों से राष्ट्र को सुरक्षित रूप से अपने शस्त्रागार निराकरण के लिए योजना का विकास करना चाहिए.</li>
				<li>परमाणु क्षमताओं के साथ राष्ट्र जिसका लक्ष्य के लिए सभी परमाणु हथियारों के पूर्ण उन्मूलन है वार्ता में शामिल करना चाहिए.</li>
				<li>कोई भी नया परमाणु हथियारों के विकास को आगे बढ़ाने चाहिए.</li>
			</ol>
			
			<p>इस दिन, $this_date, में के शपथ<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>