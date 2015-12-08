<?php
//=============================================================================
//
// File:         /i18n/slFavor.inc
//
// Language:     PHP
//
// Contents:     sl = Slovenščina (Slovene)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/slBasePage.inc' );


//-------------------------------------
class slFavor extends slBasePage
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
		return "Imam prošnjo";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Pomagate lahko tako pogumno govoril o nevarnostih jedrske fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jedrskih objektov, jedrska energija, jedrska orožja, fisije, Zemlja, vrela voda, elektrika";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "naša lepa modra marmor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "svečano obljubim";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisežem, da "ni več fisije" prisego zdaj!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Pomagate lahko govorimo pogumno</h1>
			
			<p>Pozdravi,</p>
			
			<p>Imam prošnjo. <strong>Mi boste pomagali pri mojem prizadevanju, da bi ta svet brez jedrske fisije?</strong></p>
			
			<p>Dovolite mi, da pojasni, zakaj sem tako močno o tem.</p>
	
			<p>Ko sem odraščal, je bilo raziskovanje vesolja v višini vsem sijaju. Navdušenje, ki je spremljala avanturo je zdelo, da je treba deliti z vsemi.Vznemirjenje, ki spremljajo vsak nov mejnik, brusiti svoje apetite po več. In predvidevanje, da smo res bili, da bo dal človeka na Luno in ga varno vrnili na Zemljo, hrani nas, ki se ukvarjajo s celo manj uspehov in neuspehov projekta.</p>
			
			<p>Preden doseže to končni cilj, je bilo veliko pomembnih dosežkov. Ena izmed najbolj razburljivih od teh je bilo, ko so astronavti osvobodil iz Zemljino orbito. Prvič, ljudje so odhajali varnost njihovega domačega planeta. Smo bili kot vznemirjenje za azil na avanturo svojega življenja.</p>
			
			<p>In potem je najbolj izrazit je zgodilo. Astronavti pogledal nazaj na umaknjenim Zemljo in videl prvič modrega marmorja, da je bil naš dom, zato so skoraj preobremenjeni s plemenito lepoto, kaj so zagledali. Fotografske podobe, ki so poslani nazaj, so bile predvajane na svetu, in smo bili tudi poln strahu.</p>
			
			<p>Ranljivost ujeli v teh fotografijah so nas zaveda samega sebe na način, ki prekoračil vse politike. Za trenutek v času, smo pozabili na čas hladne vojne, smo v prahi naše razlike, mi pa čudili lepoti Zemlje. Iz te nove zavesti, smo vedeli, kako krhek je naš kraj v vesolju, in kako zelo blizu smo bili, da uničuje samo doma, da bomo kdaj imeli.</p>
			
			<p>Mi zbudila z občutkom nujnosti, da se določi naše pomanjkljivosti. Ob izbruhu dejavnosti, smo delali popraviti naše probleme. Mednarodna pogodba o širjenju jedrskega orožja, ter sporazum o prepovedi vseh nadzemno testiranje jedrskega orožja, so dokaz, da lahko govorimo o naših skupnih vrednot in doseganju skupnih ciljev smiselna. Sčasoma je s padcem Berlinskega Zidu, in odtajanju odnosov med glavnimi tekmeci iz Hladne Vojne, smo začeli prvo resno prizadevanje, katerega cilj je zmanjšati svetovno zalogo jedrskega orožja.</p>
			
			<p>Ampak od takrat zdi, da smo izgubili našo gorečnost za svet brez jedrskega orožja, in nedavna prizadevanja za nadaljevanje tega dela niso vložili toliko resničen napredek. Po štirih desetletjih zelo nizke pogovorih nismo bili niti sposobni ohraniti sedanje stanje: mednarodni jedrske pogodbe so bili obiti ali prezrta, je staranje svetovne zaloge, ki se slabša in nove raziskave jedrskega orožja se nadaljuje.</p>
			
			<p><strong>Je politika odvračanja očitno ni uspelo.</strong> Za našo sramoto, je bilo nadomesti z nejasnimi obljubami in prazna retorika.</p>
			
			<p>Na žalost, jedrsko orožje ni naša edina skrb. Zdaj vemo, da jedrske elektrarne tako predstavljajo resno grožnjo za našo dragoceno Zemljo. Mi smo šele začeli prebujati do spoznanja, da jedrske elektrarne ne more biti 100% varno.</p>
			
			<p>Katastrofa v Fukušimi bi nikoli zgodilo, ker so jedrski inženirji pripravili za vse možne najslabšem primeru: imela varnostna pravila, ki veljajo za vsak kos opreme, operativni postopki za vse možne situacije; načrti za primer, ko se stvari narobe, in avtomatska kompenzacijski mehanizmi v primeru, oprema rezerva ni delovala. Vse najboljših inženirjev v industriji so pridno in vestno delo z varnostjo kot svojo prednostno nalogo. Še vedno je zgodilo nekaj strašnega. In zapomni si, se je to zgodilo 25 let po Černobilu, z dovolj časa, da se učijo iz preteklih napak.</p>
			
			<p>Te dni imam zelo težko verjame, skoraj nič, da družbe za jedrsko energijo mi pove. Cenejši od alternativ? Čistejši kot alternative? Varnejši od alternativ? Ne. Ne. Ne.</p>
			
			<p><strong>Vse to samo zavreti vodo?</strong></p>
	
			<p>Tukaj je preprosta resnica: ni nič posebnega na električno energijo iz jedrskih elektrarn. Nafta, premog, plin, jedrska vse uporabljajo iste mehaniko za proizvodnjo električne energije. To je preprosta:</p>
			
			<ol>
				<li>Vir toplote zavre voda.</li>
				<li>Pare iz vrele vode prisili lopatic turbin vrteti.</li>
				<li>Indukcijske tuljave, povezane z predenje turbine proizvajajo elektriko, ko zavrti magnetnem polju.</li>
			</ol>
			
			<p>Proizvodnjo električne energije je le elementarno fiziko in inženiring. Torej, zakaj iti v težavah vrele vode z razdelitvijo atomov? Zakaj ustvarjati nevarne jedrske odpadke, ki jih nikoli ne moremo znebiti? Zakaj pokvariti okolja s pridobivanjem urana in predelave, ki ustvarja strupenih odpadkov-zemljišča? In zakaj so podjetja jedrskih elektrarn izvozniki te nevarne tehnologije v države v razvoju?</p>
			
			<p>Torej, tukaj je zaprosilo. <strong>Mi lahko pomagate govoriti o teh preprostih dejstev?</strong> Ne bom vas prosi, da se pridružijo organizaciji ali darovali denar, ampak preprosto dodate svoje ime na seznam pogumnih posameznikov, ki govorijo v pridsvet brez jedrske fisije.</p>
			
			<p>Upam, da bo razlika.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>