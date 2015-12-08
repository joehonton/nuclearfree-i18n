<?php
//=============================================================================
//
// File:         /i18n/jvPledge.inc
//
// Language:     PHP
//
// Contents:     jv = Basa Jawa (Javanese)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/jvBasePage.inc' );


//-------------------------------------
class jvPledge extends jvBasePage
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
		return "Janji menyang janapada tanpa fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ayo bebarengan karo warga donya ing janjeni nganggo wani karo bab beboyo dileksanakake dening nggunakake nuklir fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklir fission, energi nuklir, senjata nuklir, omonga karo wani, janji, serius sumpah, sumpah";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Aku janji nganggo karo wani.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sumpah sing "ora liyane fission" sumpah saiki!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "diwenehi jeneng lan jeneng kulawarga";
	}

	//---------------------------------
	function city()
	{
		return "kutha utawa kutho asal";
	}
	
	//---------------------------------
	function country()
	{
		return "warga negara";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Sumpah bakal luwih efektif yen kasedhiya jeneng. Mangga ngisi formulir?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Panjenengan sumpah bakal luwih migunani yen kasedhiya Panjenengan kutho asal lan warga negara, nanging yen sampeyan pengin omit mau, mung pencet "aku janji" tombol liyane bebarengan.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Janji menyang janapada tanpa fission</h1>
			
			<p>Aku, $personal_name, nyawiji karo warga donya ing janjeni nganggo wani karo bab beboyo dileksanakake marang bumi lan dianggep pedunung dening nggunakake nuklir fission ing generasi saka listrik lan ing militèr senjata.</p>
			
			<p><strong>Aku sumpah nganggo wani karo bab beboyo saka energi nuklir.</strong> Kang manfaat saka nggunakake nuklir fission ing generasi saka listrik wis swara-nyatakake, lan risiko bener iku gedhe banget kanggo nerusake.</p>
			
			<ol>
				<li>Listrik kui dening nuklir tetanduran daya ora luwih murah saka jinis liyane listrik generasi.</li>
				<li>Nuclear daya tetanduran ora bisa digawe 100% aman saka lengkap gagal.</li>
				<li>Ing sampah isotopic digawé dening nuklir fission bakal tetep beracun kanggo wektu banget dawa lan kita kudu ora panggonan kanggo nyelehake iku.</li>
				<li>Nuclear energi ora resik energi: ing pertambangan, panggilingan, lan pengayaan saka uranium biji nggawe gedhe ekologis sampah-bantala sing mbebayani kanggo manungsa lan satwa.</li>
				<li>Kandungan uranium daya kanggo tetanduran lan kandungan uranium kanggo senjata nuklir sing digawe nganggo peralatan sing padha.</li>
			</ol>
			
			<p><strong>Aku sumpah nganggo wani karo babagan nggunakake militèr saka nuklir senjata.</strong> Nalika wis teka kanggo kabeh bangsa nglirwaaken nganggo senjata saka nuklir.</p>
			
			<ol start='6'>
				<li>Ana alesan sah kanggo maksud apa individu, organisasi, utawa negara kanggo nggunakake senjata nuklir.</li>
				<li>Ing milik saka nuklir senjata minangka tangkal iku privasi gagal.</li>
				<li>Bangsa nganggo senjata nuklir ngirim berkembang rencana aman kanggo nyirnakake keluwihan sing.</li>
				<li>Bangsa karo nuklir kapabilitas ngirim melu rembugan kang panggonan punika karusakan komplite kabeh gaman nuklir.</li>
				<li>Ana siji ngirim nguber pembangunan ing gaman anyar nuklir.</li>
			</ol>
			
			<p>Mlebu menyang dina, $this_date, ing<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>