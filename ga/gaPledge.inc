<?php
//=============================================================================
//
// File:         /i18n/gaPledge.inc
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
class gaPledge extends gaBasePage
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
		return "Geall dtreo domhan gan eamhnaithe";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unite le gcomhshaoránaigh ar fud an domhain i tuar dóchais inti a labhairt misniúil faoi na contúirtí a fhorchuirtear leis an comhleá núicléach a úsáid.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "scoilteadh núicléach, fuinneamh núicléach, airm núicléacha, labhairt misniúil, gealltanas, go sollúnta gealltanas, swear, faoi mhionn";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Geallaim a labhairt misniúil.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Swear an rogha "gan níos mó eamhnaithe" mionn anois!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "D'ainm a thugtar agus ainm teaghlaigh";
	}

	//---------------------------------
	function city()
	{
		return "Do chathair nó hometown";
	}
	
	//---------------------------------
	function country()
	{
		return "do náisiúntacht";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Ba mhaith leis an mionn a bheith níos éifeachtaí má chuir tú d'ainm. Níorbh fhéidir leat le do thoil líon isteach an fhoirm?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Bheadh do mhionn a bheith níos mó brí má chuirtear ar fáil tú do bhaile dúchais agus náisiúntacht, ach más mian leat iad a fhágáil ar lár, ach brúigh ar an "geallaim" a bhrú uair amháin níos mó.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Geall dtreo domhan gan eamhnaithe</h1>
			
			<p>Mé, $personal_name, aontú le mo gcomhshaoránaigh ar fud an domhain i tuar dóchais inti a labhairt misniúil faoi na contúirtí a fhorchuirtear ar an Domhan agus lena háitritheoirí uile ag an comhleá núicléach a úsáid i nginiúint leictreachais agus i airm mhíleata.</p>
			
			<p><strong>Geallaim go sollúnta a labhairt misniúil faoi na contúirtí an fhuinnimh núicléach.</strong> Is iad na buntáistí ag baint úsáide as eamhnú núicléach um ghiniúint leictreachais áibhéalacha, agus tá na rioscaí fíor fadtéarmach ró-mhór chun leanúint ar aghaidh.</p>
			
			<ol>
				<li>Níl leictreachas a ghintear ag stáisiúin chumhachta núicléacha níos saoire ná foirmeacha eile de ghiniúint leictreachais.</li>
				<li>Ní féidir stáisiúin chumhachta núicléacha a dhéanamh 100% sábháilte ó cliseadh tubaisteach.</li>
				<li>Beidh an dramhaíl iseatópach cruthaithe ag eamhnú núicléach fós tocsaineach feadh tréimhse an-fhada, agus ní mór dúinn aon áit a chur air.</li>
				<li>Ní fuinneamh núicléach fuinnimh glan: Cruthaíonn an mianadóireachta, muilleoireacht, agus saibhriú na méine úráiniam wastelands éiceolaíochta mór go bhfuil dochar do dhaoine agus don fhiadhúlra.</li>
				<li>Úráiniam saibhrithe le haghaidh stáisiúin chumhachta agus úráiniam an-saibhrithe le haghaidh airm núicléacha a dhéantar leis an trealamh céanna.</li>
			</ol>
			
			<p><strong>Geallaim go sollúnta a labhairt misniúil mar gheall ar an úsáid mhíleata na n-arm núicléach.</strong> Tá an t-am tagtha chun na náisiúin uile a thréigean an úsáid na n-arm núicléach.</p>
			
			<ol start='6'>
				<li>Níl aon chúis go morálta dlisteanach d'aon eagraíocht aonair, nó stáit a úsáid arm núicléach.</li>
				<li>Is é an seilbh na n-arm núicléach mar chosc polasaí theip.</li>
				<li>Ba chóir go náisiúin a bhfuil airm núicléacha a fhorbairt pleananna le haghaidh sábháilte dhíchóimeáil n-Arsenal.</li>
				<li>Ba chóir go náisiúin le cumais núicléach i mbun idirbheartaíochta a bhfuil sprioc atá le díothú iomlán de gach airm núicléach.</li>
				<li>Aon duine ba chóir a shaothrú le forbairt na n-arm núicléach nua.</li>
			</ol>
			
			<p>Arna mhionnú go dtí an lá, $this_date, i<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>