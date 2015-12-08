<?php
//=============================================================================
//
// File:         /i18n/msPledge.inc
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
class msPledge extends msBasePage
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
		return "Satu janji ke arah dunia tanpa pembelahan";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Bersama-sama dengan rakan-rakan warga dunia dalam berjanji untuk bercakap dengan berani tentang bahaya yang dikenakan oleh penggunaan pembelahan nuklear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "pembelahan nuklear, tenaga nuklear, senjata nuklear, berani bercakap, janji, sesungguhnya janji, bersumpah, sumpah";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Saya berjanji untuk bercakap berani.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Bersumpah "tidak lebih pembelahan" sumpah sekarang!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "nama yang diberikan dan nama keluarga";
	}

	//---------------------------------
	function city()
	{
		return "bandar atau kampung";
	}
	
	//---------------------------------
	function country()
	{
		return "kewarganegaraan";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Sumpah ini akan menjadi lebih berkesan jika anda berikan nama anda. Bolehkah anda mengisi borang ini?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Sumpah anda akan menjadi lebih bermakna jika anda berikan kampung dan kewarganegaraan anda, tetapi jika anda mahu untuk meninggalkan mereka, hanya tekan butang "Saya berjanji" sekali lagi.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Satu janji ke arah dunia tanpa pembelahan</h1>
			
			<p>Saya, $personal_name, bersatu dengan rakyat rakan-rakan di dunia dalam berjanji untuk bercakap dengan berani tentang bahaya yang dikenakan ke atas bumi dan semua penghuninya dengan menggunakan pembelahan nuklear dalam penjanaan elektrik dan senjata tentera.</p>
			
			<p><strong>Saya berjanji bersungguh-sungguh untuk bercakap berani mengenai bahaya tenaga nuklear.</strong> Kebaikan menggunakan pembelahan nuklear dalam penjanaan elektrik adalah dibesar-besarkan, dan benar risiko jangka panjang adalah terlalu besar untuk meneruskan.</p>
			
			<ol>
				<li>Elektrik yang dijana oleh loji kuasa nuklear tidak adalah lebih murah daripada lain-lain bentuk penjanaan elektrik.</li>
				<li>Loji kuasa nuklear tidak boleh dibuat 100% selamat daripada kegagalan bencana.</li>
				<li>Sisa isotop dicipta oleh pembelahan nuklear akan kekal toksik untuk masa yang sangat lama, dan kita tidak mempunyai tempat untuk meletakkan ia.</li>
				<li>Tenaga nuklear tidak tenaga bersih: perlombongan, pengilangan, dan pengayaan bijih uranium mewujudkan besar ekologi sisa-tanah yang berbahaya kepada manusia dan hidupan liar.</li>
				<li>Uranium bagi loji kuasa dan uranium yang diperkaya untuk senjata nuklear dibuat dengan peralatan yang sama.</li>
			</ol>
			
			<p><strong>Saya berjanji bersungguh-sungguh untuk bercakap berani tentang penggunaan tentera senjata nuklear.</strong> Masanya telah tiba untuk semua negara-negara untuk meninggalkan penggunaan senjata nuklear.</p>
			
			<ol start='6'>
				<li>Tidak ada sebab yang sah dari segi moral untuk mana-mana individu, organisasi, atau negeri untuk menggunakan senjata nuklear.</li>
				<li>Pemilikan senjata nuklear sebagai penghalang satu dasar yang gagal.</li>
				<li>Negara-negara dengan senjata nuklear harus membangunkan rancangan untuk selamat merombak senjata mereka.</li>
				<li>Negara-negara dengan keupayaan nuklear perlu melibatkan diri dalam rundingan yang tujuannya adalah pemansuhan lengkap semua senjata nuklear.</li>
				<li>Tiada siapa yang perlu meneruskan pembangunan senjata nuklear baru.</li>
			</ol>
			
			<p>Bersumpah untuk hari ini, $this_date, dalam<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>