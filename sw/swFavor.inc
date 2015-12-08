<?php
//=============================================================================
//
// File:         /i18n/swFavor.inc
//
// Language:     PHP
//
// Contents:     sw = Kiswahili (Swahili)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/swBasePage.inc' );


//-------------------------------------
class swFavor extends swBasePage
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
		return "Mimi na hitaji";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unaweza kusaidia kwa kusema kwa ujasiri juu ya hatari ya mwatuko nyuklia.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nyuklia vifaa, nguvu za nyuklia, nishati ya nyuklia, silaha za nyuklia, utenganisho, Dunia, kuchemsha maji, umeme";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "bluu yetu nzuri jiwe!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Kweli ahadi";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Kuapa "hakuna zaidi fission" kiapo sasa!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Unaweza kusaidia kwa kusema kwa uhodari</h1>
			
			<p>Hujambo,</p>
			
			<p>Nina ombi. <strong>Utanisaidia katika jitihada yangu ya kufanya hii dunia bila mwatuko nyuklia?</strong></p>
			
			<p>Niruhusu kueleza kwa nini najisikia sana kuhusu hili.</p>
	
			<p>Nilipokuwa kupanda juu, nafasi ya utafutaji ilikuwa na urefu wa utukufu wake kamili. Msisimko kwamba unaambatana adventure walionekana kuwa pamoja na kila mtu. Msisimko kwamba unaambatana kila hatua mpya, noa matumbo yetu kwa zaidi. Na kutarajia kwamba sisi kweli walikuwa wanakwenda kuweka mtu kwenye mwezi na kurudi naye salama na Dunia, naendelea yetu wanaohusika na hata mafanikio madogo na mapungufu ya mradi huo.</p>
			
			<p>Kabla ya kufikia lengo la mwisho kwamba, kulikuwa na wengi mafanikio muhimu. Moja ya wengi exhilarating ya hizi ilikuwa wakati wanaanga kuvunja bure kutoka obiti dunia. Kwa mara ya kwanza, wanadamu walikuwa kuondoka usalama wa nyumbani sayari zao. Tulikuwa kama watu wanaotafuta msisimko juu ya adventure ya maisha.</p>
			
			<p>Na kisha kitu ya ajabu zaidi kilichotokea. Astronauts akapiga nyuma katika dunia inazidi kupungua, na kuona kwa mara ya kwanza jiwe bluu kwamba alikuwa nyumbani yetu, na wao walikuwa karibu na kuzidiwa na uzuri thamani ya waliyo hayaonekani. Picha kwamba watarudishwa ilitangazwa kwa ulimwengu, na sisi pia walikuwa kunyenyekewa.</p>
			
			<p>Mazingira magumu alitekwa katika picha wale kutufanya fahamu ya wenyewe kwa njia ambayo transcended siasa wote. Kwa muda mfupi katika muda, sisi nimesahau Vita Baridi, sisi kuweka kando tofauti zetu, na sisi wakilistaajabia uzuri wa dunia. Kutoka katika fahamu hii mpya sisi alijua tu jinsi tete nafasi yetu katika ulimwengu mara, na jinsi perilously karibu tulikuwa na kuharibu nyumbani tu sisi milele.</p>
			
			<p>Sisi niliamshwa na hisia ya uharaka na kurekebisha mapungufu yetu. Na kupasuka ya shughuli, sisi kazi ya kurekebisha matatizo yetu. Mkataba wa kimataifa juu ya kuenea kwa silaha za nyuklia, na makubaliano ya kupiga marufuku kila kupima juu-chini ya silaha za nyuklia walikuwa ushahidi kwamba tunaweza majadiliano juu ya maadili yetu ya pamoja na kufikia malengo ya kawaida busara. Hatimaye, pamoja na kuanguka kwa Ukuta Berlin, na joto ya mahusiano kati ya wapinzani wakuu wa Vita Baridi, tulianza kwanza kubwa juhudi lengo la kupunguza hifadhi ya kimataifa ya silaha za nyuklia.</p>
			
			<p>Lakini tangu wakati kwamba sisi wanaonekana kupoteza juhudi zetu kwa ajili ya ulimwengu usio na silaha za nyuklia, na jitihada za hivi karibuni kuendelea kuwa kazi hawajafanya kiasi halisi ya maendeleo. Baada ya miongo minne ya mazungumzo walio dhaifu, hatuna hata imekuwa na uwezo wa kudumisha hali ya mambo ilivyo sasa: mikataba ya kimataifa ya nyuklia wamekuwa walizunguka au kupuuzwa; kuzeeka hifadhi ya kimataifa ni kuzorota; na mpya silaha za nyuklia utafiti unaendelea.</p>
			
			<p><strong>Sera ya kuzuia makosa yasitendeke imekuwa wazi alishindwa</strong> Kwa aibu yetu, imekuwa kubadilishwa na ahadi hazieleweki na rhetoric tupu.</p>
			
			<p>Cha kusikitisha, silaha za nyuklia ni wasiwasi wetu si tu. Sasa tunajua kwamba nguvu za nyuklia mimea pia ni tishio kubwa kwa dunia yetu ya thamani. Sisi ni mwanzo tu na kuamsha kwa kutambua kwamba mitambo ya nyuklia haiwezi kufanywa 100% salama.</p>
			
			<p>Janga katika Fukushima kamwe lazima kuwa kilichotokea kwa sababu ya wahandisi wa nyuklia alikuwa tayari kwa ajili ya mazingira kila iwezekanavyo kesi mbaya: na walikuwa na sheria za usalama katika nafasi kwa kila kipande ya vifaa; uendeshaji taratibu kwa ajili ya kila hali iwezekanavyo; dharura mipango kwa ajili ya wakati mambo wakati vibaya, na mbalimbali ya moja kwa moja kufidia taratibu katika kesi vifaa vya hifadhi hawakuwa na kazi. Wote wa wahandisi sekta ya bora walikuwa wakifanya kazi kwa bidii na kwa uangalifu na usalama kama kipaumbele juu yao. Hata hivyo bado kitu kutisha kilichotokea. Na kumbuka, hii ilitokea miaka 25 baada ya Chernobyl, na muda wa kutosha kujifunza kutokana na makosa uliopita.</p>
			
			<p>Siku hizi nina wakati mgumu sana kuamini karibu kila kitu kwamba nishati ya nyuklia makampuni uniambie. Nafuu kuliko njia mbadala? Safi kuliko njia mbadala? Salama zaidi kuliko njia mbadala? Hapana. Hapana. Hapana.</p>
			
			<p><strong>Yote hayo tu kwa kuchemsha maji</strong>?</p>
	
			<p>Hapa ni ukweli mtupu: kuna kitu maalum kuhusu umeme yanayotokana na mitambo ya nyuklia. Mafuta, makaa ya mawe, gesi, na nyuklia wote kutumia mashine moja kwa ajili ya kuzalisha umeme. Ni rahisi:</p>
			
			<ol>
				<li>Chanzo joto majipu maji.</li>
				<li>Mvuke kutoka maji ya moto vikosi turbine vile na spin.</li>
				<li>Induction coils masharti turbine inazunguka kujenga umeme wakati kuzungushwa kwa njia ya shamba sumaku.</li>
			</ol>
			
			<p>Kuzalisha umeme ni watawala fizikia na uhandisi. Hivyo kwa nini kwenda kwa shida ya maji ya moto na atomi kugawanyika? Kwa nini kujenga hatari taka za kinuklia kwamba kamwe hatuwezi kujikwamua? Kwa nini nyara mazingira na madini ya uranium madini na kusaga ambayo inajenga ardhi taka za sumu? Na kwa nini ni nguvu za nyuklia makampuni ya nje teknolojia hii ni hatari kwa nchi zinazoendelea?</p>
			
			<p>Hivyo hapa ni ombi. <strong>Unaweza kunisaidia kwa majadiliano juu ya mambo haya rahisi</strong>? Mimi si kuuliza wewe kujiunga na shirika au kuchangia fedha, lakini tu kwa kuongeza jina yako kwenye orodha ya watu jasiri ambaye atazungumza katika neema ya dunia bila mwatuko nyuklia.</p>
			
			<p>Natumaini hii itakuwa kufanya tofauti.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>