<?php
//=============================================================================
//
// File:         /i18n/soFavor.inc
//
// Language:     PHP
//
// Contents:     so = Af-Soomaali  (Somali)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/soBasePage.inc' );


//-------------------------------------
class soFavor extends soBasePage
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
		return "Waxaan haystaa codsi";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Waxaad ku caawin kartaa hadlayay dhiirranaada saabsan khatarta uu qashin attam nukliyeerka.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "xarumaha nukliyeerka, nukliyeerka, tamarta nukliyeerka, hubka nukliyeerka, qashin attam, dhulka, biyaha karkaraya, korontada";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "marmar buluug qurux badan!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Furtaa ballanqaadi";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Dhaaro, ee "maya qashin attam" dhaar hadda!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Waxaad ku caawin kartaa dhiirranaada hadlayay</h1>
			
			<p>Salaaman</p>
			
			<p>Waxaan haystaa codsi. <strong>Aad iga caawin doonaa in aan baaris si loo tan dunida ah aan lahayn qashin attam nukliyeer?</strong></p>
			
			<p>Ii ogoloow in aan sharax sababta ka dareemayaa in aan si adag saabsan tan.</p>
	
			<p>Markii aan soo koraya, dayax gacmeed ahaa ay ugu sarreysey ee sharafteedii buuxa. Yididiilo in la socon tacabur ka muuqataa si la wadaago qof kasta. Kadhiman in la socon kasta baaqii cusub, naga dhigay kuwa rabto in ka badan. Markaasaa Horâ in aanu runtii socdeen si ay u saaray nin on dayaxa iyo isaga si nabad ah ku laabto dhulkayga, noo hayn ku hawlan arrinta ay la xataa guusha ay yar yar iyo guuldarraysatay ee mashruuca.</p>
			
			<p>Ka hor inta gaadho hadafka ah in ugu dambayn, waxaa jiray guulaha muhiim badan. Mid ka mid ah xiiso badan oo kuwan ka ahaa markii nin u tababaran dayax ama cir bixiyeen ah oo xor ka ah idiinna dhulkayga jebiyey. Waa markii ugu horraysay, aadanuhu ayaa la tegaayo ammaanka ee meeraha guriga ay. Waxaan ahaayeen sida doonka ah kadhiman on tacabur ee noloshooda oo idil.</p>
			
			<p>Ka dibna wax ugu cajiibsan dhacay. Nin u tababaran dayax ama cir bixiyeen dib u soo boxo oo dhulka ku sii adkeeyey, oo wuxuu arkay markii ugu horeysay oo marmar ah ee buluugga ah in uu ahaa gurigayaga, waxayna ahaayeen kuwo ku dhowaad qarqiyey by quruxda qaaliga ah ee waxa ay u eegayay. Sawirada in ay dib u soo diray ayaa lagu warbaahin dunida, iyo waxaan sidoo kale ku jiray wada yaabeen.</p>
			
			<p>Nuglaanta qabtay sawiro kuwa naga dhigay miyir nafteena hab in cilaaqaad wanaagsani siyaasadda. Muddo gaaban ee waqtiga, waxaan halmaamay saabsan dagaalkii qaboobaa, waxaan meel iska dhigeen kala duwan, oo sida aynu ka yaabeen quruxda dhulka. Laga soo bilaabo tan miyir cusub waxaan ogaa sida jilicsan ee meesha aannu ee koonkan ahaa, iyo sida aad iyo aad ayay u dhow, waxaana ku jiray in ay ku burburiyey guriga kaliya ee aynu mar uun yeelan doonaa.</p>
			
			<p>Waxaan kula dareen si degdeg ah ka toosay si uu u xaliyo alaxwaal. Iyada oo dilaaca ah ee waxqabadka, waxaan ka shaqeeyay si uu u xaliyo dhibaatooyinka. Ardadii mid caalami ah on mooqifkooda hubka nukliyeerka, iyo heshiiska mamnuucidda dhamaan baaritaanka kor ku xusan-dhulka hubka nukliyeerka ahaayeen caddeynta in aanu la hadli kartaa saabsan qiimaha la wadaago iyo gaaro caadi gool dareensan. Ugu dambayntii, kula dayrta ee Wall Berlin, iyo fududeeyntii ee xiriirka u dhexeeya xafiiltamaan maamulaha dagaalkii qaboobaa, waxaan bilaabay dadaal uu khatar ah marka hore loogu talagalay yareynta kaydyo caalamka ee hubka nukliyeerka.</p>
			
			<p>Laakiin tan iyo wakhtigaas waxaan u muuqdaan in ay naga dhinteen kulmisay ee dunida a free from hubka nukliyeerka, iyo dadaalka ay dhawaan in ay sii wadaan shaqada in aan wax badan horumar dhab ah. Ka dib markii afar sano oo wadahadal qaxar ah, waxaan xitaa awoodin in ay joogteeyaan gobolka ee hadda arrimaha: heshiisyada nukliyeerka oo caalami ah ayaa iska indho; gaboobay kaydka caalamiga ah waxaa la sii xumaanaysa, iyo cusub cilmi-baarista hubka nukliyeerka ayaa sii.</p>
			
			<p><strong>Siyaasadda ee cabsi ayaa si cad u fashilantay.</strong> Xishood noo on, waxa lagu bedelay ballamihii caddayn iyo naxliga xanbaarsan madhan.</p>
			
			<p>Waxaa wax laga xumaado, hubka nukliyeerka ma aha oo kaliya our. Hadda waxaanu ogaanay in quwadda nukliyarka korontada ka sidoo kale khatar ku keeni kara halis ah in ay naga qaali ah dhulkayga. Waxaan hadda bilaabay in ay ka toosi sah ah in awood nukliyar ma la samayn karaa 100% ammaan.</p>
			
			<p>Masiibo at Fukushima marna dhacay waa sababta oo injineeradii nukliyeerka diyaariyey ugu xun-dhacdooyinka aduunka ugu kasta oo suurto gal ah: waxay lahaayeen xeerarka ammaanka meel for kasta oo qalabka; nidaamka howl for xaalad kasta oo suurto gal ah; qorshe loogu talagalay marka wax khalad ah baxay; iyo farsamooyinka kala duwan magdhowga automatic ay dhacdo in qalab reserve oo shaqeyn weydey. Oo dhan ee injineerada ugu wanaagsan ee warshadaha ee ay ahaayeen dadaal iyo ogsoon la shaqeynta nabadgelyada sida ay mudnaanta sare. Haddana weli wax laga cabsado oo ka dhacay. Xusuuso, tan dhacday 25 sano ka dib Chernobyl, oo leh waqti ku filan si ay u bartaan qaladkooda hore.</p>
			
			<p>Maalmahan waxaan haystaa waqti aad u adag rumaysan dhowaad wax in shirkadaha tamarta nukliyeerka, ii sheeg. Ka raqiisan lagu beddelan karo? Nadiifsan badan lagu beddelan karo? Safer badan lagu beddelan karo? Maya. Maya. Maya.</p>
			
			<p><strong>Oo dhan ee tan kaliya karkariyo biyaha?</strong></p>
	
			<p>Halkan waa runta fudud: jirto gaar ah saabsan korontada ee ay quwadda nukliyarka korontada ka waxba. Saliid, dhuxusha, gaaska, iyo nukliyeerka oo dhan ay isticmaalaan makaani isku mid ah abuurid korontada. Waa sahlan:</p>
			
			<ol>
				<li>Kuleylka biyo karkaraya.</li>
				<li>Uumi oo ka karkaraya samaysa marawaxadaha ciidamada biyo aad u leexato.</li>
				<li>Gariirad induction ku lifaaqan samaysa marawaxadaha leexdo abuuro korontada marka la wareejiyo iyada oo magnetka.</li>
			</ol>
			
			<p>Abuuritaan korontada waa uun fiisigis waxyaalaha iyo injineernimada. Sidaas sababta tag dhibaato biyo karkaraya by tageynaa atamka? Waa maxay sababta loo abuuro qashinka nukliyeerka khatar ah oo aan waligood kama saari karaan ee? Waa maxay sababta booli ah deegaanka oo leh macdanta yuuraaniyamka iyo axdi qarameedka abuurta qashinka-dalalkan oo sun? Iyo sababta ay yihiin shirkadaha nukliyeerka dhoofinta tan teknoloji waxay khatar u yihiin dalalka soo koraya?</p>
			
			<p>Sidaas halkan waa codsiga. <strong>Aad iga caawin kartaa in ay ka hadlaan kuwan xaqiiqooyin fudud?</strong> Ma waxaa layga kaa codsaneyna in aad ku biirto urur ama ku deeqdo lacag, laakiin kaliya in ay aad magacaaga liiska shakhsiyaad u dhiirranow, kuwaas oo ku hadli doonaa raalli dunida ah aan lahayn qashin attam nukliyeerka ku dar.</p>
			
			<p>Waxaan rajaynayaa in tan ka dhigi doonaa faraqa u ah.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>