<?php
//=============================================================================
//
// File:         /i18n/trFavor.inc
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
class trFavor extends trBasePage
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
		return "Ben bir istek var";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Bu nükleer fisyon tehlikeleri hakkında cesurca konuşarak yardımcı olabilir.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nükleer tesisler, nükleer enerji, nükleer silahlar, fisyon, Dünya, kaynar su, elektrik";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "Güzel mavi mermer!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ciddiyetle söz";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Şimdi "yok artık fisyon" yemin et!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Bu cesaretle konuşarak yardımcı olabilir</h1>
			
			<p>Merhaba,</p>
			
			<p>Ben bir istek var. <strong>Nükleer fisyon olmadan bu bir dünya yapmak için görevimi bana yardımcı olacak mı?</strong></p>
			
			<p>Bu konuda bu kadar güçlü hissediyorum neden bana açıklamak için izin verin.</p>
	
			<p>Ben büyürken, uzay araştırmaları tam zafer yükseklikte oldu.Macera eşlik heyecan herkes tarafından paylaşılan gibi görünüyordu. Her yeni bir kilometre taşı eşlik heyecan, daha fazla bizim iştahını uyandırmak. Ve biz gerçekten ayda bir adam koymak ve Dünya'ya güvenli bir şekilde onu geri dönmek için gittiğini beklentisiyle, bize projenin bile küçük başarıları ve başarısızlıkları ile meşgul etti.</p>
			
			<p>Bu nihai hedefi ulaşmadan önce, çok önemli başarıları vardı. Astronotlar Dünya yörüngesine ücretsiz kırdı zaman bu en heyecan verici biriydi. İlk kez, insanlar kendi gezegenin güvenliğini terk edildi. Biz bir ömür boyu maceraya heyecan arayanlar gibi idi.</p>
			
			<p>Ve sonra en önemli şey oldu. Astronotlar uzaklaşıyorsun Dünya geri baktı ve ilk kez evimiz oldu mavi mermer gördüm, ve neredeyse onlar beheld ne değerli güzellik tarafından boğulmuş. Geri gönderilen fotoğraf görüntüleri dünyaya yayın, ve biz de hayran edildi.</p>
			
			<p>Bu fotoğraflarda yakalanan güvenlik açığı tüm siyaset aşan bir şekilde kendimizi bize bilinçli yaptı. Zaman içinde kısa bir an için, Soğuk Savaş hakkında, biz farklılıklarımızı bir kenara, ve biz Dünya'nın güzelliği hayret unuttum. Bu yeni bilinç itibaren biz biz hiç olacak tek ev yok için ne kadar tehlikeli yakın evrendeki yerimizi oldu ne kadar kırılgan biliyordu, ve.</p>
			
			<p>Biz eksiklikleri düzeltmek için aciliyet duygusu ile uyandı. Faaliyet bir patlama ile, bizim sorunları gidermek için çalıştı. Nükleer silahların yayılması ve nükleer silahların her şeyden önce-zemin test yasağı anlaşması uluslararası anlaşma bizim ortak değerler hakkında konuşmak ve ortak mantıklı hedeflere ulaşmak olabilir kanıtıydı. Sonunda, Berlin Duvarı ve Soğuk Savaş'ın başlıca rakipleri arasındaki ilişkilerin çözülme düşüş ile, biz nükleer silahların küresel stoklarını azaltmayı amaçlayan ilk ciddi çaba başladı.</p>
			
			<p>Ama o zamandan beri biz nükleer silah ve bu iş devam etmek için son çabaları ücretsiz bir dünya için bizim şevk kaybetmiş gibi görünüyor kadar gerçek ilerleme değil. Cansız görüşmelerin dört yıl sonra, hatta işlerin mevcut durumunu korumak için mümkün olmamıştır: uluslararası nükleer anlaşmalar hile ya da göz ardı edilmiştir, yaşlanma küresel stokları kötüye gidiyor ve yeni nükleer silah araştırma devam ediyor.</p>
			
			<p><strong>Caydırıcılık politikası açıkça başarısız oldu.</strong> Bizim utanç için, belirsiz vaatler ve boş söylemleri yerini almıştır.</p>
			
			<p>Ne yazık ki, nükleer silah bizim tek endişe değildir. Şimdi nükleer santral de siz değerli Dünya için ciddi bir tehdit teşkil ettiğini biliyoruz. Biz sadece nükleer santraller 100% güvenli yapılamaz farkına uyanmaya başlıyor.</p>
			
			<p>Nükleer mühendisleri her türlü kötü senaryoya hazırlıklı çünkü Fukushima de felaket olmuş asla: onlar ekipman her parça için yerinde güvenlik kuralları vardı, her olası durum için çalışma prosedürleri ve, zaman zaman yanlış şeyler için acil durum planları durumda birden fazla otomatik dengeleme mekanizmaları yedek ekipman işe yaramadı. Sektörün en iyi mühendisleri tüm öncelikli olarak güvenlik ile özenle ve bilinçli çalışıyorlardı. Ancak hala korkunç bir şey oldu. Ve unutmayın, bu, daha önceki hatalardan ders için yeterli zaman ile, 25 yıl Çernobil sonra meydana geldi.</p>
			
			<p>Bu gün ben nükleer enerji şirketleri bana söylemeniz çok zor bir zaman hemen hemen her şey inanmak var. Alternatiflere göre daha ucuz?Alternatif daha temiz? Alternatifler daha güvenli? Hayır. Hayır. Hayir.</p>
			
			<p><strong>Bütün bunlar sadece su kaynatmak için?</strong></p>
	
			<p>Burada basit bir gerçektir: nükleer santraller tarafından üretilen elektrik ile ilgili özel bir şey yok. Petrol, kömür, gaz ve nükleer tüm elektrik üretmek için aynı mekanik kullanın. Çok basit:</p>
			
			<ol>
				<li>Bir ısı kaynağı kaynar su.</li>
				<li>Kaynar sudan buhar türbin kanatları dönmeye zorlar.</li>
				<li>Iplik türbin bağlı indüksiyon bobinleri elektrik oluşturduğunuzda bir manyetik alan ile döndürülebilir.</li>
			</ol>
			
			<p>Elektrik üreten sadece temel fizik ve mühendislik. Peki neden bölme atomların kaynar su sorun gitmek? Neden kurtulmak asla tehlikeli nükleer atık oluşturmak? Neden zehirli atık toprakları oluşturur uranyum madenciliği ve işleme ile çevre yağma? Ve neden nükleer enerji şirketleri gelişmekte olan ülkelere bu tehlikeli teknolojiyi ihraç edilmektedir?</p>
			
			<p>Yani burada talebidir. <strong>Eğer bu basit gerçekler hakkında konuşmak için bana yardımcı olabilir misiniz?</strong> Sana bir organizasyon katılmak için ya da para bağış isteyen değilim, sadece nükleer fisyon olmadığı bir dünya lehine konuşacak cesur kişilerin listesine adınızı eklemek için.</p>
			
			<p>Bu bir fark yaratacak umuyoruz.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>