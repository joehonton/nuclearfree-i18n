<?php
//=============================================================================
//
// File:         /i18n/hrmFavor.inc
//
// Language:     PHP
//
// Contents:     hrm = Hmong
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/hrmBasePage.inc' );


//-------------------------------------
class hrmFavor extends hrmBasePage
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
		return "Kuv muaj ib daim ntawv thov";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Koj yuav pab tau los ntawm hais lus hais lus nrog muaj peev xwm txog txoj kev txhawj xeeb ntawm nuclear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuclear chaw, nuclear fais fab tuag, nuclear zog, riam phom nuclear, fission, lub ntiaj teb, boiling dej, hluav taws xob";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "peb zoo nkauj xiav pob zeb ci ci!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Loj heev cog lus";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Ua "tsis muaj ntau fission" cog lus tam sim no!';
	}		 

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Koj muaj peev xwm pab nrog hais lus nrog muaj peev xwm</h1>
			
			<p>Nyob zoo,</p>
			
			<p>Kuv muaj ib tug kev thov. <strong>yuav koj pab kuv nyob rau hauv kuv lub hom phiaj kom ntiaj teb no ib yam uas tsis muaj nuclear fission?</strong></p>
			
			<p>Tso cai rau kuv mus piav qhia txog yog vim li cas kuv xav tias thiaj li ntseeg tau hais txog qhov no.</p>
	
			<p>Thaum kuv loj hlob li, qhov chaw tshawb yeej nyob rau hauv lub qhov siab ntawm nws tag nrho glory. Lub siab uas nrog tus lom zem ciali yuav tau muab qhia los ntawm txhua leej txhua tus. Lub thrill tias nrog txhua tshiab milestone, whet peb appetites rau ntau. Thiab anticipation hais tias peb yeej twb mus muab ib tug txiv neej nyob rau hli thiab rov qab mus nws xyuam xim rau lub ntiaj teb, cia peb koom nrog txawm lub hnub nyoog zoo thiab swb los ntawm qhov kev pab cuam.</p>
			
			<p>Ua ntej ncav lub hom phiaj uas siab tshaj plaws, muaj ntau yam tseem ceeb ua tau. Ib qho ntawm feem ntau exhilarating ntawm no mas thaum astronauts tsoo dawb los ntawm lub ntiaj teb kab nyob saum ntuj. Rau cov thawj lub sij hawm, tib neeg twb tawm hauv kev ruaj ntseg ntawm lawv lub tsev ntiaj chaw. Peb zoo li cov neeg nrhiav thrill on qhov lom zem ntawm ib tug lub neej.</p>
			
			<p>Thiab ces feem ntau cov zoo tshaj plaws li tau tshwm sim. Lub astronauts glanced rov qab nyob rau hauv lub receding lub ntiaj teb, thiab pom rau ntawm thawj lub sij hawm lub xiav pob zeb ci ci uas yog peb lub tsev, thiab lawv tau sau nrog xis nyob los ntawm kev zoo nkauj ntawm yam uas lawv beheld. Lub yees duab duab uas lawv xa rov qab raug kis thoob plaws lub ntiaj teb no, thiab peb dhau lawm twb tau sau nrog xav.</p>
			
			<p>Tus tsis ruaj ntes nyob rau hauv cov duab ua rau peb ras ntawm peb tus kheej nyob rau hauv ib txoj kev uas transcended tag nrho cov nom tswv allegiances. Rau ib tug nyuag caij nyob rau hauv lub sij hawm, peb tsis nco qab txog lub Txias Tsov rog, peb teem ib sab peb sib txawv, thiab peb marveled nyob rau ntawm kev zoo nkauj ntawm lub ntiaj teb. Los ntawm no tshiab nco ntsoov peb paub xwb yuav ua li cas fragile peb qhov chaw nyob rau hauv lub ntiaj teb no mas, thiab yuav ua li cas perilously kaw peb mus destroying xwb lub tsev peb yuav puas tau muaj.</p>
			
			<p>Peb pib nrog ib lub siab ceev los mus kho peb cov kev txhuam. Nrog ib tug tawg ntawm kev ua si, peb ua hauj lwm kho peb tej teeb meem. Lub thoob ntiaj teb Treaty on nuclear riam phom loj hlob, thiab daim ntawv cog lus mus rau tag nrho cov saum toj no ban-av xeem ntawm nuclear riam phom los kuj tau pov thawj hais tias peb yuav tham txog peb muab qhia muaj nuj nqis thiab ua tau ntau tseeb cov hom phiaj. Nrog rau lub caij nplooj ntoos zeeg ntawm Berlin phab ntsa, thiab thawing ntawm kev sib raug zoo ntawm tus thawj xib fwb rivals ntawm Txias Tsov rog, peb pib thawj zaug loj heev ntawm kev rau siab tsom txo lub ntiaj teb no stockpile ntawm nuclear riam phom.</p>
			
			<p>Tab sis txij thaum uas lub sij hawm peb li tau poob peb fervor rau ib lub ntiaj teb no dawb los ntawm nuclear riam phom, thiab tsis ntev los no dag zog mus txuas ntxiv hais tias ua hauj lwm muaj tsis tau li tiag tiag txoj kev kawm. Tom qab plaub decades ntawm qaug zog tham, peb tsis tau txawm tias muaj peev xwm tswj tam sim no qhov teeb meem: lub thoob ntiaj teb nuclear treaties tau kav liam; tus laus ntiaj teb no cov khoom siv yog rusting; thiab tshiab riam phom nuclear kev tshawb fawb ntxiv mus.</p>
			
			<p><strong>Txoj cai ntshai ntawm tsov rog tau kom meej meej tsis.</strong> Yuav kom peb lub txaj muag, nws tau raug hloov los ntawm vague cog lus thiab cov lus npliag.</p>
			
			<p>Tu siab, riam phom nuclear tsis yog peb tsuas yog kev txhawj xeeb. Peb tam sim no paub hais tias nuclear fais fab nroj tsuag los kuj ua rau ib tug loj heev kev hem thawj rau peb precious lub ntiaj teb. Peb cia li pib mus rau awaken mus rau xeem txog tias nuclear fais fab nroj tsuag tsis tau 100% muaj kev ruaj ntseg.</p>
			
			<p>Cov tsaug nyob rau ntawm kev puas tsuaj Fukushima yeej yuav tsum muaj tshwm sim vim hais tias cov nuclear engineers tau npaj kom txhij rau txhua tus ua tau phem tshaj-rooj plaub pib zuas: lawv muaj kev ruaj ntseg cov kev cai nyob rau hauv qhov chaw rau txhua txhua piece cov twj; khiav hauj lwm cov txheej txheem rau txhua tus ua tau qhov teeb meem; contingency cov kev npaj rau thaum muaj tej yam thaum tsis ncaj ncees lawm; thiab ntau yam automatic tswv yim ua nyob rau hauv cov ntaub ntawv cov cuab yeej tseg tsis ua hauj lwm. Tag nrho cov kev lag luam tus zoo tshaj plaws engineers twb ua hauj lwm heev kom zoo zoo nrog rau kev nyab xeeb raws li lawv muaj feem xyuam to top. Tseem tseem ib yam dab tsi tshwm sim tsaug. Thiab nco ntsoov, qhov no tshwm sim 25 xyoo tom qab Chernobyl, nrog ample lub sij hawm kawm los ntawm yav tas los yuam kev.</p>
			
			<p>Hnub no kuv muaj ib tug heev zog lub sij hawm peb yuav luag txhua yam uas lub nuclear zog cov tuam txhab qhia rau kuv. Pheej yig tshaj lwm qhov? Huv tshaj li lub lwm? Muaj kev ruaj ntseg tshaj lwm? Tsis tau. Tsis tau. Tsis tau.</p>
			
			<p><strong>Tag nrho cov ntawm no cia li mus rau cua sov dej?</strong></p>
	
			<p>Ntawm no yog tej yam yooj yim qhov tseeb: muaj ib yam dab tsi tshwj xeeb txog hluav taws xob generated by nuclear fais fab nroj tsuag. Roj, thee, roj, thiab nuclear tag nrho cov siv tib txoj kev rau tsim kom muaj hluav taws xob. Nws yog yooj yim:</p>
			
			<ol>
				<li>Ib tug kub qhov chaw kub dej.</li>
				<li>Zog los ntawm cov dej kub thawb hniav tig.</li>
				<li>Muab qhov nqaim xov hlau nrog rau tig cav tsim hluav taws xob thaum uas muab los ntawm ib tug ntawv magnet.</li>
			</ol>
			
			<p>Tsim kom muaj hluav taws xob yog li yooj yim engineering. Yog li ntawd yog vim li cas mus rau teeb meem ntawm cua kub los ntawm dej cais atoms? Yog vim li cas tsim nuclear txaus ntshai pov tseg hais tias peb yuav tsis tau txais tshem ntawm? Yog vim li cas yuav qaub ib puag ncig nrog uranium kawb pob zeb thiab milling tias tsim tshuaj lom pov tseg-cov av? Thiab yog vim li cas muaj nuclear fais fab tuag tuam txhab uas muag exporting no txaus ntshai technology lug tsim lub teb chaws?</p>
			
			<p>Yog li ntawm no yog qhov kev thov. <strong> tau koj pab kuv los tham txog cov no yooj yim tseeb?</strong> Kuv tsis nug koj tuaj nrog ib lub koom haum los yog mus pub nyiaj, tab sis tsuas ntxiv koj lub npe rau daim ntawv teev nrog rau muaj peev xwm, cov neeg uas yuav hais lus nyob rau hauv dej siab ntawm ib lub ntiaj teb no yog tsis muaj nuclear fission.</p>
			
			<p>Kuv vam thiab cia siab qhov no yuav ua ib qho txawv.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>