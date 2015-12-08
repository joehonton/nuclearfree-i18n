<?php
//=============================================================================
//
// File:         /i18n/fiFavor.inc
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
class fiFavor extends fiBasePage
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
		return "Minulla on pyyntö";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Voit auttaa puhumalla rohkeasti vaaroista fissio.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "ydinlaitoksiin, ydinvoima, ydinaseet, ydinaseita, fissio, Earth, kiehuvaa vettä, sähköä";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "kauniissa Blue Marble!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
			 
	//---------------------------------
	function pledgeButton()
	{
		return "Juhlallisesti Luvata";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Vannovat "ei enää fissio" valan nyt!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Voit auttaa puhumalla rohkeasti</h1>
			
			<p>Hei,</p>
			
			<p>Minulla on pyyntö. <strong>Autatko minua pyrkimys tehdä tästä maailmasta ilman fissio?</strong></p>
			
			<p>Sallikaa minun selittää, miksi tunnen niin voimakkaasti tästä.</p>
	
			<p>Kun olin nuori, avaruustutkimuksen oli huipulla täydessä loistossaan. Jännitystä, joka liittyy seikkailu tuntui jaettava kaikille. Jännitystä, että mukana jokainen uusi virstanpylväs, teroittaa meidän ruokahalu enemmän. Ja ennakointia, että me todella aikoivat laittaa miehen kuuhun ja palata hänet turvallisesti Maahan, piti meidät mukana vieläkin pieniä onnistumisia ja epäonnistumisia ohjelman.</p>
			
			<p>Ennen, että lopullisena tavoitteena oli monia tärkeitä saavutuksia. Yksi innostava näistä oli, kun astronautit murtautui vapaaksi Maan kiertoradalla. Ensimmäistä kertaa, ihmiset olivat lähdössä turvallisuutta kotiplaneetallaan. Olimme kuin jännitystä hakevien on Elämäsi seikkailu.</p>
			
			<p>Ja sitten merkittävin asia tapahtui. Astronautit vilkaisi takaisin väistymässä maapallon, ja näki ensimmäistä kertaa Blue Marble, joka oli kotimme, ja ne olivat lähes hukkua arvokasta kauneus, mitä he näkivät. Valokuville, että ne lähetetään takaisin lähetettiin maailmalle, ja mekin oli awestruck.</p>
			
			<p>Haavoittuvuus kiinni näissä valokuvia meidät tietoisia itsestämme tavalla, joka ylitti kaikki poliittiset kuuliaisuuteen. Pienen hetken ajan, me unohti kylmän sodan, asetamme syrjään erilaisuutta ja ihmettelivät kauneutta maapallon. Tämän uuden tietoisuuden tiesimme, kuinka hauras paikkamme maailmankaikkeudessa oli, ja kuinka vaarallisen lähellä olimme tuhoaa vain kotona meillä tulee koskaan olemaan.</p>
			
			<p>Me herätetään kiire korjata meidän puutteita. Puhkeamisen toimintaa, olemme työskennelleet korjata ongelmamme. Kansainvälinen sopimus ydinaseiden leviämisen, ja sopimus kieltää kaikki maanpäälliseen ydinkokeista olivat todiste siitä, että voisimme puhua yhteisten arvojemme ja saavuttaa yhteinen järkeviä tavoitteita. Lopulta, jossa syksyllä Berliinin Muurin, ja sulattaminen suhteiden pääasiallinen kilpailijat Kylmän Sodan, aloimme ensimmäinen vakava vaivaa vähentämiseksi maailmanlaajuisesti varaston ydinaseita.</p>
			
			<p>Mutta siitä lähtien ovat mielestäni menettäneet kiihkeys vapaa maailma ydinaseita, ja viimeaikaiset pyrkimykset jatkamaan työtä ei kuitenkaan ole juurikaan todellista edistystä. Neljän vuosikymmenen lattea keskusteluja, emme ole edes pystyneet säilyttämään nykyinen tilanne: kansainvälinen ydinaseiden sopimukset on kierretty tai huomiotta; ikääntyminen globaali varastot ovat heikkenemässä, ja uusia ydinaseita tutkimus jatkuu.</p>
			
			<p><strong>Pelotepolitiikan on selvästi epäonnistunut.</strong> Häpeäksemme se on korvattu epämääräisiä lupauksia ja sanahelinää.</p>
			
			<p>Valitettavasti ydinaseet eivät ole ainoa huolenaihe. Tiedämme nyt, että ydinvoimalat aiheuttavat myös vakava uhka arvokasta maapallon. Olemme juuri alkaneet herätä ymmärtämään, että ydinvoimaloita ei voi tehdä 100% turvallinen.</p>
			
			<p>Katastrofaalinen onnettomuus Fukushiman olisi koskaan tapahtunut, koska ydinvoima insinöörit oli varautunut kaikkiin mahdollisiin pahimmassa tapauksessa: heillä oli turvamääräysten paikka jokaiselle laite; toimintamallit kaikissa mahdollisissa tilanteissa; valmiussuunnitelmat, kun asioita, kun väärin; ja useita automaattisia jalostettujen sovelletaan, jos varaukseen laitteet eivät toimi. Kaikki alan parhaat insinöörit työskentelivät ahkerasti ja tunnollisesti kanssa turvallisuus ehdottomalle etusijalle. Silti jotain kauheaa tapahtui. Ja muistakaa, tämä tapahtui 25 vuotta Tšernobylin onnettomuuden jälkeen, jossa on runsaasti aikaa oppia aiemmista virheistä.</p>
			
			<p>Nykyään minulla on hyvin vaikea uskoa melkein mitä tahansa, että ydinenergian yritykset kertoa minulle. Halvempi kuin vaihtoehdot? Puhtaampaa kuin vaihtoehdot? Turvallisempaa kuin vaihtoehdot? Ei. Ei. Ei.</p>
			
			<p><strong>Kaikki tämä vain keittää vettä?</strong></p>
	
			<p>Tässä on yksinkertainen totuus: ei ole mitään erikoista sähkön ydinvoimaloita. Öljyn, hiilen, kaasun ja ydinvoiman kaikki käyttävät samaa mekaniikka sähkön. Se on yksinkertaista:</p>
			
			<ol>
				<li>Lämmönlähteen kiehuu vesi.</li>
				<li>Höyry kiehuvaa vettä pakottaa turbiinien lavat pyöriä.</li>
				<li>Induktiokelojen kiinnitetty pyörivä turbiini luoda sähköä, kun pyöritetään magneettikentän läpi.</li>
			</ol>
			
			<p>Sähkön tuottaminen on vain alkuaine fysiikan ja tekniikan. Joten miksi mennä vaivaa kiehuvaa vettä jakamalla atomien? Miksi luoda vaarallisia ydinjätteestä emme voi koskaan päästä eroon? Miksi pilata ympäristöä uraanin louhinta ja joka luo myrkyllisen jätteen-mailla? Ja miksi ydinvoimayhtiöiden vie tätä vaarallista teknologiaa kehitysmaihin?</p>
			
			<p>Joten tässä on pyynnöstä. <strong>Voitteko auttaa minua puhua näistä yksinkertaisia tosiasioita?</strong> En pyydä sinua liittymään organisaation tai lahjoittaa rahaa, vaan yksinkertaisesti lisätä nimesi luetteloon rohkeita henkilöitä, jotka puoltavatmaailma ilman fissio.</p>
			
			<p>Toivon, että tämä tekee eron.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>