<?php
//=============================================================================
//
// File:         /i18n/euFavor.inc
//
// Language:     PHP
//
// Contents:     eu = Euskara (Basque)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 2, 2013
//
//=============================================================================

require_once( __DIR__ . '/euBasePage.inc' );


//-------------------------------------
class euFavor extends euBasePage
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
		return "Eskaera bat dut";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ausardia dituzten fisio nuklearraren arriskuei buruz hitz eginez lagun dezakezu.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "instalazio nuklearrak, energia nuklearra, arma nuklearrak, fisio, lurra, ura irakiten, elektrizitatea";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "Gure eder urdin marmolezko!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Handikiro Agintzen";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zin egiten du, "ez gehiago fisio" zin orain!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Ausardia batekin hitz eginez lagun dezakezu</h1>
			
			<p>Kaixo,</p>		 
			
			<p>Eskaera bat daukat. <strong>Lagun nazakezu nire quest bat mundu honetan egin behar fisio nuklearra gabe?</strong></p>
			
			<p>Baimentzen argitu zergatik hain biziki sentitzen dut honi buruz dit.</p>
	
			<p>Noiz hasi nintzen gero eta handiagoa, espazioaren esplorazioan bere aintza osoa parean izan zen. Emozioa duten lagunduta abentura ziruditen denek beharreko partekatu. Emozioa duten lagunduta mugarri berria den, gure whet appetites gehiagorako. Aurrea hartzeko, eta benetan dugun ziren gizon bat jarri, ilargia eta itzul segurtasunez Lurrera joan, mantendu arduratzen nahiz eta arrakasta txikiak eta porrotak programaren gurekin batera.</p>
			
			<p>Azken helburu hori iritsi baino lehen, ez ziren garrantzitsuak lorpenak. Gehien exhilarating horietako bat izan zen denean astronautak piztu Lurraren orbitan doan. Lehenengo aldiz, gizakiak ziren beren etxeko planeta segurtasuna utziz. Ziren emozioa bizitzako abentura on eskatzaileak atsegin dugu.</p>
			
			<p>Eta, ondoren, garrantzitsuena gauza gertatu zen. Astronauten begiratu atzeko receding Earth, eta, lehen aldiz, urdina marmolezko izan zen gure etxea ikusi zuen, eta ia zer beheld de preziatuak edertasuna larritu. Argazki-irudiak bidaltzen dituzten itzuli ziren, munduko emititzen, eta guk ziren gehiegi harritu.</p>
			
			<p>Argazki horiek harrapatu ahultasun egindako kontziente gure digu modu bat barreiatu politiko allegiances guztietan. Denbora laburra une batez, ahaztu Gerra Hotzaren gara, alde batera utzi dugu gure artean, eta ikusi dugu Lurraren edertasuna. Berri honen kontzientzia bakarrik nola hauskorra gure unibertsoaren leku zen ezagutu genuen, eta oso oso hurbil izan ziren bakarrik etxean inoiz izango dugu suntsitzen ari gara.</p>
			
			<p>Iratzarri premiaz zentzu bat egiten dugu gure gabeziak konpontzeko. Jarduera-sorta batekin, gure arazoak konpontzeko lan egin dugu. Arma nuklearrak ugaritzea, eta hitzarmena arma nuklearrak probak arestian beheko guztiak debekatu Ituna nazioarteko froga izan dugu gure balioak partekatzen buruz hitz komuna eta zentzuzko helburuak lortu ziren. Azkenean, Berlingo Harresi, eta Gerra Hotza nagusi lehiakideen arteko harremanak desizozte jaitsierarekin batera, lehen ahalegin serioa arma nuklearrak stockpile globala murriztera zuzendutako hasi ginen.</p>
			
			<p>Baina, denbora horretatik aurrera galdu gure debozio mundu bat arma nuklearrak, eta azken ahalegin lan hori jarraitzeko doan badirudi ez dugu egin, askoz ere benetako aurrerapausoak. Lau hitzaldi ahula hamarkada igaro ondoren, ez dugu, nahiz eta jakin izan gaiak gaur egungo egoera mantentzea da: nazioarteko itun nuklearra dira circumvented edo ez ikusi egiten zaie; zahartzea dudanez hondatzen ari dira, eta berriak arma nuklearrak ikerketa jarraitzen du.</p>
			
			<p><strong>Eta disuasio politika egin du, argi eta garbi huts egin du.</strong> Gure lotsa, izan promesak vague eta erretorika hutsa sartu da.</p>
			
			<p>Zoritxarrez, arma nuklearrak ez dira gure kezka bakarra. Orain badakigu energia nuklearra landareak ere planteatzen gure preziatuak Lurraren mehatxu larri bat. Hasi baino ez gara nahi gauzatzeko esnatuko energia nuklearra landareak ezin dira% 100 segurua hasita.</p>
			
			<p>Fukushima inoiz at hondamendia hondamendi gertatu behar izan ingeniari nuklearra zuen behin kasurik txarrenaren agertokia posible delako prestatu: segurtasun-arauak izan zuten leku ekipamendu-zati bakoitzeko; eragile guztietan ahalik eta egoera prozedurak; kontingentzia planak gauzak gaizki denean; eta hainbat kasu horretan konpentsatzeko mekanismo automatikoak erreserba ekipoak ez zuen lan. Industriako ingeniari onenetako guztiak ziren arduratsuan eta conscientiously lan segurtasun beren lehentasuna gisa. Gabe oraindik zerbait terrible gertatu zen. Eta gogoratu, hau da, 25 urte Txernobilgo ondoren gertatu da, denbora zabal akats aurreko ikasten.</p>
			
			<p>Egun hauetan oso zaila ia ezer sinesten du energia nuklearra duten enpresak esan behar dut. Alternatibak baino merkeagoa? Alternatibak baino garbiagoa? Alternatibak baino seguruagoak? No. No. No.</p>
			
			<p><strong>Hori guztia, besterik gabe, ura irakiten?</strong></p>
	
			<p>Hemen errazak egia da: ez dago ezer, elektrizitatea indar nuklearraren landareak sortutako berezia da. Petrolioa, ikatza, gas, eta nuklear guztiak erabili elektrizitatea sortzeko mekanika bera. Sinplea da:</p>
			
			<ol>
				<li>A bero-iturri irakiten ura.</li>
				<li>Du irakiten ur lurrun turbina alabeak behartzen piztu.</li>
				<li>Indukzio inflexio-turbina atxikitako bobina sortu zenean elektrizitate bidez eremu magnetikoa biratuta.</li>
			</ol>
			
			<p>Elektrizitatea sortzeko, besterik gabe, oinarrizko fisika eta ingeniaritza da. Beraz, zergatik ur irakiten arazoak zatitze atomo joan? Zergatik sortu nuklearrak hondakin arriskutsuak ezin dugula inoiz gainetik kendu du? Zergatik hondatu ingurumena uranioa meatzaritza eta fresatzeko sortzen toxikoak hondakin-lurrak dituzten? Eta zergatik ari dira energia nuklearra enpresa arriskutsua teknologia hori esportatzen garapen bidean dauden herrialdeetan?</p>
			
			<p>Beraz, hemen eskaera da. <strong>Lagun nazakezu horiek errazak egitateei buruz hitz egitea?</strong> Ni ez naiz, erakunde batean sartu eta dirua eman edo eskatzen du, baina, besterik gabe, zure izena gehitzeko, pertsona ausarta hartuko duten mundu baten alde hitz egiten fisio nuklearra gabe zerrenda.</p>
			
			<p>Hau diferentzia bat egitea espero dut.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>