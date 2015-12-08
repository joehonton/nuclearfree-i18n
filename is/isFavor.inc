<?php
//=============================================================================
//
// File:         /i18n/isFavor.inc
//
// Language:     PHP
//
// Contents:     is = Íslenska (Icelandic)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/isBasePage.inc' );


//-------------------------------------
class isFavor extends isBasePage
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
		return "Ég er með beiðni";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Þú getur hjálpað til með því að tala hugrekki um hættur kjarnaklofnun.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kjarnorku aðstöðu, kjarnorku, kjarnorku vopn, kjarnaklofnun, Earth, sjóðandi vatn, rafmagn";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "fallegur blár marmari okkar!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "hátíðlega lofa";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sverja "ekki meira kjarnaklofnun" eið núna!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Þú getur hjálpað til með því að tala hugrekki</h1>
			
			<p>Halló,</p>
			
			<p>Ég er með beiðni. <strong>Ætlarðu að hjálpa mér í leit minni að gera þetta að heimur án kjarnaklofnun?</strong></p>
			
			<p>Leyfa mér að útskýra hvers vegna mér finnst svo sterklega um þetta.</p>
	
			<p>Þegar ég var að alast upp, rúm könnun var á hæð fullri dýrð þess. Spennan sem fylgja ævintýri virtist vera hluti af öllum. The unaður sem fylgdi hverja nýja áfanga, brýni lyst okkar fyrir fleiri. Og tilhlökkun sem við virkilega ætluðum að setja mann á tunglið og aftur hann örugglega til jarðar, haldið okkur þátt með jafnvel minniháttar árangur og mistök í áætluninni.</p>
			
			<p>Áður ná að æðsta markmið, voru mörg mikilvæg afrek. Eitt af því sem mest spennandi þeirra var þegar geimfararnir braut ókeypis frá sporbraut jarðar. Fyrir the fyrstur tími, menn voru að yfirgefa öryggi jörðinni heimili þeirra. Við vorum eins og umsækjendur unaður á ævintýri af ævi.</p>
			
			<p>Og þá mest ótrúlegur hlutur gerðist. Geimfararnir leit aftur á víkja jarðar, og sá í fyrsta skipti bláa marmara sem var heimili okkar, og þeir voru næstum óvart með dýrindis fegurð hvað þeir sáu. Ljósmynda myndir sem þeir senda til baka voru útvarpað til heimsins, og við líka vorum lotningu.</p>
			
			<p>The varnarleysi tekin í þeim ljósmyndum gert okkur meðvituð um okkur sjálf á þann hátt sem transcended öllum pólitískum allegiances. Fyrir stutta stund í einu, gleymdi við um kalda stríðsins, við setjum til hliðar ágreining okkar, og við undraðist á fegurð jarðarinnar. Frá þessu nýja meðvitund við vissum hversu brothætt sæti okkar í alheiminum var, og hversu perilously loka við vorum að eyðileggja aðeins heim við munum aldrei hafa.</p>
			
			<p>Við vakna með tilfinningu brýnt að laga brestina. Með springa af virkni, vann við að laga vandamál okkar. Alþjóðleg samningar um kjarnavopn útbreiðslu, og samkomulagi um að banna alla yfir-jörð prófanir kjarnavopna voru sönnun þess að við gætum talað um sameiginlegum gildum okkar og ná sameiginlegum skynsamlegar markmiðum. Að lokum, með falli Berlínarmúrsins, og þess þíðingu af samskiptum helstu keppinautum í kalda stríðinu, tók Við Fyrsta alvarlega viðleitni miðar að draga úr hnattrænni birgðir af kjarnorkuvopnum.</p>
			
			<p>En frá þeim tíma við virðast hafa misst fervor okkar fyrir heiminn frjáls gegn kjarnorkuvopnum, og nýlegar viðleitni til að halda áfram að vinna hafa ekki gert mikið alvöru framfarir. Eftir fjóra áratugi af daufur viðræður, við höfum ekki einu sinni tekist að halda núverandi stöðu mála: alþjóðleg kjarnorku samningar hafa verið sniðgengin eða hunsað, en öldrun alþjóðlegt birgðir, eru versnandi og ný kjarnorku vopn rannsóknir halda áfram.</p>
			
			<p><strong>Stefna fælingu hefur greinilega mistekist.</strong> Til skammar okkar, það hefur verið skipt út óljós loforð og tómt orðagjálfur.</p>
			
			<p>Því miður eru kjarnavopn ekki aðeins áhyggjuefni okkar. Við vitum nú að kjarnorkuver einnig sitja alvarleg ógnun við dýrmætur Earth okkar. Við erum bara að byrja að vakna að þeirri vitneskju að kjarnorkuver er ekki hægt að gera 100% örugg.</p>
			
			<p>Skelfilegar hörmung á Fukushima aldrei ætti að hafa gerst vegna þess að kjarnorku verkfræðingar höfðu undirbúið fyrir öll möguleg versta: þeir höfðu öryggisreglur í stað fyrir hvert stykki af útbúnaður, verklagsreglum fyrir öll möguleg aðstæður, skipulagi viðbúnaðar við þegar hlutirnir þegar rangt; og margar sjálfvirkar aðferðir uppbótarúrræði tilviki panta búnaður virkaði ekki. Allar bestu verkfræðinga í iðnaði voru að vinna af kostgæfni og samviskusemi og öryggi sem forgangsverkefni þeirra. En samt eitthvað hræðilegt gerðist. Og munið, þetta kom 25 árum eftir Chernobyl, með nægan tíma til að læra af fyrri mistökum.</p>
			
			<p>Þessa dagana hef ég mjög erfitt með að trúa nánast hvað sem kjarnorku orkufyrirtæki segja mér. Ódýrari en aðrir kostir? Hreinni en val? Öruggari en val? Nei. Nei. Nei.</p>
			
			<p><strong>Allt þetta bara til að sjóða vatn?</strong></p>
	
			<p>Hér er einfaldur sannleikurinn: það er ekkert sérstakt um raforku kjarnorkuver. Olía, kol, gas og kjarnorku allir nota sömu aflfræði til raforkuframleiðslu. Það er einfalt:</p>
			
			<ol>
				<li>A uppspretta hita sýður vatn.</li>
				<li>Gufa frá sjóðandi vatni þvingar hverflum blað að snúast.</li>
				<li>Framkalla rafspólur fylgir spuna hverflinum búa til rafmagn þegar snúið um segulsviði.</li>
			</ol>
			
			<p>Raforkuframleiðslu er bara náttúru eðlisfræði og verkfræði. Svo hvers vegna að fara til the vandræði af sjóðandi vatni með atómum skerandi? Hvers vegna að búa til hættulegt kjarnorkuúrgangs sem við getum aldrei losna við? Hvers vegna spilla umhverfi með námuvinnslu úran og mölun sem skapar spilliefni-lendir? Og hvers vegna eru kjarnorku orkufyrirtæki flytja þetta hættulegt tækni til þróunarlanda?</p>
			
			<p>Svo er hér að beiðni. <strong>Getur þú hjálpað mér að tala um þessar einföldu staðreyndir?</strong> Ég er ekki að biðja þig að taka þátt í stofnun eða gefa peninga, heldur einfaldlega að bæta við nafnið þitt á lista yfir hugrökk einstaklinga sem vilja tala í hag heimur án kjarnaklofnun.</p>
			
			<p>Ég vona að þetta mun gera a mismunur.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>