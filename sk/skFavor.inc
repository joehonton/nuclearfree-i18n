<?php
//=============================================================================
//
// File:         /i18n/skFavor.inc
//
// Language:     PHP
//
// Contents:     sk = Slovenčina (Slovak)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/skBasePage.inc' );


//-------------------------------------
class skFavor extends skBasePage
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
		return "Mám prosbu";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Môžete pomôcť tým, že hovorí odvážne o nebezpečenstve jadrového štiepenie.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jadrových zariadení, jadrová energia, jadrové zbrane, štiepenie, Zem, vriaca voda, elektrina";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "naše krásne modré mramor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Slávnostne sľubujem";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisahať "nič viac štiepenie" prísahu teraz!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Môžete pomôcť tým, že hovorí odvážne</h1>
			
			<p>Dobrý deň,</p>
			
			<p>Mám prosbu. <strong>Pomôžete mi v ceste, aby sa tento svet bez jadrového štiepenie?</strong></p>
			
			<p>Dovoľte mi vysvetliť, prečo sa cítim tak silno o tom.</p>
	
			<p>Keď som vyrastal, vesmírny prieskum bol na vrchole svojej plnej kráse. Vzrušenie, ktoré sprevádza dobrodružstvo zdalo byť zdieľané všetkými. Vzrušenie, ktoré sprevádza každý nový míľnik, povzbudiť svoje chute viac. A očakávania, že naozaj šli dať človeka na Mesiac a vrátiť ho bezpečne na zem, držal nás zaoberá sa aj menších úspechov a neúspechov projektu.</p>
			
			<p>Pred dosiahnutím tohto konečného cieľa, tam bolo veľa významných úspechov. Jeden z najviac vzrušujúcich z nich bolo, keď astronauti vymanil z obežnej dráhy Zeme. Prvýkrát, ľudia opúšťali bezpečie ich domovskej planéty. Boli sme ako vzrušenie o azyl na dobrodružstvo na celý život.</p>
			
			<p>A potom najpozoruhodnejšie vec. Astronauti sa obzrel na vzďaľujúce sa Zem, a videl prvýkrát modrý mramor, ktorá bola naším domovom, a oni boli skoro ohromený drahých krásou toho, čo uvideli. Na fotografické obrazy, ktoré poslali späť boli vysielané do sveta, a my boli omráčený.</p>
			
			<p>Táto chyba zachytená v týchto fotografiách z nás uvedomuje seba takým spôsobom, že prekročil všetky politiky. Na krátku chvíľu v čase, sme zabudli o studenej vojne, sme zrušil naše rozdiely, a my sme obdivovali krásu Zeme. Z tohto nového vedomia, sme vedeli, ako krehká naše miesto vo vesmíre bol, a ako nebezpečne blízko sme boli k zničeniu jediný domov, ktorý kedy budeme mať.</p>
			
			<p>Sme prebudil s pocitom naliehavosti opraviť naše nedostatky. S návale aktivity, pracovali sme opraviť naše problémy. Medzinárodnej zmluvy o šírení jadrových zbraní, a dohody, aby zakázali všetky nadzemné testovanie jadrových zbraní boli dôkazom toho, že by sme mohli hovoriť o našich spoločných hodnôt a dosiahnutie spoločných cieľov rozumné. Nakoniec, s pádom Berlínskeho múru a rozmrazovanie vzťahov medzi hlavnými rivalmi studenej vojny, sme začali prvý vážny pokus zameraný na zníženie globálnej zásoby jadrových zbraní.</p>
			
			<p>Ale od tej doby sa zdá, že stratili svoju horlivosť pre svet bez jadrových zbraní, a nedávne snahy pokračovať v tejto práci, sa nijako výrazne skutočný pokrok. Po štyroch desaťročiach nevýrazného rozhovorov, sme ani schopní zachovať súčasný stav: medzinárodný jadrovej zmluvy boli obchádzané alebo ignorovať, že starnutie svetové zásoby sa zhoršuje a nové jadrové zbrane, výskum pokračuje.</p>
			
			<p><strong>Politika odstrašenie jednoznačne zlyhala.</strong> K našej hanbe, to bolo nahradené neurčitými sľuby a prázdne rétoriky.</p>
			
			<p>Je smutné, že jadrové zbrane nie sú naším jediným záujmom. Teraz vieme, že jadrové elektrárne, tiež predstavovať vážnu hrozbu pre našu Zem vzácne. Sme ešte len začínajú prebúdzať k poznaniu, že jadrové elektrárne nemôže byť 100% bezpečný.</p>
			
			<p>Katastrofa vo Fukušime nikdy by sa stalo, pretože jadrové inžinieri pripravení na každý možný najhorší scenár: oni mali bezpečnostné pravidlá na mieste každý kus vybavenie, prevádzkové postupy pre každú možnú situáciu, pohotovostné plány pre, keď sa niečo, keď zle, a viac automatické kompenzačné mechanizmy v prípade, že zariadenie rezerva nefungoval. Všetko z priemyslu najlepších inžinierov pracovala usilovne a svedomito s bezpečnosťou ako svoju hlavnú prioritu. A predsa sa stalo niečo hrozné. A pamätajte, toto nastalo 25 rokov po Černobyle, s dostatkom času poučiť sa z minulých chýb.</p>
			
			<p>V týchto dňoch mám veľmi ťažké uveriť, že takmer všetko, čo jadrové energetické spoločnosti povedz mi. Lacnejšie ako iné alternatívy? Čistejšie než iné alternatívy? Bezpečnejšie ako iné alternatívy? Ne. Ne. Ne.</p>
			
			<p><strong>To všetko len preto, aby variť vodu?</strong></p>
	
			<p>Tu je jednoduchá pravda: nie je nič zvláštneho elektriny z jadrových elektrární. Ropa, uhlie, plyn, jadrová a všetci používajú rovnaké mechaniky pre výrobu elektriny. Je to jednoduché:</p>
			
			<ol>
				<li>Zdroj tepla sa varí voda.</li>
				<li>Para z vriacej vody núti lopatky turbíny točiť.</li>
				<li>Indukčné cievky pripojenej k otáčajúcej turbína výrobe elektriny pri otáčaní v magnetickom poli.</li>
			</ol>
			
			<p>Výrobu elektriny je len elementárne fyzika a inžinierstva. Tak prečo ísť na ťažkosti s vriacou vodou po rozbití atómov? Prečo vytvárať nebezpečné jadrový odpad, ktorý nikdy nemôžeme zbaviť? Prečo kaziť prostredie s ťažbou uránu a frézovanie, ktoré vytvára toxické odpady pristane? A prečo sú jadrové elektrárne spoločností, ktoré vyvážajú túto nebezpečnú technológií do rozvojových krajín?</p>
			
			<p>Takže tu je požiadavka. <strong>Pomôžeš mi hovoriť o týchto jednoduchých faktov?</strong> Nežiadam, aby ste sa pripojili k organizácii alebo darovať peniaze, ale jednoducho pridať svoje meno do zoznamu odvážnych jedincov, ktorí budú hovoriť v prospech svet bez jadrového štiepenie.</p>
			
			<p>Dúfam, že to bude rozdiel.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>