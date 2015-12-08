<?php
//=============================================================================
//
// File:         /i18n/csFavor.inc
//
// Language:     PHP
//
// Contents:     cs = Čeština (Czech)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================

require_once( __DIR__ . '/csBasePage.inc' );


//-------------------------------------
class csFavor extends csBasePage
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
		return "Můžete pomoci tím, že mluví odvážně o nebezpečí jaderného štěpení.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "jaderných zařízení, jaderná energie, jaderná energie, jaderné zbraně, štěpení, Země, vroucí voda, elektřina";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "naše krásné modré mramor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Slavnostně Slibuji";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Přísahat "nic víc štěpení" přísahu teď!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Můžete pomoci tím, že mluví odvážně</h1>
			
			<p>Dobrý den,</p>
			
			<p>Mám prosbu. <strong>Pomůžete mi v cestě, aby se tento svět bez jaderného štěpení?</strong></p>
			
			<p>Dovolte mi vysvětlit, proč se cítím tak silně o tom.</p>
	
			<p>Když jsem vyrůstal, vesmírný průzkum byl na vrcholu své plné kráse. Vzrušení, které doprovází dobrodružství zdálo být sdíleny všemi. Vzrušení, které doprovází každý nový milník, povzbudit své chutě více. A očekávání, že opravdu šli dát člověka na Měsíc a vrátit ho bezpečně na zem, držel nás zabývá se i menších úspěchů a neúspěchů programu.</p>
			
			<p>Před dosažením tohoto konečného cíle, tam bylo mnoho významných úspěchů. Jeden z nejvíce vzrušujících z nich bylo, když astronauti vymanil z oběžné dráhy Země. Poprvé, lidé opouštěli bezpečí jejich domovské planety. Byli jsme jako vzrušení o azyl na dobrodružství na celý život.</p>
			
			<p>A pak nejpozoruhodnější věc. Astronauti se ohlédl na vzdalující se Zemi, a viděl poprvé modrý mramor, která byla naším domovem, a oni byli skoro ohromen drahých krásou toho, co spatřili. Na fotografické obrazy, které poslali zpět byly vysílány do světa, a my byli omráčený.</p>
			
			<p>Tato chyba zachycena v těchto fotografiích z nás uvědomuje sebe takovým způsobem, že překročil všechny politickou orientaci. Na krátkou chvíli v čase, jsme zapomněli o Studené Války, jsme zrušil naše rozdíly, a my jsme obdivovali krásu Země. Z tohoto nového vědomí, jsme věděli, jak křehká naše místo ve vesmíru byl, a jak nebezpečně blízko jsme byli k zničení jediný domov, který kdy budeme mít.</p>
			
			<p>Jsme probudil s pocitem naléhavosti opravit naše nedostatky. S návalu aktivity, pracovali jsme opravit naše problémy. Mezinárodní smlouvy o šíření jaderných zbraní, a dohody, aby zakázaly veškeré nadzemní testování jaderných zbraní byly důkazem toho, že bychom mohli mluvit o našich společných hodnot a dosažení společných cílů rozumné. Nakonec, s pádem Berlínská Zeď a rozmrazování vztahů mezi hlavními rivaly Studené Války, jsme začali první vážný pokus zaměřený na snížení globální zásoby jaderných zbraní.</p>
			
			<p>Ale od té doby se zdá, že ztratili svou horlivost pro svět bez jaderných zbraní, a nedávné snahy pokračovat v této práci, se nijak výrazně skutečný pokrok. Po čtyřech desetiletích nevýrazného rozhovorů, jsme ani schopni zachovat současný stav: mezinárodní jaderné smlouvy byly obcházeny nebo ignorovat, že stárnutí světové zásoby se zhoršuje a nové jaderné zbraně, výzkum pokračuje.</p>
			
			<p><strong>Politika odstrašení jednoznačně selhala.</strong> K naší hanbě, to bylo nahrazeno neurčitými sliby a prázdné rétoriky.</p>
			
			<p>Je smutné, že jaderné zbraně nejsou naším jediným zájmem. Nyní víme, že jaderné elektrárny, také představovat vážnou hrozbu pro naši Zemi vzácné. Jsme teprve začínají probouzet k poznání, že jaderné elektrárny nemůže být 100% bezpečný.</p>
			
			<p>Katastrofální katastrofa ve Fukušimě nikdy by se stalo, protože jaderné inženýři připraveni na každý možný nejhorší scénář: oni měli bezpečnostní pravidla na místě každý kus vybavení, provozní postupy pro každou možnou situaci, pohotovostní plány pro, když se něco, když špatně; a několik automatických kompenzační mechanismy v případě, že zařízení rezerva nefungoval. Vše z průmyslu nejlepších inženýrů pracovala pilně a svědomitě s bezpečností jako svou hlavní prioritu. A přece se stalo něco hrozného. A pamatujte, toto nastalo 25 let po Černobylu, s dostatkem času poučit se z minulých chyb.</p>
			
			<p>V těchto dnech mám velmi těžké uvěřit, že téměř vše, co jaderné energetické společnosti řekni mi. Levnější než jiné alternativy? Čistší než jiné alternativy? Bezpečnější než jiné alternativy? Ne. Ne. Ne.</p>
			
			<p><strong>To vše jen proto, aby vařit vodu?</strong></p>
	
			<p>Zde je jednoduchá pravda: není nic zvláštního elektřiny z jaderných elektráren. Ropa, uhlí, plyn, jaderná a všichni používají stejné mechaniky pro výrobu elektřiny. Je to jednoduché:</p>
			
			<ol>
				<li>Zdroj tepla se vaří voda.</li>
				<li>Pára z vroucí vody nutí lopatky turbíny točit.</li>
				<li>Indukční cívky připojené k otáčející turbína výrobě elektřiny při otáčení v magnetickém poli.</li>
			</ol>
			
			<p>Výrobu elektřiny je jen elementární fyzika a inženýrství. Tak proč jít na potíže s vařící vodou po rozbití atomů? Proč vytvářet nebezpečné jaderný odpad, který nikdy nemůžeme zbavit? Proč kazit prostředí s těžbou uranu a frézování, které vytváří toxické odpady přistane? A proč jsou jaderné elektrárny společností, které vyvážejí tuto nebezpečnou technologií do rozvojových zemí?</p>
			
			<p>Takže tady je požadavek. <strong>Pomůžeš mi mluvit o těchto jednoduchých faktů?</strong> Nežádám, abyste se připojili k organizaci nebo darovat peníze, ale jednoduše přidat své jméno do seznamu odvážných jedinců, kteří budou mluvit ve prospěchsvět bez jaderného štěpení.</p>
			
			<p>Doufám, že to bude rozdíl.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>