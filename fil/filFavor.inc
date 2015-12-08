<?php
//=============================================================================
//
// File:         /i18n/filFavor.inc
//
// Language:     PHP
//
// Contents:     fil = Filipino
//
// Author:       Joe Honton © 2013
//
// Initial date: October 5, 2013
//
//=============================================================================

require_once( __DIR__ . '/filBasePage.inc' );


//-------------------------------------
class filFavor extends filBasePage
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
		return "Mayroon akong isang kahilingan";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Maaari kang makatulong sa pamamagitan ng pagsasalita na may tapang tungkol sa mga panganib ng nukleyar fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukleyar pasilidad, nukleyar power, nukleyar enerhiya, nukleyar armas, fission, Daigdig, tubig na kumukulo, koryente";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "aming magagandang asul na marmol!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mataimtim nangangako ang";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Isumpa ang "wala nang fission" panunumpa ngayon!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Maaari kang makatulong sa pamamagitan ng pagsasalita na may tapang</h1>
			
			<p>Kumusta,</p>
			
			<p>Mayroon akong isang kahilingan. <strong>Ba ninyo akong tulungan sa aking pakikipagsapalaran upang gawin ang isang mundo na walang nukleyar fission?</strong></p>
			
			<p>Pinahihintulutan sa akin upang ipaliwanag kung bakit sa tingin ko kaya't madiin tungkol sa ito.</p>
	
			<p>Kapag ako ay lumalaking up, puwang paggalugad ay sa taas ng kanyang ganap na kaluwalhatian. Ang kaguluhan na sinamahan ang pakikipagsapalaran ay tila na ibabahagi sa pamamagitan ng lahat. Ang pangingilig sa tuwa na sinamahan bawat bagong milestone, magpasabik aming mga appetites para sa higit pa. At ang pag-asa na kami talaga ay pagpunta sa ilagay ang isang tao sa ang buwan at bumalik siya ligtas sa Daigdig, itinatago sa amin nakatuon sa kahit na menor de edad ang mga pagtatagumpay at pagkabigo ng programa.</p>
			
			<p>Bago ang pag-abot sa tunay na layunin, mayroong maraming mahalagang mga nakamit. Isa sa mga pinaka-exhilarating ng mga noon ay kapag ang mga astronaut sinira ang libreng mula sa Daigdig orbit. Para sa unang pagkakataon, mga kawani na tao ay hindi umaalis sa kaligtasan ng kanilang mga tahanan planeta. Kami ay naghahanap ng tulad ng pangingilig sa tuwa sa mga pakikipagsapalaran ng isang habambuhay.</p>
			
			<p>At pagkatapos ay ang pinaka-kahanga-hangang bagay ang nangyari. Ang astronaut ay tumingin pabalik sa pag-urong Daigdig, at nakita sa unang pagkakataon ang mga asul na marmol na noon ay ang aming bahay, at halos sila ay nalulula ka sa mga mahalagang mga kagandahan ng kung ano ang kanilang tingnan. Ang mga larawan na sila ay nagpadala ng likod ay namamahagi sa mundo, at kami ay masyadong hanga.</p>
			
			<p>Ang kahinaan nakunan sa mga litrato na ginawa sa amin may malay-tao ng ating sarili sa isang paraan na transcended lahat pampulitika allegiances. Para sa maikling sandali sa oras, namin nakalimutan ang tungkol sa Malamig Digmaang, kami magtabi ang aming mga pagkakaiba, at hindi na namin marveled sa beauty ng Daigdig. Mula sa bagong malay namin alam lamang kung paano babasagin ang aming lugar sa uniberso noon, at kung paano napaka napakalapit namin sa pagsira sa tahanan lamang ay namin kailanman may.</p>
			
			<p>Kami awakened na may pakiramdam ng pangangailangan ng madaliang pagkilos upang ayusin ang aming mga pagkukulang. Sa pamamagitan ng isang pagsabog ng mga aktibidad, kami ay nagtrabaho upang ayusin ang aming mga problema. Ang mga internasyonal na kasunduan sa nukleyar armas paglaganap, at ang kasunduan upang pagbawalan ang lahat ng sa itaas-lupa sa pagsubok ng mga nukleyar armas ay patunay na maaari naming makipag-usap tungkol sa aming mga ibinahaging mga halaga at makamit ang karaniwang mga makabuluhang mga layunin. Sa paglaon, sa pagkahulog ng Berlin Pader, at ang lasaw ng mga relasyon sa pagitan ng mga punong-guro rivals ng Malamig Digmaang, sinimulan namin ang unang seryosong pagsisikap naglalayong pagbabawas ng pandaigdigang tipon ng nukleyar armas.</p>
			
			<p>Pero simula noong panahon na iyon ay tila namin upang nawalan aming pagkainit para sa isang libreng mundo mula sa nukleyar armas, at kamakailang mga pagsisikap upang magpatuloy na trabaho na hindi ginawa magkano ang tunay na pag-unlad. Pagkatapos ng apat na mga dekada ng walang kinang-uusap, hindi pa namin kahit na nagawang upang mapanatili ang kasalukuyang estado ng affairs: ang internasyonal na nukleyar treaties ay winalang-bahala; pag-iipon ang mga suplay ay bumabagsak na bukod; at bagong nukleyar armas pananaliksik ay patuloy.</p>
			
			<p><strong>Ang patakaran ng pagpapaudlot ay malinaw na nabigo.</strong> Upang ang aming kahihiyan, ito ay pinalitan sa pamamagitan ng mga pangako malabo at walang laman sayusay.</p>
			
			<p>Ano ang mas masahol pa, nukleyar armas ay hindi lamang ang aming pag-aalala. Kami ngayon malaman na nukleyar halaman kapangyarihan din magpose ng seryosong banta sa aming mga mahalagang Daigdig. Lamang kami ng mga nagsisimula upang gumulantang sa pagtanto na nukleyar power halaman ay hindi maaaring gawing 100% ligtas.</p>
			
			<p>Ang sakuna kalamidad sa Fukushima hindi kailanman dapat na nangyari dahil ang nukleyar mga inhinyero ay inihahanda para sa bawat posibleng pinakamasama-case na sitwasyon: sila ay nagkaroon panuntunan sa kaligtasan sa lugar para sa bawat piraso ng kagamitan; operating pamamaraan para sa bawat posibleng sitwasyon; kawalang-tiyak ng anumang mangyayari mga plano para sa kapag ang mga bagay kapag mali; at maramihang mga awtomatikong mekanismo compensating sakaling ang reserba equipment hindi gumana. Ang lahat ng mga pinakamahusay na mga inhinyero ang industriya ay nagtatrabaho masigasig at conscientiously sa kaligtasan bilang kanilang pangunahing priyoridad. Ngunit pa rin ng isang bagay na kakila-kilabot ang nangyari. At tandaan, ito naganap 25 taon matapos Chernobyl, may sapat na oras upang matuto mula sa mga nakaraang pagkakamali.</p>
			
			<p>Mga araw na ito Mayroon akong isang napakahirap oras paniniwalang halos anumang bagay na ang mga nukleyar energy kumpanya sabihin sa akin. Mas mura kaysa sa mga kahalili? Mas malinis kaysa sa mga kahalili? Mas ligtas kaysa sa mga kahalili? Hindi. Hindi. Hindi.</p>
			
			<p><strong>Lahat ng ito lamang upang pakuluan ng tubig?</strong></p>
	
			<p>Narito ang simpleng katotohanan: walang mga espesyal na tungkol sa koryente na nabuo sa pamamagitan ng nukleyar halaman kapangyarihan. Langis, karbon, gas, at ang lahat ng mga nukleyar gamitin ang parehong mekanika para sa pagbuo ng koryente. Hindi ito kumplikado:</p>
			
			<ol>
				<li>Ang isang init pinagmulan nagiging sanhi ng tubig sa pigsa.</li>
				<li>Singaw mula sa pagkulo turbina pwersa tubig upang paikutin.</li>
				<li>Pagluluklok sa tungkulin likawin nakakabit sa turbina umiikot na lumikha ng koryente kapag pinaikot na sa pamamagitan ng isang may batubalani patlang.</li>
			</ol>
			
			<p>Bumubuo ng koryente lamang ang elementarya pisika at iinhinyero. Kaya bakit pumunta sa problema ng tubig na kumukulo sa pamamagitan ng paghahati ng atoms? Bakit lumikha ng mapanganib na nukleyar basura na hindi namin maaaring mapupuksa ang? Bakit makasira sa kapaligiran na may yureyniyum pagmimina at nagpapaikut-ikot na lumilikha ng basurang nakakalason-lupang? At bakit ang mga nukleyar power kumpanya-export ito mapanganib na teknolohiya sa pag-unlad bansa?</p>
			
			<p>Kaya dito ay ang kahilingan. <strong>Maaari mo ng tulong sa akin na makipag-usap tungkol sa mga simpleng mga katotohanan?</strong> Hindi ako humihiling sa iyo upang sumali sa isang organisasyon o upang mag-abuloy ng pera, ngunit lamang upang idagdag ang iyong pangalan sa listahan ng mga malakas ang loob mga indibidwal na ay nagsasalita sa pabor ng isang mundo na walang nukleyar fission.</p>
			
			<p>Umaasa ako na ito ay gumawa ng isang pagkakaiba.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>