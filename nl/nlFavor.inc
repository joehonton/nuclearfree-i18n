<?php
//=============================================================================
//
// File:         /i18n/nlFavor.inc
//
// Language:     PHP
//
// Contents:     nl = Dutch
//
// Author:       Joe Honton © 2013
//
// Initial date: September 25, 2013
//
//=============================================================================

require_once( __DIR__ . '/nlBasePage.inc' );


//-------------------------------------
class nlFavor extends nlBasePage
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
		return 'Ik heb een verzoek hebben';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'U kunt helpen door moedig spreken over de gevaren van kernsplijting.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'kernenergie, kernenergie, kernwapens, kernsplijting, Aarde, kokend water, elektriciteit';
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'Onze Mooie Blauwe Knikker!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Plechtig Beloven';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zweer het "niet meer kernsplijting" eed nu!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>U kunt Helpen door Moedig te Spreken</h1>
			
			<p>Hallo!</p>
			
			<p>Ik heb een verzoek. <strong>Wil je me helpen in mijn queeste om dit een wereld zonder kernsplijting?</strong></p>
			
			<p>Sta mij toe om uit te leggen waarom ik voel me zo sterk over dit.</p>
	
			<p>Toen ik opgroeide, verkenning van de ruimte was op het hoogtepunt van zijn volle glorie. De opwinding die het avontuur gepaard leek te worden door iedereen gedeeld. De sensatie dat elke nieuwe mijlpaal begeleid, prikkelen onze eetlust voor meer. En de verwachting dat we echt zouden gaan om een man op de maan en veilig terug te brengen naar de Aarde, hield ons bezig met zelfs de kleine successen en mislukkingen van het programma.</p>
			
			<p>Vóór het bereiken van dat einddoel, waren er veel belangrijke verworvenheden. Een van de meest opwindende van deze was toen de astronauten brak vrij van baan om de aarde. Voor het eerst werden mensen verlaten de veiligheid van hun thuisplaneet. We waren als sensatiezoekers op het avontuur van je leven.</p>
			
			<p>En dan de meest opmerkelijke gebeurde. De astronauten keek om naar het terugwijkende aarde, en zag voor het eerst het blauwe knikker dat ons huis was, en ze waren bijna overweldigd door de kostbare schoonheid van wat ze zagen. De fotografische beelden die ze teruggestuurd werden uitgezonden naar de wereld, en ook wij waren vol ontzag.</p>
			
			<p>De kwetsbaarheid gevangen in die foto's maakte ons bewust van onszelf op een manier die alle politieke loyaliteiten overstegen. Voor een kort moment in de tijd, we vergaten de Koude Oorlog, zetten we onze verschillen opzij, en we verbaasd over de schoonheid van de aarde. Vanuit dit nieuwe bewustzijn wisten we precies hoe fragiel onze plaats in het universum was, en hoe gevaarlijk dicht waren we aan het vernietigen van het enige huis dat we ooit zullen hebben.</p>
			
			<p>We wakker met een gevoel van urgentie om onze tekortkomingen te verhelpen. Met een uitbarsting van activiteit, werkten we aan onze problemen op te lossen. Het internationaal verdrag over de proliferatie van kernwapens, en het akkoord om alle bovengrondse testen van kernwapens te verbieden waren het bewijs dat we konden praten over onze gedeelde waarden en het bereiken van gemeenschappelijke doelen verstandig. Uiteindelijk, met de val van de Berlijnse Muur, en het ontdooien van de betrekkingen tussen de belangrijkste rivalen van de Koude Oorlog, zijn we begonnen met de eerste serieuze poging gericht op het terugdringen van de wereldwijde voorraad van kernwapens.</p>
			
			<p>Maar sinds die tijd lijken we onze vurigheid verloren te hebben voor een wereld zonder kernwapens, en de recente inspanningen om dat werk voort te zetten hebben niet veel gedaan echte vooruitgang. Na vier decennia van glansloos gesprekken, hebben we niet eens in staat geweest om de huidige staat van zaken te handhaven: de internationale nucleaire verdragen werden omzeild of genegeerd, de veroudering wereldwijde voorraden verslechteren, en nieuwe kernwapens onderzoek gaat verder.</p>
			
			<p><strong>Het beleid van afschrikking heeft duidelijk gefaald.</strong> Tot onze schaamte, is vervangen door vage beloften en holle retoriek.</p>
			
			<p>Helaas, kernwapens zijn niet onze enige zorg. We weten nu dat kerncentrales ook een ernstige bedreiging voor onze kostbare aarde vormen. We zijn net begonnen te ontwaken tot het besef dat kerncentrales niet gemaakt kan worden 100% veilig.</p>
			
			<p>De katastrofisch ramp in Fukushima nooit zou zijn gebeurd omdat de nucleaire ingenieurs voor elke mogelijke worst-case scenario had voorbereid: ze veiligheidsregels hadden in de plaats voor elk stuk van apparatuur, operationele procedures voor elke mogelijke situatie; rampenplannen voor als er dingen als verkeerd; en meerdere automatische compensatie mechanismen in het geval de reserve-apparatuur niet werkte. Alle van de beste ingenieurs van de industrie waren ijverig en gewetensvol bezig met veiligheid als hun hoogste prioriteit. Toch iets vreselijks gebeurd. En vergeet niet, dit gebeurde 25 jaar na Tsjernobyl, met ruim de tijd om te leren van eerdere fouten.</p>
			
			<p>Deze dagen heb ik een heel moeilijk geloven bijna alles dat de nucleaire energiebedrijven tell me. Goedkoper dan de alternatieven? Schoner dan de alternatieven? Veiliger dan de alternatieven? Nee. Nee. Nee.</p>
			
			<p><strong>Dit alles alleen maar om water te koken?</strong></p>
	
			<p>Hier is de simpele waarheid: er is niets bijzonders aan elektriciteit opgewekt door kerncentrales. Olie, kolen, gas en kernenergie gebruiken allemaal dezelfde mechanica voor het opwekken van elektriciteit. Het is simpel:</p>
			
			<ol>
				<li>Een warmtebron kookt water.</li>
				<li>Stoom van het kokende water dwingt turbinebladen te spinnen.</li>
				<li>Induktiespoelen aan de draaiende turbine creëren elektriciteit wanneer geroteerd door een magnetisch veld.</li>
			</ol>
			
			<p>Het genereren van elektriciteit is slechts elementaire natuurkunde en techniek. Dus waarom gaat u naar de moeite van het kokende water door het splitsen van atomen? Waarom gevaarlijk kernafval dat we nooit kunnen ontdoen van te maken? Waarom bederven de omgeving met uraniumwinning en frezen die giftige woestenijen creëert? En waarom zijn kernenergie bedrijven exporteren deze gevaarlijke technologie naar ontwikkelingslanden?</p>
			
			<p>Dus hier is het verzoek. <strong>Kunt u mij helpen om te praten over deze simpele feiten?</strong> Ik vraag je niet om een organisatie aan te sluiten of om geld te doneren, maar gewoon om uw naam toe te voegen aan de lijst met moedige individuen die in het voordeel van een wereld zal spreken zonder kernsplijting.</p>
			
			<p>Ik hoop dat dit zal een verschil maken.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>