<?php
//=============================================================================
//
// File:         /i18n/gaFavor.inc
//
// Language:     PHP
//
// Contents:     ga = Gaeilge (Irish)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/gaBasePage.inc' );


//-------------------------------------
class gaFavor extends gaBasePage
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
		return "Tá mé iarratas";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Is féidir leat cabhrú ag labhairt misniúil faoi na contúirtí a scoilteadh núicléach.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "cumhacht núicléach, fuinneamh núicléach, airm núicléacha, eamhnú, Earth, fiuchphointe uisce, leictreachas";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "ár marmair álainn gorm!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Sollúnta Gealltanas";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Swear an rogha "gan níos mó eamhnaithe" mionn anois!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Is féidir leat cabhrú ag labhairt misniúil</h1>
			
			<p>Dia duit,</p>
			
			<p>Tá mé iarraidh. <strong>An mbeidh tú ag cabhrú liom i mo rompu a dhéanamh ar an domhan gan eamhnaithe núicléach?</strong></p>
			
			<p>Cead dom a mhíniú cén fáth, dar liom mar sin go láidir faoi seo.</p>
	
			<p>Nuair a bhí mé ag fás suas, bhí spás a thaiscéaladh ag an airde a ghlóir iomlán. An excitement atá ag gabháil leis an eachtra chuma a bheith i bpáirt ag gach duine. An thrill atá ag gabháil leis gach cloch mhíle nua, whet ár goil ar feadh níos mó. Agus an oirchill go raibh muid ag dul i ndáiríre a chur le fear ar an ngealach agus seol ar ais dó go sábháilte go dtí an Domhan, choinnigh dúinn ag gabháil le fiú an rath mion agus ar aon chliseadh an chláir.</p>
			
			<p>Sular shroich an sprioc sin deiridh, bhí go leor éachtaí tábhachtacha. Ceann de na is exhilarating de na moltaí seo nuair a bhris na spásairí saor ó bhfithis na Cruinne. Don chéad uair, bhí daoine ag fágáil le sábháilteacht a gcuid pláinéad bhaile. Bhí muid cosúil le lucht iarrtha thrill ar an eachtra ar feadh an tsaoil.</p>
			
			<p>Agus ansin a tharla an rud is suntasaí. Na spásairí spléach ar ais ag an Domhan receding, agus chonaic don chéad uair ar an marmair gorm go raibh ár bhaile, agus bhí siad faoi léigear beagnach ag an áilleacht lómhar de cad a beheld siad. Craoladh na híomhánna grianghrafadóireachta gur chuir siad ar ais go dtí ar fud an domhain, agus bhí muid ró-awestruck.</p>
			
			<p>An leochaileacht a gabhadh sna grianghraif a dhéanamh linn feasach dúinn féin ar bhealach a transcended gach allegiances polaitiúla. Ar feadh nóiméad gairid i am, dearmad orainn mar gheall ar an Cogadh Fuar, a leag muid leataobh ár difríochtaí, agus iontas againn ar an áilleacht na Cruinne. Ón an Chonaic nua a fhios againn cé chomh leochaileach a bhí ár n-áit i na Cruinne, agus conas perilously gar a bhí againn chun milleadh an bhaile amháin a bheidh againn riamh.</p>
			
			<p>Awakened againn le tuiscint ar práinne a shocrú ár lochtanna. Le pléasctha de ghníomhaíocht, d'oibrigh muid a shocrú ár gcuid fadhbanna. Ba iad na conarthaí idirnáisiúnta ar airm núicléacha iomadú, agus an comhaontú a thoirmeasc gach tástáil os cionn talún na n-arm núicléach cruthúnas go raibh muid ábalta labhairt faoi ár comhluachanna agus spriocanna ciallmhar comónta a bhaint amach. Sa deireadh, leis an titim ar an Bhalla Bheirlín, agus an leá ar an gcaidreamh idir an príomhoide iomaitheoirí an Chogaidh Fhuair, thosaigh muid an chéad iarracht dáiríre dírithe ar laghdú an stockpile domhanda na n-arm núicléach.</p>
			
			<p>Ach ós rud é go am is cosúil go bhfuil caillte againn díograis do dhomhan saor ó airm núicléacha, agus iarrachtaí le déanaí chun leanúint ar aghaidh go n-oibríonn nach bhfuil dul chun cinn i bhfad níos fíor. Tar éis ceithre scór bliain de chainteanna lackluster, ní mór dúinn a bheith fiú in ann a choimeád ar bun ar staid reatha na cúrsaí: na conarthaí núicléach idirnáisiúnta a bheith circumvented nó neamhaird; na stoc-chairn domhanda ag dul in aois ag dul in olcas, agus leanann taighde airm núicléacha nua.</p>
			
			<p><strong>Tá an polasaí díspreagtha theip go soiléir.</strong> Is mór an náire, tá sé curtha in ionad geallúintí doiléir agus reitric folamh.</p>
			
			<p>Faraor, nach bhfuil airm núicléacha ár n-imní amháin. Tá a fhios againn anois go bhfuil stáisiúin chumhachta núicléacha údar freisin ina bhagairt thromchúiseach ar ár Earth lómhara. Táimid ag tosú ach a mhúscailt le réadú nach féidir stáisiúin chumhachta núicléacha a dhéanamh 100% sábháilte.</p>
			
			<p>Ba chóir an tubaiste tubaisteach ag Fukushima riamh a tharla mar gheall go raibh ullmhaithe na hinnealtóirí núicléach do gach cás is measa atá ann: bhí siad rialacha sábháilteachta i bhfeidhm do gach píosa trealaimh; nósanna imeachta oibriúcháin do gach cás is féidir; pleananna teagmhasacha nuair a rudaí nuair a mícheart; agus meicníochtaí cúitimh il uathoibríoch i gcás nach raibh an trealamh cúlchiste ag obair. Gach ceann de na tionscail is fearr innealtóirí ag obair go dícheallach agus go coinsiasach leis an tsábháilteacht mar a n-thosaíocht. Ach fós rud éigin uafásach a tharla. Agus cuimhnigh, tharla sé seo 25 bliana tar éis Chernobyl, le go leor ama a fhoghlaim ó bhotúin roimhe sin.</p>
			
			<p>Na laethanta seo tá mé am an-deacair a chreidiúint beagnach aon rud a insint na cuideachtaí fuinnimh núicléach dom. Níos saoire ná na roghanna eile? Glantóir ná na roghanna eile? Níos sábháilte ná na roghanna eile? Níl. Níl. Níl.</p>
			
			<p><strong>Seo go léir ach uisce a fhiuchadh?</strong></p>
	
			<p>Seo é an fhírinne simplí: níl aon rud speisialta faoi leictreachas a ghintear ag stáisiúin chumhachta núicléacha. Ola, gual, gás agus núicléach go léir úsáid a bhaint as an Meicnic céanna le haghaidh leictreachas a ghiniúint. Tá sé simplí:</p>
			
			<ol>
				<li>A fhiuchann fhoinse teasa uisce.</li>
				<li>Fórsaí Gaile ó fiuchphointe uisce lanna tuirbín a casadh.</li>
				<li>Tá cornaí ionduchtaithe acu a ghabhann leis an tuirbín sníomh a chruthú leictreachas nuair a rothlú trí réimse maighnéadach.</li>
			</ol>
			
			<p>Tá leictreachas a ghiniúint ach fisic eiliminteach agus innealtóireachta. Mar sin, cén fáth téigh go dtí an trioblóid de fiuchphointe uisce ag adaimh scoilteadh? Cén fáth a chruthú dramhaíl núicléach contúirteach riamh gur féidir linn a fháil réidh? Cén fáth spoil an timpeallacht le mianadóireachta úráiniam agus muilleoireacht a chruthaíonn wastelands tocsaineach? Agus cén fáth a bhfuil cuideachtaí cumhachta núicléach onnmhairithe an teicneolaíocht seo contúirteach do thíortha i mbéal forbartha?</p>
			
			<p>Mar sin, tá anseo an t-iarratas. <strong>An féidir leat cabhrú liom a labhairt faoi na fíricí simplí?</strong> Níl mé ag iarraidh ort a bheith páirteach eagraíocht nó airgead a bhronnadh, ach go simplí chun d'ainm a chur leis an liosta de na daoine cróga a bheidh ag labhairt i bhfabhar ar domhan gan scoilteadh núicléach.</p>
			
			<p>Tá súil agam go mbeidh sé seo difríocht a dhéanamh.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>