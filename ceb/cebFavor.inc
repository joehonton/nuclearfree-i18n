<?php
//=============================================================================
//
// File:         /i18n/cebFavor.inc
//
// Language:     PHP
//
// Contents:     ceb = Binisaya (Cebuano)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/cebBasePage.inc' );


//-------------------------------------
class cebFavor extends cebBasePage
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
		return "Ako adunay usa ka hangyo";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Makatabang ka pinaagi sa pagsulti sa maisugon mahitungod sa mga kakuyaw sa nuclear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nukleyar nga gahum, nukleyar nga kusog, armas nukleyar, fission, sa Yuta, Nagabukal sa tubig, kuryente";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "among matahum azul nga marmol!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{		 
		return "Ako mosaad";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Manumpa sa "dili na fission" panumpa karon!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Makatabang ka pinaagi nga nagsulti maisogong</h1>
			
			<p>Hello,</p>
			
			<p>Nga ako adunay usa ka hangyo. <strong>Motuo ka ba sa pagtabang kanako sa akong pagpangita aron sa paghimo niini nga usa ka kalibutan nga walay nukleyar fission? </strong></p>
			
			<p>Motugot kanako sa pag-aw kon nganong Gibati nako lig-on mahitungod niini.</p>
	
			<p>Sa diha nga ako nagtubo, nga luna sa exploration didto sa sa gitas-on sa iyang hingpit nga himaya. Ang kahinam nga mikuyog ang Adventure daw nga mipakigbahin sa tanan. Ang malipay ang nga mikuyog sa matag bag-o nga milestone, whet sa atong mga appetites alang sa dugang. Ug ang pagpaabut nga kita gayud ang pag-adto sa pagbutang sa usa ka tawo diha sa bulan ug mobalik siya sa luwas sa Yuta, nagbantay sa kanato nga moapil uban sa bisan ang mga menor de edad nga mga kalampusan ug mga kapakyasan sa programa.</p>
			
			<p>Sa wala pa-abot nga ang katapusang tumong, adunay daghan nga mga mahinungdanon nga mga kalampusan. Usa sa labing exhilarating sa mga mao sa diha nga ang mga astronauts gigun-ob gikan sa Yuta libot. Kay sa unang higayon, ang mga tawo nga sa pagbiya sa kaluwasan sa ilang mga panimalay nga planeta. Kami sama sa malipay ang mga tigsiksik sa bakasyon sa usa ka tibuok kinabuhi.</p>
			
			<p>Ug dayon ang labing talagsaon nga butang nga nahitabo. Ang mga astronauts glanced balik sa receding sa Yuta, ug hingkit-an sa unang higayon sa mga asul nga marmol nga diha sa among balay, ug sila hapit bug-atan sa mga bililhon nga katahum sa kon unsa ang ilang nakita sa. Ang mga larawan litrato nga ilang gipadala balik sa mga sibya sa kalibutan, ug kita usab diha sa matinahurong kataha.</p>
			
			<p>Ang kadutlan nadakpan niadtong mga litrato nga gihimo kanato sa mahunahunaon sa atong mga kaugalingon diha sa usa ka paagi nga ang tanan nga transcended sa politika-unong. Kay sa usa ka mubo nga higayon sa diha sa panahon, kita nakalimot mahitungod sa US / Soviet armas sa gubat, atong gigahin sa atong mga kalainan, ug kami nahibulong sa katahum sa Yuta. Gikan niining bag-o sa panimuot kami nasayud nga kon unsa mahuyang sa atong dapit diha sa uniberso, ug sa unsa nga paagi perilously suod kami sa paglaglag sa mga lamang sa panimalay kita sa kanunay makabaton.</p>
			
			<p>Kami nahigmata sa usa ka pagbati sa pagkadinalian aron ayuhon sa atong mga kasaypanan. Uban sa usa ka gilugtas ko sa pagka-aktibo, kita nagtrabaho sa pag-ayo sa atong mga problema. Ang internasyonal nga treaty sa armas nukleyar pagdaghan, ug sa mga kasabutan sa pag-ban sa tanan nga mga sa ibabaw sa yuta-testing sa mga armas nukleyar sa mga pamatuod nga kita mahimo makig-istorya mahitungod sa atong mipakigbahin mga mithi ug pagkab-ot sa komon nga tumong tawong maayog panghunahuna. Sa katapusan, uban sa pagkapukan sa Berlin Wall sa, ug ang mga thawing sa mga relasyon tali sa mga prinsipal nga karibal sa US / Soviet armas sa gubat, kami misugod sa unang grabe nga paningkamot nga nagtumong sa pagkunhod sa global nga stockpile sa mga armas nukleyar.</p>
			
			<p>Apan sukad niadtong panahona nga kita daw nga nawad-an sa sa atong kadasig alang sa usa ka kalibutan nga libre gikan sa armas nukleyar, ug sa bag-ohay nga mga paningkamot sa pagpadayon sa niana nga buhat wala nga gihimo ang daghang tinuod nga pag-uswag. Human sa upat dekada nga huyang mga pakigpulong, kita wala pa gani nakahimo sa pagpadayon sa kasamtangan nga kahimtang sa kalihokan: ang internasyonal nga nukleyar nga treaties nga panumbalinga: ang nagka-edad nga mga armas nga nagkagrabe, ug bag-ong armas nukleyar panukiduki nagpadayon.</p>
			
			<p><strong>Ang palisiya sa kahadlok sa gubat nga tin-aw nga napakyas.</strong> Sa atong kaulaw, kini gipulihan sa walay sulod riturika.</p>
			
			<p>Ikasubo, armas nukleyar mao ang dili lamang sa atong mga kabalaka. Kita karon nasayud nga ang nukleyar nga gahum pasilidad usab pose sa usa ka seryoso nga hulga sa atong mahal nga Yuta. Kita lang nagsugod sa pagpukaw sa pagkaamgo nga nukleyar nga gahum pasilidad dili na 100% nga luwas.</p>
			
			<p>Ang catastrophic katalagman sa Fukushima nga dili gayud unta nahitabo tungod kay ang mga nukleyar nga enhinyero giandam alang sa tanan nga posible nga labing dautan sa kaso-nga situwasyon: sila nga luwas diha sa mga lagda nga dapit alang sa tagsatagsa ka piraso sa mga kagamitan, mga pamaagi alang sa tagsatagsa ka posible nga sitwasyon, espesyal nga mga plano kay sa diha nga sa mga butang nga sa diha nga ang sayop, ug awtomatikong mekanismo diha sa kaso, ang gitagana ekipo wala sa trabaho. Ang tanan nga mga industriya sa labing maayo nga mga enhinyero nga nagtrabaho nga makugihon ug mainampingong uban sa kaluwasan, ingon sa ilang tumoy sa prayoridad. Bisan pa niana, sa gihapon usa ka butang nga makalilisang nga nahitabo. Ug hinumdumi, kini nga nahitabo 25 ka tuig human sa Chernobyl, uban sa igo nga panahon sa pagkat-on gikan sa miaging mga sayop.</p>
			
			<p>Kini nga mga adlaw nga ako adunay usa ka lisud nga panahon sa pagtuo hapit bisan unsa nga butang nga ang nukleyar nga enerhiya kompanya sa suginli ako. Barato pa kay sa mga alternatibo? Maglilinis, kay sa mga alternatibo? Mas luwas kay sa mga alternatibo? No No No</p>
			
			<p><strong>Kining tanan aron lang lutoon mo ang tubig? </strong></p>
	
			<p>Ania ang yano nga kamatuoran: walay bisan unsa nga espesyal nga bahin sa elektrisidad nga namugna pinaagi sa nukleyar nga power plants. Sa lana, coal, gas ug sa nukleyar sa tanan nga paggamit sa sama nga mekaniko alang sa pagmugna og kuryente. Kini mga walay-pagtagad:</p>
			
			<ol>
				<li>Usa ka kainit tinubdan hubag sa tubig.</li>
				<li>Kabisog gikan sa Nagabukal nga tubig nga pwersa nga turbine blades sa nanagkalinyas.</li>
				<li>Pagpasulud, pagpalingkod coils gilakip sa spinning turbine paghimo sa kuryente sa dihang ang rotated pinaagi sa usa ka Magnetic uma.</li>
			</ol>
			
			<p>Pagmugna og kuryente mao lang primarya Physics ug engineering. Busa ngano nga moadto sa kagul-anan sa Nagabukal nga tubig pinaagi sa natipak mga atom? Nganong paghimo og peligroso nukleyar nga basura sa nga kita dili gayud og Isalikway? Nganong inagaw sa kinaiyahan uban sa uranium pagmina ug milling nga nagmugna makahilo nga yuta? Ug ngano nga ang mga gahum sa nukleyar nga kompanya sa eksport niini nga delikado nga teknolohiya sa pag-uswag nga mga nasud?</p>
			
			<p>Busa dinhi mao ang hangyo. <strong>ba nimo sa pagtabang kanako sa paghisgot mahitungod niini nga mga simple nga mga kamatuoran? </strong> ako wala pagpangayo ninyo ug sa pag-apil sa usa ka organisasyon o sa pag-donar sa salapi, apan yano aron sa pagdugang sa imong ngalan ngadto sa listahan sa mga maisugon nga mga indibidwal nga mosulti pabor sa sa usa ka kalibutan nga walay nukleyar fission.</p>
			
			<p>Ako nanghinaut nga kini ang usa ka kalainan.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>