<?php
//=============================================================================
//
// File:         /i18n/afFavor.inc
//
// Language:     PHP
//
// Contents:     af = Afrikaans
//
// Author:       Joe Honton © 2013
//
// Initial date: September 27, 2013
//
//=============================================================================

require_once( __DIR__ . '/afBasePage.inc' );


//-------------------------------------
class afFavor extends afBasePage
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
		return "Ek het 'n versoek";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Jy kan help deur te praat verleë oor die gevare van kernsplyting.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kernkrag, kernenergie, kernsplyting, kern wapens, fisie, splyting, Aarde, kokende water, elektrisiteit";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'Ons Pragtige Blou Marmer!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Belowe Plegtig';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sweer die "geen meer fisie" eed nou!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Jy kan help deur te praat moedig</h1>
			
			<p>Hallo,</p>
			
			<p>Ek het 'n versoek. <strong>Sal jy my help in my soeke hierdie 'n wêreld te maak, sonder kernsplyting?</strong></p>
			
			<p>Laat my toe om te verduidelik hoekom ek voel so sterk hieroor.</p>
	
			<p>Toe ek grootgeword het, verkenning van die ruimte was op die hoogte van sy volle glorie. Die opwinding wat gepaard gaan met die avontuur gelyk te word gedeel deur almal. Die opwinding wat gepaard gaan met elke nuwe mylpaal, skerp ons aptyt vir meer. En die verwagting dat ons regtig gaan 'n man te sit op die maan en hom veilig terug te kom na die aarde, het ons besig met selfs die klein suksesse en mislukkings van die program.</p>

			<p>Voor die bereiking van die uiteindelike doel te bereik, was daar baie belangrike prestasies. Een van die mees opwindende van hierdie was toe die ruimtevaarders losgebreek van die Aarde wentel. Vir die eerste keer, is die mens verlaat die veiligheid van hul huis planeet. Ons was soos opwinding soek op die avontuur van 'n leeftyd.</p>
			
			<p>En dan is die mees merkwaardige ding gebeur het. Die ruimtevaarders kyk terug by die afneem Aarde, en het vir die eerste keer die blou marmer wat ons huis, en hulle is amper oorweldig deur die kosbare skoonheid van wat hulle gesien het. Die fotografiese beelde dat hulle terug gestuur is aan die wêreld, en ons was ook stomgeslaan.</p>
			
			<p>Die kwesbaarheid gevang in die foto's wat ons bewus van onsself in 'n manier wat vermeng alle politieke oortuigings. Vir 'n kort oomblik in tyd, het ons vergeet van die Koue Oorlog, het ons opsy gesit om ons verskille, en ons verwonder aan die skoonheid van die aarde. Van hierdie nuwe bewussyn ons het geweet net hoe broos ons plek in die heelal was, en hoe gevaarlik naby was ons aan die vernietiging van die enigste huis wat ons ooit sal hê.</p>
			
			<p>Ons ontwaak met 'n gevoel van dringendheid ons tekortkominge op te los. Met 'n sarsie van die aktiwiteit, het ons gewerk om ons probleme op te los. Die internasionale verdrag oor die kern wapens te versprei, en die ooreenkoms alle bogrondse toetsing van kernwapens te verbied was 'n bewys dat ons kan praat oor ons gedeelde waardes en bereik gemeenskaplike sinvolle doelwitte te bereik. Uiteindelik, met die val van die Berlynse Muur en die ontdooi van die verhouding tussen die skoolhoof teenstanders van die Koue Oorlog, het ons begin om die eerste ernstige poging wat daarop gemik op die vermindering van die globale voorraad van kernwapens.</p>
			
			<p>Maar sedert daardie tyd het ons lyk te verloor het ons ywer vir 'n wêreld vry van kernwapens, en die onlangse pogings wat werk voort te sit het nie veel werklike vordering. Ná vier dekades van lustelose praat, het ons nie eens in staat was om die huidige stand van sake in stand te hou: die internasionale kern verdrae is omseil of geïgnoreer word; die veroudering globale voorrade gaan agteruit, en nuwe kern wapens navorsing gaan voort.</p>
			
			<p><strong>Die beleid van afskrikking duidelik misluk het.</strong> Tot ons skande, is dit vervang deur vae beloftes en leë retoriek.</p>
			
			<p>Ongelukkig, kern wapens is nie ons enigste bron van kommer. Ons weet nou dat kernkragsentrales ook 'n ernstige bedreiging vir ons kosbare aarde. Ons is net besig om te ontwaak tot die besef dat kernkragsentrales gemaak kan word nie 100% veilig is.</p>
			
			<p>Die katastrofiese ramp by Fukushima nooit gebeur het nie, want die kern ingenieurs het voorberei vir elke moontlike ergste geval scenario: hulle het veiligheidsmaatreëls in plek vir elke stukkie van toerusting, operasionele prosedures vir elke moontlike situasie; gebeurlikheidsplanne vir wanneer dinge verkeerd toe; en verskeie outomatiese vergoed meganismes in die geval van die reservaat toerusting nie gewerk het nie. Al die bedryf se beste ingenieurs is ywerig en pligsgetrou werk met veiligheid as hul top prioriteit. Nog steeds iets verskriklik gebeur het. En onthou, hierdie plaasgevind 25 jaar na Tsjernobil, met genoeg tyd om te leer uit vorige foute.</p>
			
			<p>Deesdae is ek het 'n baie harde tyd te glo byna enigiets wat die kern energie-maatskappye vir my sê. Goedkoper as die alternatiewe? Skoner as die alternatiewe? Veiliger as die alternatiewe? Nee. Nee. Nee.</p>
			
			<p><strong>Al hierdie net water te kook?</strong></p>
	
			<p>Hier is die eenvoudige waarheid: daar is niks spesiaal aan elektrisiteit wat deur kernkrag plante. Olie, steenkool, gas en kernkrag gebruik almal dieselfde meganika vir die opwekking van elektrisiteit. Dit is eenvoudig:</p>
			
			<ol>
				<li>'N bron van hitte kook water.</li>
				<li>Stoom van die kookwater dwing turbine lemme te draai.</li>
				<li>Induksie spoele verbonde aan die draai turbine skep elektrisiteit wanneer gedraai word deur 'n magnetiese veld.</li>
			</ol>
			
			<p>Die opwekking van elektrisiteit is net basiese fisika en ingenieurswese. So hoekom die moeite doen om water te kook met die verdeling van atome? Hoekom skep gevaarlike kern afval wat ons nooit kan ontslae te raak van? Hoekom bederf die omgewing met uraan-ontginning en maal dit skep giftige Woest? En hoekom is kernkrag maatskappye uitvoer hierdie gevaarlike tegnologie aan ontwikkelende lande?</p>
			
			<p>So hier is die aanvraag. <strong>Kan jy my help om te praat oor hierdie eenvoudige feite?</strong> Ek vra nie van jou 'n organisasie aan te sluit of om geld te skenk, maar net jou naam te voeg by die lys van die dapper individue wat praat ten gunste van 'n wêreld sonder kernsplyting.</p>
			
			<p>Ek hoop dit sal 'n verskil maak.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>