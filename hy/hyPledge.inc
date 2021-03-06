
<?php
//=============================================================================
//
// File:         /i18n/hyPledge.inc
//
// Language:     PHP
//
// Contents:     hy = Հայերեն  (Armenian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/hyBasePage.inc' );


//-------------------------------------
class hyPledge extends hyBasePage
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
		return "A խոստումը դեպի մի աշխարհում, առանց տրոհման";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Գրանցման հետ միասին մյուս քաղաքացիների աշխարհում խոստանալով խոսել խիզախորեն վտանգների նկատմամբ օգտագործման միջուկային տրոհման.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "Միջուկային տրոհման, միջուկային էներգետիկայի, միջուկային զենք, խոսել համարձակորեն, խոստում, հանդիսավորապես խոստանում, երդվում, երդում";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ես խոստանում եմ խոսել խիզախորեն";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Երդվել «է ոչ ավելի, տրոհման» երդումը Հիմա';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Ձեր անունը եւ ընտանիքի անունը";
	}

	//---------------------------------
	function city()
	{
		return "ձեր հայրենի քաղաքը";
	}
	
	//---------------------------------
	function country()
	{
		return "Ձեր ազգությունը";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Երդումը կլինի ավելի արդյունավետ է, եթե դուք տրամադրել Ձեր անունը: Կարող եք լրացնել ձեւով.";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Ձեր երդումը կլիներ ավելի իմաստալից է, եթե դուք տրամադրել եք ձեր հայրենի քաղաքը եւ քաղաքացիություն, բայց եթե ուզում եք չնկատել նրանց, պարզապես սեղմեք «Ես խոստանում եմ» կոճակը եւս մեկ անգամ.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>A խոստումը դեպի մի աշխարհում, առանց տրոհման</h1>
			
			<p>Ես, $personal_name, միավորել իմ ընկերների քաղաքացիների աշխարհում խոստանալով խոսել խիզախորեն վտանգների նկատմամբ երկրի եւ նրա բոլոր բնակիչների կողմից օգտագործման միջուկային տրոհման սերնդի էլեկտրաէներգիայի եւ ռազմական զենքի.</p>
			
			<p><strong>ես հանդիսավորությամբ խոստանում խոսել խիզախորեն վտանգների մասին միջուկային էներգիայի:</strong> Ըստ էության, օգտագործելով միջուկային բաժանիչներ սերնդի էլեկտրաէներգիայի չափազանցված են, եւ ճշմարիտ երկարաժամկետ ռիսկերը չափազանց մեծ են շարունակել.</p>
			
			<ol>
				<li>Էլեկտրաէներգիայի գեներացվել է ատոմակայանների չէ, էժան է, քան այլ ձեւերի էլեկտրաէներգիայի սերնդի.</li>
				<li>Ատոմակայաններ չեն կարող կատարվել է 100% անվտանգ է աղետալի ձախողման.</li>
				<li>Իզոտոպային թափոնների ստեղծված միջուկային տրոհման կմնա թունավոր համար շատ երկար ժամանակ, եւ մենք չունենք ոչմի տեղ տեղադրել այն.</li>
				<li>Միջուկային էներգետիկան է մաքուր էներգիա, որ հանքարդյունաբերության, ֆրեզերային, եւ հարստացման ուրանի հանքաքարի ստեղծում խոշոր էկոլոգիական թափոնների հողերը, որոնք վնասակար է մարդկանց եւ բնության.</li>
				<li>Հարստացված ուրանի Էլեկտրակայանների եւ բարձր հարստացված ուրանը միջուկային զենքի կատարվում են նույն սարքավորումներով.</li>
			</ol>
			
			<p><strong>ես հանդիսավորությամբ խոստանում խոսել խիզախորեն մասին ռազմական օգտագործման միջուկային զենքի:</strong> Ժամանակն է եկել բոլոր ազգերը հրաժարվել օգտագործումը միջուկային զենքի.</p>
			
			<ol start='6'>
				<li>Չկա բարոյապես օրինական պատճառ ցանկացած անձ, կազմակերպություն կամ պետություն է օգտագործել միջուկային զենք.</li>
				<li>Տիրապետումն միջուկային զենքի որպես զսպման է ձախողվել քաղաքականություն</li>
				<li>Ազգերը, միջուկային զենքի, պետք է մշակել ծրագրեր անվտանգ ապամոնտաժման իրենց զինանոցը.</li>
				<li>Ի հետ միջուկային կարողություններով պետք է ներգրավվի բանակցություններում, որոնց նպատակն է ամբողջական վերացումը բոլոր միջուկային զենքի.</li>
				<li>Ոչ ոք չպետք է հետամուտ զարգացման նոր միջուկային զենքի.</li>
			</ol>
			
			<p>Երդում այս օրը, $this_date ին<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>