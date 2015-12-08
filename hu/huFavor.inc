<?php
//=============================================================================
//
// File:         /i18n/huFavor.inc
//
// Language:     PHP
//
// Contents:     hu = Magyar (Hungarian)
//
// Author:       Joe Honton © 2013
//
// Initial date: Octiber 12, 2013
//
//=============================================================================

require_once( __DIR__ . '/huBasePage.inc' );


//-------------------------------------
class huFavor extends huBasePage
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
		return "Lenne egy kérésem";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Segíts te is beszél merészen a veszélyeiről atommaghasadásra.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukleáris létesítmények, a nukleáris energia, a nukleáris energia, a nukleáris fegyverek, atommaghasadásra, Föld, forró víz, villany";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "a gyönyörű kék ​​márvány!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()		 
	{
		return "ünnepélyesen megígérem";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Esküszöm, a "nincs több hasadási" eskü most!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Segíts te is, a beszéd merészen</h1>
			
			<p>Szia!</p>
			
			<p>Lenne egy kérésem. <strong>Segít nekem az én quest, hogy ez egy olyan világban, anélkül, hogy atommaghasadásra?</strong></p>
			
			<p>Engedjék meg, hogy miért érzem olyan erősen erről.</p>
	
			<p>Amikor gyerek voltam, űrkutatás volt a magassága a teljes pompájában. Az izgalom, hogy kísért a kaland úgy tűnt, hogy osztozik mindenki. Az izgalom, hogy együtt minden új mérföldkő, fen az étvágyunk tovább. És a várakozás, hogy tényleg megyünk, hogy egy embert a Holdra, és visszatér vele biztonságosan a Földre, tartott minket foglalkozik még a kis sikerek és kudarcok a projekt.</p>
			
			<p>Mielőtt elérte, hogy a végső cél, nem volt sok fontos eredményeket. Az egyik legizgalmasabb ezek közül, amikor az űrhajósok kiszabadult Föld körüli pályán. Ez az első alkalom, az emberek elhagyták a biztonságát a bolygót. Olyanok voltunk, mint izgalmat keresők a kalandot egy életre.</p>
			
			<p>És akkor a leginkább figyelemre méltó dolog történt. Az űrhajósok hátranézett a távolodó Földet, és látta, hogy az első alkalommal a kék márvány volt az otthonunk, és ők majdnem túlterheltek a drága szépsége, amit láttam. A fényképeket, hogy visszaküldték közvetítették a világ, és mi is volt megdöbbent.</p>
			
			<p>A sérülékenységet elfoglalták azokat a képeket tudatosította bennünk, magunkat oly módon, hogy túllépett a politikai szövetségeket. Egy rövid pillanatban elfelejtettük a hidegháború, akkor félre a különbségeket, és elcsodálkozott a szépség a Föld. Ebből az új tudatosság tudtuk, hogy mennyire törékeny a helyünk az univerzumban, és milyen veszélyesen közel voltunk, hogy megsemmisítik az egyetlen otthonunk lesz valaha is.</p>
			
			<p>Mi felébredt sürgősen rögzíteni a hiányosságokat. A tört tevékenység, dolgoztunk kijavítani a problémákat. A nemzetközi szerződés a nukleáris fegyverek elterjedése, és a megállapodás a tilalom minden föld feletti vizsgálata a nukleáris fegyverek is bizonyítja, hogy tudnánk beszélni a közös értékek és a közös értelmes célokat. Végül, és leomlott a berlini fal, és a felolvasztás közötti kapcsolatok fő riválisok a hidegháború, megkezdtük az első komoly erőfeszítéseket, amelyek célja, hogy csökkentsék a globális készletek a nukleáris fegyverek.</p>
			
			<p>De mivel abban az időben úgy tűnik, elvesztette a buzgalom mentes világ a nukleáris fegyverek, és a közelmúltban tett erőfeszítések továbbra is, hogy a munka még nem tett nagy valódi előrelépés. Négy évtizedes fakó tárgyalások, még nem is tudták, hogy a jelenlegi helyzet: a nemzetközi nukleáris egyezmények rendelkezéseit kijátszották vagy figyelmen kívül hagyja, az öregedés globális készletek romlik, és az új nukleáris fegyverek kutatás folytatódik.</p>
			
			<p><strong>Politikája az elrettentés egyértelműen kudarcot vallott.</strong> A szégyen, azt váltotta homályos ígéretek és az üres retorika.</p>
			
			<p>Sajnos, a nukleáris fegyverek nem az egyetlen probléma. Ma már tudjuk, hogy a nukleáris erőművek is komoly veszélyt jelent a drága Földön. Mi csak most kezdenek felébredni a felismerés, hogy a nukleáris erőművek nem lehet 100%-osan biztonságos.</p>
			
			<p>A katasztrofális katasztrófa Fukusimai nem kellett volna azért történt, mert a nukleáris mérnökök felkészült minden lehetséges legrosszabb forgatókönyv: voltak biztonsági szabályokat vezetett be, minden berendezés, üzemi eljárások minden lehetséges helyzetre, készenléti terveket, amikor a dolgok, ha rossz; és több automatikus kompenzációs mechanizmus, ha a tartalék berendezés nem működött. Minden iparág legjobb mérnökei dolgoztak szorgalmasan és lelkiismeretesen a biztonság a legfontosabb. Mégis valami szörnyűség történt. És ne feledd, ez történt 25 évvel Csernobil után, bőséges időt, hogy megtanulják a korábbi hibákat.</p>
			
			<p>Ezekben a napokban van egy nagyon nehéz elhinni, szinte semmit, hogy a nukleáris energia cégek mondani. Olcsóbb, mint az alternatívák? Tisztább, mint az alternatívák? Biztonságosabb, mint az alternatívák? Nem. Nem. Nem.</p>
			
			<p><strong> Mindez csak azért, hogy vizet forralni?</strong></p>	
		
			<p>Itt van az egyszerű igazságot: nincs semmi különleges a termelt villamos energia atomerőművekben. Olaj-, szén-, gáz-, és nukleáris mindannyian ugyanazt a mechanika villamos. Ez egyszerű:</p>
			
			<ol>
				<li>A hőforrás forr a víz.</li>
				<li>Gőz a forró vizet kényszeríti turbina lapátok forogni.</li>
				<li>Indukciós tekercsek csatolt forgó turbina áramot, ha forog egy mágneses mezőt.</li>
			</ol>
			
			<p>Villamos csak elemi fizika és a mérnöki. Miért megy a baj forró vizet hasító-atomok? Miért van a veszélyes nukleáris hulladék, amit soha nem lehet megszabadulni? Miért rontja el a környezet urán bányászat és maró, amely létrehozza mérgező hulladék-földek? És miért atomenergia cégekkel a veszélyes technológiák fejlődő országokban?</p>
			
			<p>Tehát itt van a kérelmet. <strong>Tudna nekem segíteni, hogy beszélni ezeket az egyszerű tényeket?</strong> Nem azt kérem, hogy csatlakozzon egy szervezet, vagy pénzt adományoznak, hanem egyszerűen adja hozzá a nevét a listán a bátor egyének, akik szólnak a egy olyan világban, anélkül, hogy atommaghasadásra.</p>
			
			<p>Remélem, ez lehetővé teszi majd a különbséget.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>