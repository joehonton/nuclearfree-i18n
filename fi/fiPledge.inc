<?php
//=============================================================================
//
// File:         /i18n/fiPledge.inc
//
// Language:     PHP
//
// Contents:     fi = Suomi (Finnish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 4, 2013
//
//=============================================================================

require_once( __DIR__ . '/fiBasePage.inc' );


//-------------------------------------
class fiPledge extends fiBasePage
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
		return "Lupaus kohti maailmaa ilman fissio";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Liity yhdessä kansalaisten maailman lupaavia puhua rohkeasti vaaroista käytön asettamia ydinfission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fissio, ydinenergia, ydinaseita, puhua rohkeasti, lupaus, juhlallisen lupauksen, vannon, vala";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Lupaan puhua rohkeasti.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Vannon "ei enää fissio" valan nyt!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Sinun etunimi ja sukunimi";
	}

	//---------------------------------
	function city()
	{
		return "Kaupunkisi tai kotikaupungissaan";
	}
	
	//---------------------------------
	function country()
	{
		return "Kaupunkisi tai kotikaupungissaan...";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Vala olisi tehokkaampaa, jos olet antanut nimen. Voisitteko täyttää lomakkeen?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Vala olisi mielekkäämpää, jos annoit kotikaupunkisi ja kansalaisuus, mutta jos haluat jättää niitä, paina "Lupaan"-painiketta kerran.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Lupaus kohti maailmaa ilman fissio</h1>
			
			<p>Minä $personal_name, yhdistyä kollegani maailman kansalaisia lupaavia puhua rohkeasti vaaroista aseteta maapallon ja sen asukkaita käyttämällä fissio vuonna sähkön-ja sotilaalliseen käyttöön tarkoitettujen aseiden.</p>
			
			<p><strong>Vakuutamme juhlallisesti puhua rohkeasti vaaroista ydinenergian.</strong> Ansioita käyttää fissio vuonna sähkön ovat liioiteltuja, ja todellinen pitkän aikavälin riskit ovat liian suuria jatkaa.</p>
			
			<ol>
				<li>Sähkön ydinvoimaloissa ei ole halvempaa kuin muut sähköntuotannossa.</li>
				<li>Ydinvoimalat ei voi tehdä 100% turvassa rikkoutumiseen.</li>
				<li>Isotoopin syntyvän jätteen ydinfissioalan olla toksisia hyvin pitkään, ja meillä ei ole paikka laittaa se.</li>
				<li>Ydinenergia ei ole puhdasta energiaa: louhinta, murskaus ja uraanin rikastamisesta malmia luo suuren ekologisen joutomailla, jotka ovat haitallisia ihmisille ja luonnolle.</li>
				<li>Rikastettua uraania voimalaitosten ja korkeasti rikastettua uraania ydinaseisiin tehdään samoja laitteita.</li>
			</ol>
			
			<p><strong>Vakuutamme juhlallisesti puhua rohkeasti noin sotilaallista käyttöä ydinaseita.</strong> On tullut aika kaikkien kansojen luopumaan ydinaseiden käytöstä.</p>
			
			<ol start='6'>
				<li>Ei ole moraalisesti hyväksyttävä syy yksilöä, organisaatiota tai käyttää ydinaseita.</li>
				<li>Ydinaseita pelotteena on epäonnistunut politiikka.</li>
				<li>Kansakuntien kanssa ydinaseita kehitetään suunnitelmia turvallisesti purkamista niiden arsenaali.</li>
				<li>Kansakuntien kanssa ydinaseita pitäisi käynnistää neuvottelut, joiden tavoitteena on täydellinen poistaminen kaikista ydinaseista.</li>
				<li>Kenenkään ei pitäisi pyrkiä kehittämään uusia ydinaseita.</li>
			</ol>
			
			<p>Vannonut tähän päivään, $this_date vuonna<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>