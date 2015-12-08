<?php
//=============================================================================
//
// File:         /i18n/trPledge.inc
//
// Language:     PHP
//
// Contents:     tr = Türkçe (Turkish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 31, 2013
//
//=============================================================================

require_once( __DIR__ . '/trBasePage.inc' );


//-------------------------------------
class trPledge extends trBasePage
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
		return "Fisyon olmadığı bir dünya doğru bir söz";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Nükleer fisyon kullanılarak dayatılan tehlikeleri hakkında cesurca konuşmak için umut verici, dünyanın diğer vatandaşlarla bir araya.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nükleer fisyon, nükleer enerji, nükleer silahlar, cesaretle konuşmak, söz, ciddiyetle rehin, yemin";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ben cesaretle konuşmak için söz veriyorum.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Şimdi "yok artık fisyon" yemin et!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Sizin verilen ad ve soyadı";
	}

	//---------------------------------
	function city()
	{
		return "Şehir veya memleketi";
	}
	
	//---------------------------------
	function country()
	{
		return "Sizin milliyet";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Adınızı verildiyse yemin daha etkili olacaktır. Eğer formu doldurunuz misiniz?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Sizin yemin Eğer memleketi ve milliyet eğer varsa daha anlamlı olabilir, ama bunları ihmal istiyorsanız, sadece düğmeye "söz veriyorum" bir kez daha basın olacaktır.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Fisyon olmadığı bir dünya doğru bir söz</h1>
			
			<p>Ben, $personal_name, elektrik üretimi ve askeri silah nükleer fisyon kullanımı ile Dünya ve tüm sakinleri dayatılan tehlikeleri hakkında cesurca konuşmak için umut verici, dünyanın benim vatandaşlar ile birleştirmek.</p>
			
			<p><strong>Ben ciddiyetle nükleer enerjinin tehlikeleri hakkında cesurca konuşmak rehin.</strong> Elektrik üretiminde nükleer fisyon kullanmanın yararları abartılı ve gerçek uzun vadeli riskler devam etmek için çok büyük.</p>
			
			<ol>
				<li>Nükleer santraller tarafından üretilen elektrik elektrik üretimi diğer formları daha ucuz değildir.</li>
				<li>Nükleer enerji santralleri felaket yetmezliği 100% güvenli yapılamaz.</li>
				<li>Nükleer fisyon yarattığı izotopik atık çok uzun bir süre için toksik kalır ve bunu koymak için bir yer var.</li>
				<li>Nükleer enerji temiz enerji değildir: madencilik, freze, ve uranyum cevheri zenginleştirme insanlar ve yaban hayatı için zararlı olan büyük ekolojik atık toprakları oluşturur.</li>
				<li>Enerji santralleri ve nükleer silah için zenginleştirilmiş uranyum için zenginleştirilmiş uranyum aynı ekipman ile yapılır.</li>
			</ol>
			
			<p><strong>Ben ciddiyetle nükleer silahların askeri kullanımı hakkında cesaretle konuşmak rehin.</strong> Zaman nükleer silahların kullanımı vazgeçmeye bütün uluslar için geldi.</p>
			
			<ol start='6'>
				<li>Herhangi bir kişi, kuruluş ya da nükleer silah kullanma devlet için ahlaki meşru bir gerekçesi yoktur.</li>
				<li>Bir caydırıcı olarak nükleer silah sahip başarısız bir politikasıdır.</li>
				<li>Nükleer silahlarla milletler güvenli bir şekilde cephanelik sökülmesi için planlar geliştirmelidir.</li>
				<li>Nükleer yetenekleri ile milletler olan hedefi tüm nükleer silahların tamamen kaldırılması olduğu müzakerelere meşgul olmalıdır.</li>
				<li>Hiç kimse yeni nükleer silah geliştirme sürdürmelidir.</li>
			</ol>
			
			<p>Yılında, $this_date, bu güne kadar yemin<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>