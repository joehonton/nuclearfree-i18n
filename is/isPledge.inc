<?php
//=============================================================================
//
// File:         /i18n/isPledge.inc
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
class isPledge extends isBasePage
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
		return "Loforð átt heiminn án kjarnaklofnun";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Tengja saman með samborgara í heiminum í að lofa að tala hugrekki um hættur sem felast í notkun kjarnaklofnun.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "kjarnaklofnun, kjarnorku, kjarnorku vopn, tala hugrakkur, lofa, hátíðlega loforð, sver, eið";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ég lofa að tala hugrekki.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Sverja "ekki meira kjarnaklofnun" eið núna!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Gefið nafn og fjölskylda nafn";
	}

	//---------------------------------
	function city()
	{
		return "Borg eða heimabæ";
	}
	
	//---------------------------------
	function country()
	{
		return "þjóðerni";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "The eið yrði skilvirkari ef þú gafst nafnið þitt. Gætirðu vinsamlegast fyllið í formi?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Eið þín væri meira máli ef þú gafst heimabæ þínum og þjóðerni, en ef þú vilt sleppa þeim, bara að ýta á "Ég lofa" hnappinn aftur.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Loforð átt heiminn án kjarnaklofnun</h1>
			
			<p>Ég, $personal_name, sameinumst samborgara mína í heiminum í að lofa að tala hugrekki um hættur lagðar á jörðinni og öllum íbúum þess með því að nota kjarnaklofnun í raforkuvinnslu og í hernaðarlegum vopnum.</p>
			
			<p><strong>Ég heita hátíðlega að tala hugrekki um hætturnar af kjarnorku.</strong> Kosti þess að nota kjarnaklofnun í raforkuvinnslu eru ýktar, og sannur langtíma áhætta er of mikill til að halda áfram.</p>
			
			<ol>
				<li>Raforku kjarnorkuver er ekki ódýrari en aðrar tegundir raforkuframleiðslu.</li>
				<li>Kjarnorkuver er ekki hægt að gera 100% öruggur frá skelfilegar bilun.</li>
				<li>The samsætujón úrgangur skapa við kjarnaklofnun haldist eitrað í mjög langan tíma, og við höfum engan stað til að setja það.</li>
				<li>Kjarnorku er ekki hrein orka: námuvinnslu, mölun, og auðgun málmgrýti úran skapar stór vistfræðilegar auðn sem eru skaðleg mönnum og dýralíf.</li>
				<li>Auðgað úran fyrir orkuver og mjög auðgað úran fyrir kjarnorkuvopn eru gerðar með sama búnaði.</li>
			</ol>
			
			<p><strong>Ég heita hátíðlega að tala hugrekki um hernaðarlega notkun kjarnavopna.</strong> Það er kominn tími fyrir allar þjóðir að afsala sér notkun kjarnavopna.</p>
			
			<ol start='6'>
				<li>Það er engin siðferðilega lögmæt ástæða fyrir hvern, stofnun eða ríki til að nota kjarnorkuvopn.</li>
				<li>Eigu kjarnavopna sem fyrirbyggjandi er ekki stefna.</li>
				<li>Þjóðir með kjarnorkuvopn ættu að þróa áætlanir um örugglega hleyptu vopnabúr sitt.</li>
				<li>Þjóðir með kjarnorku getu ættu að taka þátt í samningaviðræðum sem markmiðið er heill afnám allra kjarnavopna.</li>
				<li>Enginn ætti að stunda þróun nýrra kjarnavopna.</li>
			</ol>
			
			<p>Svarið til þessa dags, $this_date, í<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>