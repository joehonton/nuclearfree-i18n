<?php
//=============================================================================
//
// File:         /i18n/htFavor.inc
//
// Language:     PHP
//
// Contents:     ht = Kreyòl (Haitian Creole)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/htBasePage.inc' );


//-------------------------------------
class htFavor extends htBasePage
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
		return "Mwen gen yon demann";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ou ka ede pa pale kouraj sou danje ki genyen nan fisyon nikleyè.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "enstalasyon nikleyè, fòs nikleyè, enèji nikleyè, zam nikleyè, fisyon, Latè, w bouyi dlo, kouran elektrik,";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "bèl nou yo ble mab!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "avèti te pwomèt";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Fè sèman di "pa plis fisyon" sèman an kounye a!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Ou ka ede pa pale kouraj</h1>
			
			<p>Hello,</p>
			
			<p>Mwen gen yon demann. <strong>Èske w ap ede m 'nan demand mwen an fè sa-a yon mond san yo pa fisyon nikleyè?</strong></p>
			
			<p>Kite m 'eksplike poukisa mwen santi mwen yo sitèlman sou sa.</p>
	
			<p>Lè m 'te ap grandi, eksplorasyon espas te nan wotè a nan tout bèl pouvwa plen li yo. Eksitasyon an ki te akonpaye avanti a te sanble pa tout moun nou kapab pataje. Frison nan ki te akonpaye chak nouvo etap enpòtan, ile apati nou an pou plis. Apre sa, patisipe a ke nou vrèman yo te ale nan mete yon moun sou lalin lan epi retounen l 'san danje sou tè a, te kenbe nou aktif nan menm siksè minè a ak echèk nan pwojè an.</p>
			
			<p>Anvan yo rive ke objektif final, te gen anpil reyalizasyon enpòtan. Youn nan pi grizant la nan sa yo te lè astwonòt yo te kraze gratis nan òbit Latè. Pou la pwemye fwa, moun yo te kite sekirite a nan planèt lakay yo. Nou te tankou moun k ap chèche frison sou avanti a nan yon lavi.</p>
			
			<p>Lè sa a, bagay ki pi remakab ki te pase. Astwonòt yo regarda tounen nan tè a rkul, li wè a pou premye fwa mab ble a ki te lakay nou an, epi yo te prèske akable pa bote a presye nan sa yo wè. Imaj yo, fotografi yo ke yo te voye tounen lakay yo te emèt nan mond lan, epi nou tou yo te nan tranble.</p>
			
			<p>Frajilite a te kaptire nan foto sa yo te fè nou konsyan de tèt nou nan yon fason ki transando tout politik. Pou yon moman tou kout nan tan, nou bliye Gè Fwad la, nou mete sou kote diferans nou, epi nou t 'manke sezi nan bote nan Latè. Soti nan konsyans sa a nouvo nou te konnen jis ki jan frajil plas nou nan linivè a te, ak ki jan periyezman fèmen nou yo te detwi kay la sèlman nou pral janm genyen.</p>
			
			<p>Nou reveye ak yon sans de ijans ranje enpèfeksyon nou an. Ak yon pete nan aktivite, nou te travay yo korije pwoblèm nou yo. Trete entènasyonal la sou zam nikleyè pwopagasyon, ak akò a yo entèdi tout tès pi wo pase-tè nan zam nikleyè yo te prèv ke nou te ka pale sou valè pataje nou yo ak reyalize objektif komen sansib. Evantyèlman, ak sezon otòn la nan Mi Bèlen an, ak font nan relasyon ant rival yo direktè lekòl la nan Lagè Fwad la, nou te kòmanse premye efò a grav ki vize a diminye rezerv mondyal la nan zam nikleyè.</p>
			
			<p>Men, depi lè sa a nou yo sanble yo te pèdi eklatman nou an pou yon mond gratis nan zam nikleyè, ak efò ki sot pase yo kontinye ke travay pa t 'fè anpil pwogrè reyèl. Apre kat deseni nan chita pale medyòk, nou pa gen menm te kapab kenbe aktyèl eta de zafè: trete yo nikleyè entènasyonal yo te tourne oswa inyore; aje Garceno mondyal yo ki nan move eta, ak nouvo rechèch zam nikleyè kontinye.</p>
			
			<p><strong>Politik la nan disuaziv te byen klè echwe.</strong> Pou wont nou an, li te ranplase pa pwomès vag ak diskou vid.</p>
			
			<p>Malerezman, zam nikleyè se pa sèlman enkyetid nou an. Nou kounye a konnen ke plant fòs nikleyè tou poze yon menas grav nan Latè koute chè nou yo. Nou ap jis kòmanse reveye nan realizasyon an ki pa ka fè plant fòs nikleyè 100% san danje.</p>
			
			<p>Katastwòf la nan Fukushima pa ta dwe janm te rive paske enjenyè yo nikleyè te pare pou tout posib senaryo pi move-ka: yo te gen règ sou sekirite nan plas pou chak moso nan ekipman; opere pwosedi pou chak sitiyasyon posib; plan pou lè bagay sa yo ale mal, ak plizyè mekanis konpansasyon otomatik nan ka ekipman an rezèv pa t 'travay. Tout moun nan pi bon enjenyè endistri a tap travay avèk dilijans epi konsyans ak sekirite kòm pi gwo priyorite yo. Men, toujou yon bagay terib konsa te pase. Epi sonje, sa a te fèt 25 lane apre Chernobyl, ak ase tan yo aprann nan erè anvan yo.</p>
			
			<p>Jou sa yo mwen gen yon tan trè difisil kwè ke prèske anyen ke konpayi yo enèji nikleyè fè m 'konnen. Pi bon mache pase lòt yo? Cleaner pase altènativ yo? Pi an sekirite pase lòt yo? Se pa. Se pa. Se pa.</p>
			
			<p><strong>Tout sa jis bouyi dlo?</strong></p>
	
			<p>Isit la se sa a verite a senp: pa gen anyen espesyal sou elektrisite ki te pwodwi pa plant fòs nikleyè. Lwil oliv, chabon, gaz, ak nikleyè tout sèvi ak mekanik yo menm pou génération elektrisite. Li nan senp:</p>
			
			<ol>
				<li>Yon sous chalè klou dlo.</li>
				<li>Machin vapè ki soti nan bouyi fòs dlo lam yo turbine rad.</li>
				<li>Sou anwoulman Endiksyon tache ak turbine la bondi kreye elektrisite lè vire toutotou a atravè yon chan mayetik.</li>
			</ol>
			
			<p>Génération elèktrisite se jis fizik Elemental ak jeni. Se konsa, poukisa ale nan pwoblèm nan dlo bouyi pa divize atòm? Poukisa kreye danjere dechè nikleyè ke nou pa janm ka debarase m de? Poukisa gate anviwònman an ak min iranyòm ak fraisage ki ka kreye toksik fatra-nasyon yo? Epi poukisa yo se konpayi fòs nikleyè ekspòte teknoloji sa a danjere nan peyi devlope yo?</p>
			
			<p>Se konsa, isit la se demann lan. <strong>Èske ou ka ede m 'pale sou enfòmasyon senp sa yo?</strong> Mwen pa mande ou rantre nan yon òganizasyon oswa fè don lajan, men tou senpleman ajoute non ou nan lis la nan moun vanyan gason ki moun ki va pale an favè yon mond san yo pa fisyon nikleyè.</p>
			
			<p>Mwen espere ke sa a pral fè yon diferans.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>