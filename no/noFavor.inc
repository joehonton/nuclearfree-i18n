<?php
//=============================================================================
//
// File:         /i18n/noFavor.inc
//
// Language:     PHP
//
// Contents:     no = Norsk (Norwegian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/noBasePage.inc' );


//-------------------------------------
class noFavor extends noBasePage
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
		return "Jeg har en forespørsel";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Du kan hjelpe ved å snakke modig om farene ved fisjon.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kjernekraftverk, kjernekraft, atomkraft, atomvåpen, fisjon, jord, kokende vann, elektrisitet";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "vår vakre blå marmor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Høytidelig lover";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sverger "ikke mer fisjon" ed nå!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Du kan hjelpe ved å snakke modig</h1>
			
			<p>Hei,</p>
			
			<p>Jeg har en forespørsel. <strong>Vil du hjelpe meg i min søken etter å gjøre dette til en verden uten kjernefysisk fisjon?</strong></p>
			
			<p>Tillat meg å forklare hvorfor jeg føler meg så sterkt om dette.</p>
	
			<p>Da jeg vokste opp, var plass leting på høyden av sin fulle prakt. Spenningen som fulgte eventyret syntes å være felles for alle. Spenningen som fulgte hver ny milepæl, skjerpe våre lyster for mer. Og forventning at vi virkelig skulle sette en mann på månen og returnere ham trygt til Jorden, holdt oss engasjert med selv de små suksesser og fiaskoer i prosjektet.</p>
			
			<p>Før nå det ultimate målet, var det mange viktige prestasjoner. En av de mest spennende av disse var da astronautene brøt fri fra bane rundt jorda. For første gang ble mennesker forlater sikkerheten til deres hjemplanet. Vi var som spenningssøkende på eventyr for livet.</p>
			
			<p>Og så er det mest bemerkelsesverdige ting skjedde. Astronautene kikket tilbake på viker Jorden, og så for første gang den blå marmor som var vårt hjem, og de ble nesten overveldet av den dyrebare skjønnheten av det de fikk se. Fotografiske bilder som de sendte tilbake ble kringkastet til hele verden, og vi også var fylt av ærefrykt.</p>
			
			<p>Sikkerhetsproblemet fanget i disse bildene gjort oss bevisst på oss selv på en måte som overskredet all politikk. For et kort øyeblikk i tid, vi har glemt om den kalde krigen, setter vi til side våre forskjeller, og vi undret på skjønnheten i jorden. Fra denne nye bevisstheten visste vi akkurat hvor skjør vår plass i universet var, og hvor farlig nær vi var å ødelegge det eneste hjemmet vi noensinne vil ha.</p>
			
			<p>Vi våknet med en følelse av at det haster å løse våre svakheter. Med et utbrudd av aktivitet, jobbet vi for å løse våre problemer. Den internasjonale traktaten om kjernefysiske våpen spredning, og avtalen om å forby all over bakken testing av kjernefysiske våpen var et bevis på at vi kunne snakke om våre felles verdier og oppnå felles fornuftige mål. Til slutt, med fallet av Berlinmuren, og opptining av forholdet mellom de viktigste rivaler av den kalde krigen, begynte vi den første alvorlige forsøk på å redusere den globale lager av atomvåpen.</p>
			
			<p>Men siden den gang synes vi å ha mistet vår glød for en verden uten atomvåpen, og siste innsats for å fortsette dette arbeidet ikke har gjort mye reell fremgang. Etter fire tiår med laber samtaler, vi har ikke engang vært i stand til å opprettholde dagens tilstand: de internasjonale kjernefysiske avtaler har blitt omgått eller ignorert, den aldrende globale lagrene er forverret, og nye kjernefysiske våpen forskning fortsetter.</p>
			
			<p><strong>Politikk med avskrekking tydelig har feilet.</strong> Til vår vanære, har det blitt erstattet av vage løfter og tom retorikk.</p>
			
			<p>Dessverre atomvåpen er ikke vår eneste bekymring. Vi vet nå at atomkraftverkene også utgjøre en alvorlig trussel mot vår dyrebare jorden. Vi er bare begynnelsen for å vekke til den erkjennelse at kjernekraftverk ikke kan gjøres 100% sikker.</p>
			
			<p>Katastrofen ved Fukushima aldri burde ha skjedd fordi de kjernefysiske ingeniører hadde forberedt for alle mulige verstetenkelige scenariet de hadde sikkerhetsregler på plass for hver del av utstyret; operasjonsprosedyrer for alle mulige situasjoner; beredskapsplaner for når ting når galt, og flere automatiske kompenserende mekanismer i tilfelle forbeholder utstyret ikke fungerte. Alle av bransjens beste ingeniørene jobbet flittig og samvittighetsfullt med sikkerhet som sin høyeste prioritet. Likevel noe forferdelig skjedde. Og husk, skjedde dette 25 år etter Tsjernobyl, med god tid til å lære av tidligere feil.</p>
			
			<p>Disse dagene jeg har en veldig hard tid å tro nesten hva som helst for at kjernefysisk energi selskaper fortelle meg. Billigere enn alternativene? Renere enn alternativene? Sikrere enn alternativene? Nei. Nei. Nei.</p>
			
			<p><strong>Alt dette bare for å koke vann?</strong></p>
	
			<p>Her er den enkle sannheten: det er ingenting spesielt med elektrisitet generert av kjernekraftverk. Olje, kull, gass og kjernekraft alle bruker de samme mekanikk for å generere elektrisitet. Det er enkelt:</p>
			
			<ol>
				<li>En varmekilde koker vann.</li>
				<li>Damp fra kokende vann tvinger turbinbladene å spinne.</li>
				<li>Induksjonsspoler festet til den roterende turbinen skape elektrisitet når rotert gjennom et magnetisk felt.</li>
			</ol>
			
			<p>Generere elektrisitet er bare elementær fysikk og ingeniørfag. Så hvorfor gå til bryet med kokende vann ved å splitte atomer? Hvorfor lage farlig atomavfall at vi aldri kan bli kvitt? Hvorfor ødelegge miljøet med uran gruvedrift og fresing som skaper giftige avfall-lander? Og hvorfor er kjernekraft selskaper eksporterer dette farlig teknologi til utviklingsland?</p>
			
			<p>Så her forespørselen. <strong>Kan du hjelpe meg å snakke om disse enkle fakta?</strong> Jeg ber deg ikke om å bli med i en organisasjon eller for å donere penger, men rett og slett å legge ditt navn til listen over modige personer som vil tale i favør av en verden uten kjernefysisk fisjon.</p>
			
			<p>Jeg håper dette vil gjøre en forskjell.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>