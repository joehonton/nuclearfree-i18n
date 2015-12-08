<?php
//=============================================================================
//
// File:         /i18n/mtPledge.inc
//
// Language:     PHP
//
// Contents:     mt = Malti (Maltese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/mtBasePage.inc' );


//-------------------------------------
class mtPledge extends mtBasePage
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
		return "A wegħda lejn dinja mingħajr fissjoni";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Jingħaqdu flimkien ma 'sħabna ċ-ċittadini tad-dinja promettenti biex jitkellmu b'kuraġġ dwar il-perikli imposti mill-użu tal-fissjoni nukleari.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fissjoni nukleari, l-enerġija nukleari, armi nukleari, jitkellmu b'kuraġġ, wegħda, solennement rahan, naħlef, ġurament";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "jien wegħda li jitkellmu b'kuraġġ.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Naħlef l-"mhux aktar fissjoni" ġurament issa!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "isem u l-isem tal-familja";
	}

	//---------------------------------
	function city()
	{
		return "belt jew raħal";
	}
	
	//---------------------------------
	function country()
	{
		return "nazzjonalità";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Il-ġurament ikun aktar effettiv jekk inti pprovduti l-isem tiegħek. Tista 'jekk jogħġbok imla l-formola?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Urament tiegħek tkun aktar sinifikanti jekk inti ipprovdut Hometown tiegħek u n-nazzjonalità, imma jekk inti tixtieq li jħalli barra minnhom, biss agħfas il-"jien wegħda" buttuna darba aktar.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>A wegħda lejn dinja mingħajr fissjoni</h1>
			
			<p>Jien, $personal_name, jingħaqdu ma 'ċittadini kollegi tiegħi tad-dinja promettenti biex jitkellmu b'kuraġġ dwar il-perikli imposti fuq Dinja u l-abitanti kollha tagħha bl-użu tal-fissjoni nukleari fil-ġenerazzjoni tal-elettriku u fil armi militari.</p>
			
			<p><strong>Jiena solennement wegħda li jitkellmu b'kuraġġ dwar il-perikli ta 'l-enerġija nukleari.</strong> Il-merti ta' użu fissjoni nukleari fil-ġenerazzjoni ta 'elettriku huma esaġerati, u r-riskji veri fit-tul huma kbar wisq biex tkompli.</p>
			
			<ol>
				<li>Elettriku ġġenerat mill-impjanti nukleari ma jkunx irħas minn forom oħra ta 'ġenerazzjoni tal-elettriku.</li>
				<li>Impjanti nukleari ma jistgħux isiru 100% sikur minn falliment katastrofiku.</li>
				<li>L-iskart isotopika maħluqa mill-fissjoni nukleari tibqa tossiċi għal żmien twil ħafna, u għandna l-ebda post li tqiegħed lilha.</li>
				<li>Enerġija nukleari mhix enerġija nadifa: il-minjieri, it-tħin, u arrikkir ta 'l-uranju ore joħloq l-iskart' artijiet ekoloġiċi kbar li huma ta 'ħsara għall-bnedmin u annimali selvaġġi.</li>
				<li>Uranju arrikkit għall-impjanti u uranju arrikkit ħafna għall-armi nukleari huma magħmula bl-istess tagħmir.</li>
			</ol>
			
			<p><strong>Jiena solennement wegħda li jitkellmu b'kuraġġ dwar l-użu militari ta 'armi nukleari.</strong> Wasal iż-żmien għall-nazzjonijiet kollha li jirrinunzjaw l-użu ta' armi nukleari.</p>
			
			<ol start='6'>
				<li>M'hemm l-ebda raġuni leġittima biex moralment kwalunkwe individwu, organizzazzjoni, jew stat jużaw armi nukleari.</li>
				<li>Il-pussess ta 'armi nukleari bħala deterrent hija politika fallew.</li>
				<li>Nazzjonijiet b'armi nukleari għandhom jiżviluppaw pjanijiet għall b'sigurtà żarmar armament tagħhom.</li>
				<li>Nazzjonijiet mal-kapaċitajiet nukleari għandhom jidħlu f'negozjati għan tagħha hu l-abolizzjoni totali tal-armi nukleari kollha.</li>
				<li>Ebda wieħed għandu jsegwi l-iżvilupp ta 'armi nukleari ġodda.</li>
			</ol>
			
			<p>Ġuramentat din il-ġurnata, $this_date, fil<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>