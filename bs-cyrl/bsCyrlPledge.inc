<?php
//=============================================================================
//
// File:         /i18n/bsCyrlPledge.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/bsCyrlBasePage.inc' );


//-------------------------------------
class bsCyrlPledge extends bsCyrlBasePage
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
		return "А обећање према свијету без фисије";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Придружите заједно са суграђанима свијета у обећавши да говори храбро о опасностима које намеће кориштење нуклеарне фисије.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "нуклеарне фисије, нуклеарне енергије, нуклеарно оружје, говорим храбро, обећање, свечано обећавају, кунем се, заклетву";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Обећавам да говорим храбро.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Закуни се "више нема фисије" заклетву сада!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "дати име и презиме";
	}

	//---------------------------------
	function city()
	{
		return "град или родни град";
	}
	
	//---------------------------------
	function country()
	{
		return "држављанство";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Заклетва ће бити ефикаснији, ако сте дали своје име. Молим вас да испуните образац?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Ваш заклетву би бити смислено ако сте дали свој ​​родни град и националности, али ако желите да их изоставите, само "Обећавам" још једном типку притисните.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>А обећање према свијету без фисије</h1>
			
			<p>И, $personal_name, ујединити са својим суграђанима свијета у обећавши да говори храбро о опасностима наметнута Земље и свих њених становника по употреби нуклеарне фисије у производњу електричне енергије и војно оружје.</p>
			
			<p><strong>Свечано обавезују да говорим храбро о опасностима нуклеарне енергије.</strong> У заслуге кориштења нуклеарне фисије у производњу електричне енергије су преувеличане, а прави дугорочни ризици су превелики за наставак.</p>
			
			<ol>
				<li>Електричне енергије произведене нуклеарних електрана није јефтинији од других облика производње електричне енергије.</li>
				<li>Нуклеарне електране не могу бити 100% сигурни од катастрофалних неуспјеха.</li>
				<li>У изотопа отпад створио нуклеарне фисије ће остати отровно за јако дуго времена, а немамо мјеста да га ставим.</li>
				<li>Нуклеарна енергија није чисте енергије: на рударство, глодање, и обогаћивање руде урана ствара велике еколошке отпадних земље које су штетне за људе и дивље животиње.</li>
				<li>Обогаћени уран за електране и високо обогаћеног урана за нуклеарно оружје су се са истом опремом.</li>
			</ol>
			
			<p><strong>Свечано обавезују да говорим храбро о војној употреби нуклеарног оружја.</strong> Дошло је вријеме за све народе да се одрекну употребе нуклеарног оружја.</p>
			
			<ol start='6'>
				<li>Нема морално легитиман разлог за било појединца, организације или државе за кориштење нуклеарног оружја.</li>
				<li>Посједовање нуклеарног наоружања као средство одвраћања је пропали политике.</li>
				<li>Нација с нуклеарно оружје би требало да развију планове за сигурно демонтажу свом арсеналу.</li>
				<li>Нација с нуклеарним способностима треба се укључе у преговоре чији је циљ потпуно укидање свих нуклеарних оружја.</li>
				<li>Niko ne treba da nastavi sa razvojem novih nuklearnih oružja.</li>
			</ol>
			
			<p>Заклео да овај дан, $this_date, у<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>