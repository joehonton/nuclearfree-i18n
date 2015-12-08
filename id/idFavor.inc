<?php
//=============================================================================
//
// File:         /i18n/idFavor.inc
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
class idFavor extends idBasePage
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
		return "Aku punya permintaan";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Anda dapat membantu dengan berbicara dengan berani tentang bahaya fisi nuklir.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fasilitas nuklir, tenaga nuklir, energi nuklir, senjata nuklir, fisi, Bumi, air mendidih, listrik";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "marmer biru kita yang indah!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Sungguh-sungguh berjanji";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Bersumpah "tidak lebih fisi" sumpah sekarang!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Anda dapat membantu dengan berbicara berani</h1>
			
			<p>Salam!</p>
			
			<p>Saya punya permintaan. <strong>Maukah Anda membantu saya dalam pencarian saya untuk membuat ini sebuah dunia tanpa fisi nuklir?</strong></p>
			
			<p>Izinkan saya menjelaskan mengapa saya merasa sangat kuat tentang hal ini.</p>
	
			<p>Ketika aku tumbuh dewasa, eksplorasi ruang angkasa berada di puncak kemuliaan penuh. Kegembiraan yang menyertai petualangan tampaknya dibagi oleh semua orang. Sensasi yang menyertai setiap tonggak sejarah baru, membangkitkan selera kita untuk lebih. Dan antisipasi bahwa kami benar-benar akan menempatkan manusia di bulan dan kembali dengan selamat ke Bumi, membuat kami terlibat bahkan dengan keberhasilan kecil dan kegagalan proyek.</p>
			
			<p>Sebelum mencapai bahwa tujuan utama, ada banyak prestasi penting. Salah satu yang paling menggembirakan ini adalah ketika astronot pecah bebas dari orbit Bumi. Untuk pertama kalinya, manusia meninggalkan keamanan planet asal mereka. Kami seperti pencari sensasi pada petualangan seumur hidup.</p>
			
			<p>Dan kemudian hal yang paling luar biasa terjadi. Para astronot melirik kembali di bumi surut, dan melihat untuk pertama kalinya marmer biru yang adalah rumah kami, dan mereka hampir kewalahan oleh keindahan berharga apa yang mereka yang lewat melihat. Gambar fotografi yang mereka dikirim kembali disiarkan ke seluruh dunia, dan kita juga tidak terpesona.</p>
			
			<p>Kerentanan ditangkap dalam foto-foto membuat kita sadar diri kita dengan cara yang melampaui semua kesetiaan politik. Untuk waktu yang singkat, kita lupa tentang Perang Dingin, kita mengesampingkan perbedaan-perbedaan kami, dan kami kagum pada keindahan Bumi. Dari kesadaran baru kita tahu betapa rapuh tempat kita di alam semesta, dan bagaimana makin mendekati kita adalah untuk menghancurkan satu-satunya rumah kita akan pernah memiliki.</p>
			
			<p>Kami terbangun dengan rasa urgensi untuk memperbaiki kekurangan kita. Dengan ledakan aktivitas, kami bekerja untuk memperbaiki masalah kami. Perjanjian internasional terhadap proliferasi senjata nuklir, dan perjanjian untuk melarang semua pengujian atas tanah senjata nuklir adalah bukti bahwa kita bisa berbicara tentang nilai-nilai bersama dan mencapai tujuan yang masuk akal bersama. Akhirnya, dengan jatuhnya Tembok Berlin, dan pencairan hubungan antara saingan utama dari Perang Dingin, kami mulai upaya serius pertama bertujuan untuk mengurangi persediaan senjata nuklir global.</p>
			
			<p>Tapi karena saat itu kita tampaknya telah kehilangan semangat kami untuk bebas dari senjata nuklir, dan upaya baru untuk melanjutkan pekerjaan bahwa dunia tidak membuat banyak kemajuan nyata. Setelah empat dekade pembicaraan loyo, kita bahkan belum mampu mempertahankan kondisi saat ini urusan: perjanjian nuklir internasional telah dielakkan atau diabaikan, yang stok global penuaan memburuk, dan penelitian senjata nuklir baru terus berlanjut.</p>
			
			<p><strong>Kebijakan penangkalan telah jelas gagal.</strong> Untuk malu, telah digantikan oleh janji samar dan retorika kosong.</p>
			
			<p>Sayangnya, senjata nuklir tidak hanya keprihatinan kami. Kita sekarang tahu bahwa tenaga nuklir juga menimbulkan ancaman serius bagi Bumi kita yang berharga. Kami baru saja mulai untuk membangkitkan kesadaran bahwa pembangkit listrik tenaga nuklir tidak dapat dibuat 100% aman.</p>
			
			<p>The catastrophic disaster at Fukushima never should have happened because the nuclear engineers had prepared for every possible worst-case scenario: they had safety rules in place for every piece of equipment; operating procedures for every possible situation; contingency plans for when things when wrong; and multiple automatic compensating mechanisms in case the reserve equipment didn't work. All of the industry's best engineers were working diligently and conscientiously with safety as their top priority. Yet still something terrible happened. And remember, this occurred 25 years after Chernobyl, with ample time to learn from previous mistakes.</p>
			
			<p>Hari ini saya memiliki waktu yang sangat sulit mempercayai hampir segala sesuatu yang perusahaan energi nuklir ceritakan. Lebih murah daripada alternatif? Bersih daripada alternatif? Aman daripada alternatif? Tidak. Tidak. Tidak.</p>
			
			<p><strong>Semua ini hanya untuk merebus air?</strong></p>
	
			<p>Berikut ini adalah kebenaran yang sederhana: tidak ada yang khusus tentang listrik yang dihasilkan oleh pembangkit listrik tenaga nuklir. Minyak, batu bara, gas, dan nuklir semua menggunakan mekanisme yang sama untuk menghasilkan listrik. Sangat sederhana:</p>
			
			<ol>
				<li>Sebuah sumber panas mendidih air.</li>
				<li>Uap dari air mendidih memaksa bilah turbin berputar.</li>
				<li>Kumparan induksi melekat pada turbin berputar menciptakan listrik ketika diputar melalui medan magnet.</li>
			</ol>
			
			<p>Menghasilkan listrik hanya unsur fisika dan teknik. Jadi mengapa pergi ke kesulitan air mendidih oleh atom membelah? Mengapa membuat limbah nuklir berbahaya yang kita tidak pernah bisa menyingkirkan? Mengapa merusak lingkungan dengan pertambangan uranium dan penggilingan yang menciptakan limbah beracun-lahan? Dan mengapa perusahaan tenaga nuklir mengekspor teknologi ini berbahaya bagi negara-negara berkembang?</p>
			
			<p>Jadi di sini adalah permintaan. <strong>Dapatkah Anda membantu saya untuk berbicara tentang fakta-fakta sederhana?</strong> Saya tidak meminta Anda untuk bergabung dengan organisasi atau menyumbangkan uang, tetapi hanya untuk menambahkan nama Anda ke daftar orang pemberani yang akan berbicara dalam mendukung dunia tanpa fisi nuklir.</p>
			
			<p>Saya berharap hal ini akan membuat perbedaan.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>