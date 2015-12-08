<?php
//=============================================================================
//
// File:         /i18n/svFavor.inc
//
// Language:     PHP
//
// Contents:     sv = Svenska (Swedish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/svBasePage.inc' );


//-------------------------------------
class svFavor extends svBasePage
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
		return "Jag har en förfrågan";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Du kan hjälpa till genom att tala modigt om farorna av kärnklyvning.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kärntekniska anläggningar, kärnkraft, kärnvapen, kärnklyvning, jord, kokande vatten, el";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "vår vackra blå marmor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Lovar högtidligt";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Svär det "inte mer kärnklyvning" ed nu!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Du kan hjälpa till genom att tala modigt</h1>
			
			<p>Hej,</p>
			
			<p>Jag har en förfrågan. <strong>Kan du hjälpa mig i min strävan att göra detta till en värld utan kärnklyvning?</strong></p>
			
			<p>Tillåt mig att förklara varför jag känner så starkt för detta.</p>
	
			<p>När jag växte upp, var rymdutforskning på höjden av sin fulla prakt. Den spänning som följde äventyret verkade delas av alla. Spänningen som följde varje ny milstolpe, vässa vår aptit för mer. Och den förväntan som vi verkligen skulle sätta en människa på månen och tillbaka honom säkert till jorden, hållit oss sysselsatta med även de mindre framgångar och misslyckanden i projektet.</p>
			
			<p>Innan man når det slutliga målet, det fanns många viktiga landvinningar. En av de mest spännande av dessa var när astronauterna bröt sig fri från omloppsbana runt jorden. För första gången, var människor lämnar säkerheten i deras hemplanet. Vi var som söker spänning på ditt livs äventyr.</p>
			
			<p>Och sedan det mest märkliga hände. Astronauterna sneglade tillbaka på vikande jorden, och såg för första gången den blå marmor som var vårt hem, och de var nästan överväldigade av den dyrbara skönheten av vad de såg. De fotografiska bilder som de skickade tillbaka sändes till världen, och även vi var överväldigad.</p>
			
			<p>Sårbarheten fångat i dessa bilder gjorde oss medvetna om oss själva på ett sätt som korsat all politik. För ett kort ögonblick i tiden, glömde vi om det Kalla Kriget, som vi våra olikheter åt sidan, och vi förundrades över skönheten i jorden. Från denna nya medvetenhet vi visste precis hur bräcklig vår plats i universum var, och hur farligt nära vi var att förstöra det enda hem vi någonsin kommer att få.</p>
			
			<p>Vi vaknade med en känsla av brådska för att fixa våra brister. Med en explosion av aktivitet, arbetade vi för att fixa våra problem. Det internationella fördraget om kärnvapenspridning, och överenskommelsen om att förbjuda alla ovan jord kärnvapenprov var ett bevis på att vi kunde prata om våra gemensamma värderingar och uppnå gemensamma förnuftiga mål. Så småningom, med nedgången av Berlinmuren, och upptining av förbindelserna mellan de främsta rivaler i det Kalla Kriget, började vi den första allvarliga ansträngningar för att minska den globala lager av kärnvapen.</p>
			
			<p>Men sedan den tiden vi tycks ha förlorat vår glöd för en värld fri från kärnvapen, och nya ansträngningar för att fortsätta att arbetet inte har gjort mycket stora framsteg. Efter fyra årtionden av svaga samtal, har vi inte ens kunnat behålla den nuvarande situationen: den internationella kärnkraftsindustrin fördrag har kringgåtts eller ignorerats, åldrande globala lagren försämras, och nya kärnvapen forskning fortsätter.</p>
			
			<p><strong>Politiken avskräckande tydligt har misslyckats.</strong> Till vår skam, har det ersatts av vaga löften och tom retorik.</p>
			
			<p>Tyvärr, kärnvapen är inte vårt enda bekymmer. Vi vet nu att kärnkraftverken utgör också ett allvarligt hot mot vår dyrbara jord. Vi har precis börjat vakna till insikt om att kärnkraftverk inte kan göras 100% säker.</p>
			
			<p>Katastrofen i Fukushima aldrig borde ha hänt eftersom de nukleära ingenjörer hade förberett för alla tänkbara värsta scenariot: de hade säkerhetsregler på plats för varje utrustning, operativa rutiner för varje tänkbar situation, beredskapsplaner för när saker när fel, och flera automatiska kompenserande mekanismer vid reserven utrustningen inte fungerade. Samtliga av branschens bästa ingenjörer arbetade flitigt och samvetsgrant med säkerhet som högsta prioritet. Ändå något hemskt hänt. Och kom ihåg, skedde detta 25 år efter Tjernobyl, med gott om tid att lära sig av tidigare misstag.</p>
			
			<p>Dessa dagar har jag mycket svårt att tro nästan vad som helst som de nukleära energibolagen berätta. Billigare än alternativen? Renare än alternativen? Säkrare än alternativen? Nej. Nej. Nej.</p>
			
			<p><strong>Allt detta bara för att koka vatten?</strong></p>
	
			<p>Här är den enkla sanningen: det finns inget speciellt med el från kärnkraftverk. Olja, kol, gas och kärnkraft alla använder samma mekanik för att generera elektricitet. Det är enkelt:</p>
			
			<ol>
				<li>En värmekälla kokar vatten.</li>
				<li>Ånga från kokande vatten tvingar turbinblad att snurra.</li>
				<li>Induktionsspolarna bifogas snurrande turbinen skapar elektricitet när roteras genom ett magnetfält.</li>
			</ol>
			
			<p>Elproduktion är bara elementär fysik och teknik. Så varför gå till besväret att kokande vatten genom att dela atomer? Varför skapar farligt kärnavfall som vi aldrig kan bli av med? Varför förstöra miljön med uranbrytning och anrikning som skapar giftiga avfall-länderna? Och varför är kärnkraftföretagen exporterar denna farliga teknik till utvecklingsländerna?</p>
			
			<p>Så här är den begäran. <strong>Kan ni hjälpa mig att tala om dessa enkla fakta?</strong> Jag ber dig inte att gå med i en organisation eller att donera pengar, utan helt enkelt att lägga till ditt namn i listan över modiga individer som kommer att tala till förmån för en värld utan kärnkraft.</p>
			
			<p>Jag hoppas att detta kommer att göra skillnad.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>