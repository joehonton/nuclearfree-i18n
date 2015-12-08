<?php
//=============================================================================
//
// File:         /i18n/etFavor.inc
//
// Language:     PHP
//
// Contents:     et = Eesti (Estonian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/etBasePage.inc' );


//-------------------------------------
class etFavor extends etBasePage
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
		return "Mul on palve";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ka sina saad aidata rääkides vapralt ohtudest tuumalõhustumise.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "tuumarajatisi, tuumaenergia, tuumarelvade, lõhustumine, Maa, keev vesi, elekter";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "Meie ilus sinine marmor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Pidulikult Luban";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Vannu "enam lõhustumise" vande nüüd!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Ka sina saad aidata rääkides vapralt</h1>
			
			<p>Tere,</p>
			
			<p>Mul on palve. <strong>Kas sa aitad mind minu püüdlustes muuta see maailm ilma tuumalõhustumise?</strong></p>
			
			<p>Lubage mul selgitada, miks ma tunnen nii tugevalt selle kohta.</p>
	
			<p>Kui olin kasvab, kosmoselaevade oli haripunktis täies hiilguses.Põnevust, et kaasas seiklus tundus jagada kõigile.Põnevus, et lisada iga uue verstaposti, ihuma oma isu rohkem. Ja ootuses, et me tõesti ei kavatse panna inimese Kuule ja tagasi teda turvaliselt Maale hoidnud meid hõivatud isegi alaealise edusammude ja ebaõnnestumiste programmi.</p>
			
			<p>Enne jõudmist et lõppeesmärk oli palju tähtsamaid saavutusi. Üks kõige virgutav neist oli, kui astronaudid murdis vabaks Maa orbiidil. Esimest korda, inimesed olid lahkumas ohutust oma koduplaneedi. Me olime nagu põnevus taotlejad on seiklus eluiga.</p>
			
			<p>Ja siis kõige tähelepanuväärne asi juhtus. Astronaudid heitis tagasi taandumas Maa ja nägi esmakordselt sinine marmor, mis oli meie kodu, ja nad olid peaaegu rabatud vääris ilu, mida nad nägid. Fotode, et nad saadetakse tagasi kanti maailmas ja ka meil olid täis aukartust.</p>
			
			<p>Haavatavus püütud need fotod tegi meid teadlikuks iseendast nii, et ületanud kõik poliitilised vaadete. Hetkeks ajas, me unustasime Külma Sõja, me kõrvale oma erimeelsused ning me imetlenud ilu Maa. Alates selle uue teadvuse me teadsime, kui habras on meie koht universumis oli ja kuidas ohtlikult lähedal olime hävitades ainult kodus me kunagi.</p>
			
			<p>Oleme ärganud kiireloomulisuse määrata meie puudused. Mis plahvatuse tegevus, tegime kindlaks meie probleeme.Rahvusvaheline leping tuumarelva leviku tõkestamise ja kokkulepe keelata kogu maapealne testimine tuumarelvade oli tõend, et me võiksime rääkida meie ühiseid väärtusi ja saavutada ühine mõistlik eesmärke. Lõpuks koos sügisel Berliini Müüri ja sulatamist suhete peamine rivaalid Külma Sõja, hakkasime esimest tõsiseid jõupingutusi, mille eesmärk on vähendada ülemaailmset varude tuumarelvi.</p>
			
			<p>Aga sellest ajast alates me tundub, et on kaotanud oma innukuse eest maailma vabaks tuumarelvi, ja hiljutisi jõupingutusi jätkata, et töö ei ole tehtud palju tegelikke edusamme. Pärast nelja aastakümmet läiketa räägib, et me ei ole isegi suutnud säilitada praegune olukord: rahvusvahelise tuumarelva lepingud on kõrvale hoitud või ignoreeritakse; vananemine maailma varude seisukord halveneb, ja uut tüüpi tuumarelvi jätkub uurimistöö.</p>
			
			<p><strong>Poliitika tõkestamiseks on selgelt ebaõnnestunud.</strong> Kui meie häbi, see on asendatud ebamääraseid lubadusi ja tühi retoorika.</p>
			
			<p>Kahjuks tuumarelvi ei meie ainus mure. Me teame nüüd, et tuumaelektrijaamade ka tõsiseks ohuks meie kallis maa. Me oleme just hakanud ärkama teadmine, et tuumajaamad ei saa 100% ohutu.</p>
			
			<p>Katastroofiline õnnetus Fukushima kunagi oleks pidanud juhtuma, sest tuumaenergia inseneride oli valmis iga võimaliku halvima stsenaariumi: nad ohutuseeskirjade paika iga seade; töökord iga võimalikku olukorda; situatsiooniplaanid kui asjad kui vale; ja mitu automaatset kompensatsioonimehhanismid, mis juhul, kui reservi seadmed ei tööta. Kõik tööstuse parimad insenerid töötasid usinalt ja kohusetundlikult ohutus nende prioriteet. Kuid ikka midagi hirmsat juhtunud. Ja pidage meeles, see toimus 25 aastat pärast Tšernobõli rohkelt aega, et õppida varasematest vigadest.</p>
			
			<p>Nendel päevadel on mul väga raske uskuda peaaegu midagi, et tuumaenergia ettevõtted mulle. Odavam kui alternatiivid? Puhtam kui alternatiivid? Ohutum kui alternatiivid? Ei. Ei. Ei.</p>
			
			<p><strong>Kõik see lihtsalt vett keeta?</strong></p>
	
			<p>Siin on lihtne tõde: ei midagi erilist elektrienergia tuumaelektrijaamades. Nafta-, söe-, gaasi-, tuuma kõik kasutavad sama mehaanika elektrienergia. See on lihtne:</p>
			
			<ol>
				<li>Soojusallika keeb vesi.</li>
				<li>Auru alates keeva veega sunnib turbiinide labad pöörlema​​.</li>
				<li>Induktsioonimähiste lisatud spinning turbiini luua elektri kui pööratakse magnetväli.</li>
			</ol>
			
			<p>Elektrienergia on lihtsalt elementaarne füüsika ja tehnoloogia. Nii et miks minna vaeva keeva veega jagades aatomite? Miks tekitada ohtlikke tuumajäätmeid me ei saa kunagi vabaneda? Miks rikkuda keskkonda uraani kaevandamise ja rikastamise, mis tekitab mürgiseid jäätmeid maad? Ja miks on tuumaenergia eksportivad ettevõtted seda ohtlikku tehnoloogiat arengumaades?</p>
			
			<p>Nii et siin on taotluse. <strong>Saad sa mind aidata, et rääkida neid lihtsaid fakte?</strong> Ma ei palu teil liituda organisatsiooni või annetada raha, vaid lihtsalt lisada oma nimi nimekirja julge inimesed, kes räägivadmaailm ilma tuuma lõhustumise.</p>
			
			<p>Loodan, et see teeb vahe.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>