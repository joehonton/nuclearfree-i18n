<?php
//=============================================================================
//
// File:         /i18n/srCyrlPledge.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/srCyrlBasePage.inc' );


//-------------------------------------
class srCyrlPledge extends srCyrlBasePage
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
		return "Обећање ка свету без фисије";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Придружите заједно са суграђанима света у обећавајући да храбро говори о опасностима које намеће коришћење нуклеарне фисије.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "нуклеарна фисија, нуклеарна енергија, нуклеарно оружје, говори храбро, обећање, Свечано се заклињем, заклињем, заклетва";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Обећавам да храбро говори.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Закуни се "више не фисија" заклетву сада!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "дато име и презиме";
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
		return "Заклетва би бити ефикаснији ако сте дали своје име. Молим вас попуните формулар?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Ваша заклетва би више смисла ако се обезбедила свој родни град и држављанство, али ако желите да их изоставити, само притисните "Обећавам" још једном дугме.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Обећање ка свету без фисије</h1>
			
			<p>Ја, $personal_name, уједини са својим суграђанима света у обећавајући да храбро говори о опасностима наметнута Земљи и свим њеним становницима употребом нуклеарне фисије у производњи електричне енергије и у војним оружјем.</p>
			
			<p><strong>Свечано се заклињем да храбро говори о опасностима од нуклеарне енергије.</strong> Заслуге користећи нуклеарну фисију у производњу електричне енергије су преувеличане, а прави дугорочне ризици су сувише велики да се настави.</p>
			
			<ol>
				<li>Електрична енергија генерише нуклеарних електрана није јефтинији од других облика електричне енергије.</li>
				<li>Нуклеарне електране не могу бити 100% сигуран од катастрофалног неуспеха.</li>
				<li>Изотопски отпадом створио нуклеарне фисије ће остати токсичан за веома дуго, а немамо где да га стави.</li>
				<li>Нуклеарна енергија није чиста енергија: рударство, млевење, и обогаћивање руде уранијума ствара велике еколошке отпадних земље које су штетне за људе и живи свет.</li>
				<li>Обогаћен уранијум за електране и високо обогаћеног уранијума за нуклеарно оружје су са истом опремом.</li>
			</ol>
			
			<p><strong>Свечано се заклињем да храбро говори о војној употреби нуклеарног оружја.</strong> Дошло је време за све нације да се одрекну употребе нуклеарног оружја.</p>
			
			<ol start='6'>
				<li>Нема морално легитиман разлог за било ког појединца, организација, или држава користити нуклеарно оружје.</li>
				<li>Поседовање нуклеарног оружја за одвраћање је пропао политика.</li>
				<li>Нација са нуклеарним оружјем треба да развију планове за безбедно демонтирање свој арсенал.</li>
				<li>Нација са нуклеарним способностима треба да се укључе у преговоре чији је циљ потпуна укидање свих нуклеарног оружја.</li>
				<li>Нико не би требало да настави развој нових нуклеарних оружја.</li>
			</ol>
			
			<p>Оверени до данашњег дана, $this_date, у<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>