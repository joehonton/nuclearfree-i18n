<?php
//=============================================================================
//
// File:         /i18n/daFavor.inc
//
// Language:     PHP
//
// Contents:     da = Dansk (Danish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/daBasePage.inc' );


//-------------------------------------
class daFavor extends daBasePage
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
		return "Jeg har en anmodning";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Du kan hjælpe ved at tale modigt om farerne ved nuklear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "atomkraft, atomenergi, atomvåben, fission, Jorden, kogende vand, elektricitet";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "Vores smukke blå marmor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Lover højtideligt";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sværger de "ikke mere fission" ed nu!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Du kan hjælpe ved at tale modigt</h1>
			
			<p>Hej,</p>
			
			<p>Jeg har en forespørgsel. <strong>Vil du hjælpe mig i min søgen efter at gøre dette til en verden uden nuklear fission?</strong></p>
			
			<p>Tillad mig at forklare, hvorfor jeg føler så stærkt om dette.</p>
	
			<p>Da jeg voksede op, udforskning af rummet var på højden af ​​sin fulde herlighed. Den spænding, der ledsagede eventyret syntes at være delt af alle. Spændingen, der ledsagede hver ny milepæl, skærpe vores appetit for mere. Og forventningen, at vi virkelig skulle sætte en mand på månen og tilbage ham sikkert til Jorden, holdt os beskæftiget med selv de mindre succeser og fiaskoer af programmet.</p>
			
			<p>Før de nåede det ultimative mål, var der mange vigtige resultater. En af de mest spændende af disse var, da astronauterne brød fri fra kredsløb om Jorden. For første gang blev mennesker forlader sikkerheden i deres hjem planet. Vi var ligesom spændingen asylansøgere på eventyr af en levetid.</p>
			
			<p>Og så det mest bemærkelsesværdige ting skete. Astronauterne skottede tilbage på den vigende Jorden, og så for første gang den blå marmor, der var vores hjem, og de var næsten overvældet af den dyrebare skønhed, hvad de så. De fotografiske billeder, de sendt tilbage blev transmitteret til hele verden, og vi var også overvældet.</p>
			
			<p>Sårbarheden fanget i disse fotografier gjort os bevidste om os selv på en måde, overskredet alle politiske tilhørsforhold. For et kort øjeblik i tiden, glemte vi om Den Kolde Krig, vi afsætter vores forskelligheder, og vi undrede på skønheden på Jorden. Fra denne nye bevidsthed vi vidste, hvor skrøbelig vores plads i universet var, og hvor faretruende tæt vi var til at ødelægge det eneste hjem, vi nogensinde vil have.</p>
			
			<p>Vi vækket med en følelse af uopsættelighed at løse vores fejl. Med en byge af aktivitet, arbejdede vi at løse vores problemer. Den internationale traktat om spredning af atomvåben, og aftalen om at forbyde alle overjordiske afprøvning af atomvåben var bevis på, at vi kunne tale om vores fælles værdier og opnå fælles fornuftige mål. Til sidst, med faldet af Berlinmuren, og optøning af forholdet mellem de vigtigste rivaler fra Den Kolde Krig begyndte vi den første alvorlige forsøg sigte på at reducere det globale lager af atomvåben.</p>
			
			<p>Men siden den tid, vi synes at have mistet vores iver for en verden uden atomvåben, og de seneste bestræbelser på at fortsætte dette arbejde har ikke gjort meget reelle fremskridt. Efter fire årtiers glansløse samtaler, har vi ikke engang været i stand til at opretholde den nuværende situation: de internationale nukleare traktater er blevet omgået eller ignoreres den aldrende globale lagre forværres, og nye atomvåben forskning fortsætter.</p>
			
			<p><strong>Politik afskrækkelse har klart fejlet.</strong> Til vores skam, er det blevet erstattet af vage løfter og tomme retorik.</p>
			
			<p>Desværre atomvåben ikke er vores eneste bekymring. Vi ved nu, at atomkraftværker udgør også en alvorlig trussel mod vores dyrebare Jorden. Vi er lige begyndt at vågne op til den erkendelse, at atomkraftværker ikke kan gøres 100% sikker.</p>
			
			<p>Den katastrofale katastrofe på Fukushima aldrig burde være sket, fordi de nukleare ingeniører havde forberedt alle mulige worst-case scenario: de havde sikkerhedsregler på plads hvert stykke udstyr, operationelle procedurer for alle mulige situationer, beredskabsplaner for når tingene når galt; og flere automatiske kompenserende mekanismer i tilfælde reserven udstyr virkede ikke. Alle af branchens bedste ingeniører arbejdede flittigt og samvittighedsfuldt med sikkerhed som deres topprioritet. Alligevel skete der noget forfærdeligt. Og husk, dette skete 25 år efter Tjernobyl, med rigelig tid til at lære af tidligere fejltagelser.</p>
			
			<p>Disse dage har jeg meget svært ved at tro næsten alt, de nukleare energiselskaber fortæller mig. Billigere end alternativerne? Renere end alternativerne? Sikrere end alternativerne? Nej. Nej. Nej.</p>
			
			<p><strong>Alt dette bare for at koge vand?</strong></p>
	
			<p>Her er den enkle sandhed: der er ikke noget særligt om elektricitet fra atomkraftværker. Olie, kul, gas og atomkraft alle bruger de samme mekanik til at generere elektricitet. Det er simpelt:</p>
			
			<ol>
				<li>En varmekilde koger vand.</li>
				<li>Damp fra kogende vand tvinger møllevinger til spin.</li>
				<li>Induktionsspoler knyttet til spinding turbinen skaber elektricitet, når drejet et magnetfelt.</li>
			</ol>
			
			<p>Generering af elektricitet er bare elementært fysik og teknik. Så hvorfor gå til den ulejlighed at kogende vand ved at opdele atomer? Hvorfor oprette farligt atomaffald, som vi aldrig kan slippe af med? Hvorfor ødelægge miljø med uranbrydning og som skaber giftige affald-lander? Og hvorfor er atomkraft virksomheder, der eksporterer denne farlige teknologi til udviklingslandene?</p>
			
			<p>Så her er anmodningen. <strong>Kan du hjælpe mig til at tale om disse simple fakta?</strong> Jeg beder dig ikke om at tilslutte sig en organisation eller til at donere penge, men blot at tilføje dit navn til listen over modige personer, der vil tale for en verden uden nuklear fission.</p>
			
			<p>Jeg håber, at dette vil gøre en forskel.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>