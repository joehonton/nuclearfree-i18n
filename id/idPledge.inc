<?php
//=============================================================================
//
// File:         /i18n/idPledge.inc
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
class idPledge extends idBasePage
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
		return "Sebuah janji menuju dunia tanpa fisi";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Bergabung bersama dengan sesama warga dunia dalam menjanjikan untuk berbicara dengan berani tentang bahaya yang dikenakan dengan menggunakan fisi nuklir.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fisi nuklir, energi nuklir, senjata nuklir, berbicara dengan berani, janji, janji khidmat, bersumpah, sumpah";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Saya berjanji untuk berbicara";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Bersumpah "tidak lebih fisi" sumpah sekarang!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "nama yang diberikan dan nama keluarganya";
	}

	//---------------------------------
	function city()
	{
		return "Kota atau kampung";
	}
	
	//---------------------------------
	function country()
	{
		return "kebangsaan Anda";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Sumpah akan lebih efektif jika Anda memberikan nama Anda. Bisa tolong mengisi formulir?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Sumpah Anda akan lebih bermakna jika Anda memberikan kampung halaman Anda dan kebangsaan, tetapi jika Anda ingin menghilangkan mereka, cukup tekan "Aku janji" tombol sekali lagi.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Sebuah janji menuju dunia tanpa fisi</h1>
			
			<p>Aku, $personal_name, bersatu dengan sesama warga saya dunia dalam menjanjikan untuk berbicara dengan berani tentang bahaya yang dikenakan terhadap bumi dan semua penghuninya dengan menggunakan fisi nuklir di pembangkit listrik dan senjata militer.</p>
			
			<p><strong>Saya sungguh-sungguh berjanji untuk berbicara dengan berani tentang bahaya energi nuklir.</strong> Manfaat menggunakan fisi nuklir di pembangkit listrik yang berlebihan, dan risiko jangka panjang benar terlalu besar untuk terus.</p>
			
			<ol>
				<li>Listrik yang dihasilkan oleh pembangkit listrik tenaga nuklir tidak lebih murah daripada bentuk-bentuk lain dari pembangkit listrik.</li>
				<li>Pembangkit listrik tenaga nuklir tidak dapat dibuat 100% aman dari bencana kegagalan.</li>
				<li>Limbah isotop diciptakan oleh fisi nuklir akan tetap beracun untuk waktu yang sangat lama, dan kita tidak memiliki tempat untuk meletakkannya.</li>
				<li>Energi nuklir tidak energi bersih: pertambangan, penggilingan, dan pengayaan uranium bijih menciptakan tanah terlantar ekologi besar yang berbahaya bagi manusia dan satwa liar.</li>
				<li>Uranium yang diperkaya untuk pembangkit listrik dan uranium untuk senjata nuklir yang dibuat dengan peralatan yang sama.</li>
			</ol>
			
			<p><strong> Saya sungguh-sungguh berjanji untuk berbicara dengan berani tentang penggunaan militer senjata nuklir.</strong> Waktunya telah tiba bagi semua negara untuk menolak penggunaan senjata nuklir.</p>
			
			<ol start='6'>
				<li>Tidak ada alasan moral yang sah bagi setiap individu, organisasi, atau negara untuk menggunakan senjata nuklir.</li>
				<li>Kepemilikan senjata nuklir sebagai pencegah adalah kebijakan yang gagal.</li>
				<li>Bangsa dengan senjata nuklir harus mengembangkan rencana untuk membongkar arsenal aman mereka.</li>
				<li>Bangsa dengan kemampuan nuklir harus terlibat dalam negosiasi yang tujuannya adalah penghapusan lengkap dari semua senjata nuklir.</li>
				<li>Tidak ada yang harus mengejar pengembangan senjata nuklir baru.</li>
			</ol>
			
			<p>Disumpah untuk hari ini, $this_date, di<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>