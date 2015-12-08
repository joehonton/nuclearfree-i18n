<?php
//=============================================================================
//
// File:         /i18n/haPledge.inc
//
// Language:     PHP
//
// Contents:     ha = Harshen Hausa
//
// Author:       Joe Honton © 2014
//
// Initial date: January 18, 2014
//
//=============================================================================

require_once( __DIR__ . '/haBasePage.inc' );


//-------------------------------------
class haPledge extends haBasePage
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
		return "A wa'adin zuwa duniya ba tare da fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Join together with fellow citizens of the world in promising to speak courageously about the dangers imposed by the use of nuclear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukiliya fission, makaman nukiliya makamashi, makaman nukiliya, magana m, wa'adi, rantsuwarsu jingina, rantsuwa, rantsuwa";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Na yi alkawari zuwa magana da ƙarfin hali";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Ku yi rantsuwa da "ba fission"!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Sunan kuma sunan mahaifi";
	}

	//---------------------------------
	function city()
	{
		return "Garinsu";
	}
	
	//---------------------------------
	function country()
	{
		return "Wace kasa";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "A rantsuwar zai fi tafiya da kyau idan ka bayar da sunanka. Za a iya cika da fatan a cikin sifa?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'A rantsuwar zai fi ma\'ana idan ka bayar da garinsu da kuma kasa, amma idan kana so su ƙetare, kamar dai danna "Na yi alkawari" maballin sau ɗaya more.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>A wa'adin zuwa duniya ba tare da fission</h1>
			
			<p>Na, $personal_name, gama da 'yan'uwanmu' yan ƙasa na duniya a cikin alamar rahama yin magana da ƙarfin hali game da hatsarori ya hõre bisa duniya, da dukan mazaunanta hanyar yin amfani da makaman nukiliya fission a cikin ƙarni na wutar lantarki da kuma soja makamai.</p>
			
			<p><strong>Na rantsuwarsu sun yi alkawalin magana da ƙarfin hali game da hatsarori da makaman nukiliya makamashi.</strong> Isa yabo na yin amfani da makaman nukiliya fission a cikin ƙarni na wutar lantarki na ƙarya ne, kuma na gaskiya dogon lokacin da alamar hadarin yana da babban ci gaba.</p>
			
			<ol>
				<li>Wutar lantarki tsara by makaman nukiliya ikon tsire-tsire ba mai rahusa fiye da sauran siffofin da wutar lantarki tsara.</li>
				<li>Nuclear ikon tsire-tsire ba za a iya sanya 100% hadari daga masifa kasa.</li>
				<li>A isotopic sharar gida halitta makaman nukiliya fission za su rage mai guba na dogon kwana biyu, da kuma ba mu da wurin saka shi.</li>
				<li>Nuclear makamashi ba tsabta da makamashi: da karafa, tsaftacewa, da kuma inganta uranium tama halitta manyan muhalli sharar gida-asashe da suke cutarwa ga mutane da kyau.</li>
				<li>Karfafuwa uranium don ikon tsirrai da sosai karfafuwa uranium don makaman nukiliya suke yi da wannan kayan.</li>
			</ol>
			
			<p><strong>Na rantsuwarsu sun yi alkawalin magana da ƙarfin hali game da soja yin amfani da makaman nukiliya.</strong> Lokacin da ya zo ga dukan al'ummai su rabuwa da amfani da makaman nukiliya.</p>
			
			<ol start='6'>
				<li>Babu wani halin kirki istinbadi dalilin kowane mutum, kungiyar, ko jiha don amfani da makaman nukiliya.</li>
				<li>A mallaki makaman nukiliya a matsayin mai kare manufofin kasa ne.</li>
				<li>Kasashe da makaman nukiliya ya ci gaba da tsare-tsaren domin a amince da su rarraba sito na makamai.</li>
				<li>Kasashe da makaman nukiliya iyawa ya tafiyar da shawara na burin wanda shi ne cikakken hallaka dukan makaman nukiliya.</li>
				<li>Ba wanda ya bi da cin gaban sabuwar makaman nukiliya.</li>
			</ol>
			
			<p>Rantsuwa, har ya zuwa yau, $this_date, a<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>