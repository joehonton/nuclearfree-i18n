<?php
//=============================================================================
//
// File:         /i18n/mtFavor.inc
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
class mtFavor extends mtBasePage
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
		return "I jkollhom talba";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Int tista 'tgħin billi jitkellem b'kuraġġ dwar il-perikli tal-fissjoni nukleari.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "faċilitajiet nukleari, l-enerġija nukleari, armi nukleari, fissjoni, Dinja, ilma jagħli, elettriku";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "irħam tagħna blu sabiħ!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Solennement wegħda";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Naħlef l-"mhux aktar fissjoni" ġurament issa!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Int tista 'tgħin billi jitkellem b'kuraġġ</h1>
			
			<p>Hello,</p>
			
			<p>Jien jkollhom talba. <strong>Gaat tgħin me fit-tfittxija tiegħi biex jagħmlu dan dinja mingħajr fissjoni nukleari?</strong></p>
			
			<p>Permess me tispjega għaliex jien jħossuhom hekk qawwi dwar dan.</p>		 
	
			<p>Meta jien kien qed jikbru, l-esplorazzjoni spazjali kien fl-għoli tal-glorja kollha tagħha. L-eċitament li akkumpanja l-avventura deher li għandha tinqasam bejn kulħadd. L-eċċitament li akkumpanja kull pass ġdid, iqabbduk tendenzi tagħna għal aktar. U l-antiċipazzjoni li aħna verament kienu ser jitqiegħdu raġel fuq il-qamar u lura lilu b'mod sikur għall-Dinja, żamm magħna involuti saħansitra bl-suċċessi u l-fallimenti minuri tal-proġett.</p>
			
			<p>Qabel jilħaq dik l-għan aħħari, kien hemm kisbiet importanti ħafna. Wieħed mill-aktar exhilarating minn dawn kienet meta l-astronawti kissru ħielsa minn orbita Dinja. Għall-ewwel darba, il-bnedmin kienu jħallu s-sigurtà tal-pjaneta-dar tagħhom. Konna bħal dawk li jfittxu eċċitament fuq l-avventura ta 'ħajja.</p>
			
			<p>U allura l-aktar ħaġa notevoli ġara. L-astronawti ħares lura fil-Dinja tonqos, u raw għall-ewwel darba l-irħam blu li kien dar tagħna, u kienu kważi megħlub mill-sbuħija prezzjuż ta 'dak li serrieq. L-istampi fotografiċi li huma mibgħuta lura kienu mxandra lill-dinja, u aħna wisq kienu étonné.</p>
			
			<p>Il-vulnerabbiltà maqbuda f'dawk ritratti għamel magħna konxji ta 'ruħna b'mod li transcended politika kollha. Għal mument qasir fil-ħin, aħna nesa dwar il-Gwerra Bierda, aħna mwarrba d-differenzi tagħna, u aħna marveled fil-sbuħija tad-Dinja. Minn dan sensi ġdid aħna kien jaf kemm fraġli post tagħna fl-univers kien, u kif perilously qrib konna jeqirdu l-dar biss għandna qatt se jkollhom.</p>
			
			<p>Aħna tkebbset b'sens ta 'urġenza li jiffissaw nuqqasijiet tagħna. Bil-tifqigħ ta 'attività, ħdimna biex jiffissaw il-problemi tagħna. It-trattat internazzjonali dwar proliferazzjoni ta 'armi nukleari, u l-ftehim li tipprojbixxi kull ittestjar fuq l-art ta' armi nukleari kienu prova li nistgħu nitkellmu dwar valuri komuni tagħna u jiksbu l-għanijiet sensibbli komuni. Eventwalment, bil-waqgħa tal-Ħajt ta 'Berlin, u l-tidwib tar-relazzjonijiet bejn l-rivali prinċipali tal-Gwerra Bierda, bdejna l-ewwel sforz serju immirati sabiex inaqqsu l-ħażniet globali ta' armi nukleari.</p>
			
			<p>Iżda peress li l-ħin we jidhru li tilfu fervur tagħna għal dinja ħielsa mill-armi nukleari, u l-isforzi reċenti biex tkompli dak ix-xogħol ma tantx għamlu progress. Wara erba 'snin ta taħdidiet dgħajfa, aħna lanqas biss kienu kapaċi jżommu l-qagħda attwali: it-trattati nukleari internazzjonali ġew evitati jew injorati; l-ħażniet globali li qed tixjieħ qegħdin jiddeterjoraw, u riċerka ġdida armi nukleari tkompli.</p>
			
			<p><strong>Il-politika ta 'dissważjoni naqset b'mod ċar.</strong> Biex mistħija tagħna, ġie sostitwit b'dan wegħdiet vagi u retorika vojta.</p>
			
			<p>Sfortunatament, armi nukleari mhumiex jikkonċernaw biss tagħna. Aħna issa jkunu jafu li l-impjanti nukleari wkoll joħolqu theddida serja għad-Dinja prezzjuż tagħna. Aħna qed jibdew li jgħarraf lill-realizzazzjoni li l-impjanti nukleari ma jistgħux isiru 100% sikur.</p>
			
			<p>Il-katastrofi fl Fukushima qatt ma kellha ġara minħabba li l-inġiniera nukleari kienu ppreparati għal kull agħar xenarju possibbli: dawn kellhom regoli ta 'sigurtà fis-seħħ għal kull biċċa ta' tagħmir; proċeduri operattivi għal kull sitwazzjoni li jista 'jkun; pjanijiet ta' kontinġenza għal meta l-affarijiet meta żbaljat; u mekkaniżmi multipli kumpens awtomatiku f'każ it-tagħmir ta 'riżerva ma ħadmux. Kollha ta 'inġiniera aħjar l-industrija kienu qed jaħdmu b'diliġenza, b'kuxjenza mas-sigurtà bħala l-priorità tagħhom. Għadhom xorta xi ħaġa terribbli li ġara. U ftakar, din seħħet 25 sena wara Chernobyl, bil biżżejjed żmien biex jitgħallmu mill-iżbalji ta 'qabel.</p>
			
			<p>Dawn il-ġranet jien jkollhom żmien iebsa ħafna jemmen kważi xejn li l-kumpaniji tal-enerġija nukleari tell miegħi. Aktar irħas minn l-alternattivi? Aktar nodfa minn l-alternattivi? Aktar sikuri minn l-alternattivi? Nru. Nru. Nru.</p>
			
			<p><strong>Kollha ta 'dan biss biex għalli l-ilma?</strong></p>
	
			<p>Hawn hu l-verità sempliċi: m'hemm xejn speċjali dwar l-elettriku ġġenerata mill-impjanti tal-enerġija nukleari. Żejt, faħam, gass, u nukleari kollha jużaw l-istess mekkaniżmi għall-ġenerazzjoni tal-elettriku. Huwa sempliċi:</p>
			
			<ol>
				<li>A sħana sors tagħli ilma.</li>
				<li>Fwar mill-ilma jagħli forzi xfafar tat-turbini li jduru.</li>
				<li>Bobini tal-induzzjoni mehmuża mal-turbina għażil joħolqu l-elettriku meta jiddawwar kamp manjetiku.</li>
			</ol>
			
			<p>Jiġġeneraw l-elettriku huwa biss fiżika elementali u l-inġinerija. Allura għaliex tmur għall-problemi ta 'ilma jagħli mill-atomi qsim? Għaliex joħolqu skart nukleari perikoluż li aħna qatt ma tista 'teħles minn? Għaliex jħassru l-ambjent mal-minjieri tal-uranju u tat-tħin li toħloq tossiċi mormi artijiet? U għaliex huma kumpaniji tal-enerġija nukleari jesportaw din it-teknoloġija perikoluż li pajjiżi li qed jiżviluppaw?</p>
			
			<p>Allura hawnhekk huwa t-talba. <strong>Tista 'tgħin lili biex jitkellmu dwar dawn il-fatti sempliċi?</strong> Jien am not titlob inti biex jingħaqdu organizzazzjoni jew għal donazzjonijiet ta' flus, iżda li sempliċement jiżdiedu l-isem tiegħek mal-lista ta 'individwi kuraġġużi li se jitkellem favur dinja mingħajr fissjoni nukleari.</p>
			
			<p>Nispera li dan se jagħmel differenza.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>