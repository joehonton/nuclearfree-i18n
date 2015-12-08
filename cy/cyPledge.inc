<?php
//=============================================================================
//
// File:         /i18n/cyPledge.inc
//
// Language:     PHP
//
/// Contents:     cy = Cymraeg (Welsh)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/cyBasePage.inc' );


//-------------------------------------
class cyPledge extends cyBasePage
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
		return "Addewid tuag at fyd heb ymholltiad";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ymunwch â chyd-ddinasyddion y byd yn addo siarad yn wrol am y peryglon a osodir gan y defnydd o ymholltiad niwclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "ymholltiad niwclear, ynni niwclear, arfau niwclear, yn siarad yn wrol, addewid, addewid ddifrifol, yn tyngu, llw";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Rwy&apos;n addo i siarad yn wrol.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Tyngu y "dim mwy ymholltiad" llw nawr!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Eich enw a roddir ac enw teuluol";
	}

	//---------------------------------
	function city()
	{
		return "Eich dinas neu dref enedigol";
	}
	
	//---------------------------------
	function country()
	{
		return "Eich cenedligrwydd";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Byddai'r llw yn fwy effeithiol os gwnaethoch ddarparu eich enw. Allech chi os gwelwch yn dda llenwch y ffurflen?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return "Byddai eich llw yn fwy ystyrlon os gwnaethoch ddarparu eich tref enedigol a chenedligrwydd, ond os ydych am eu hepgor yn, dim ond pwyswch y \"Rwy'n addo\" botwm unwaith eto.";
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Addewid tuag at fyd heb ymholltiad</h1>
			
			<p>Yr wyf i, $personal_name, uno gyda fy cyd-ddinasyddion y byd yn addo siarad yn wrol am y peryglon a osodir ar y Ddaear a'i holl drigolion drwy ddefnyddio ymholltiad niwclear yn y gynhyrchu trydan ac mewn arfau milwrol.</p>
			
			<p><strong>Wyf ddifrifol addo siarad yn wrol am y peryglon o ynni niwclear.</strong> The fanteision defnyddio ymholltiad niwclear yn cynhyrchu trydan yn gorliwio, a'r risgiau hir-dymor gwir yn rhy fawr i barhau.</p>
			
			<ol>
				<li>Nid yw trydan a gynhyrchir gan orsafoedd ynni niwclear yn rhatach na dulliau eraill o gynhyrchu trydan.</li>
				<li>Ni all planhigion ynni niwclear yn cael eu gwneud o 100% yn ddiogel o fethiant trychinebus.</li>
				<li>Bydd y gwastraff isotopig a grëwyd gan ymholltiad niwclear yn parhau'n wenwynig am amser hir iawn, ac nid oes gennym unrhyw le i roi ei.</li>
				<li>Nid yw ynni niwclear yn ynni glân: y cloddio, melino, a chyfoethogi o fwyn wraniwm yn creu wastelands ecolegol mawr sy'n niweidiol i bobl a bywyd gwyllt.</li>
				<li>Wraniwm cyfoethogi ar gyfer gorsafoedd ynni ac wraniwm cyfoethogi iawn ar gyfer arfau niwclear yn cael eu gwneud gyda'r un offer.</li>
			</ol>
			
			<p><strong>Wyf ddifrifol addo siarad yn wrol am y defnydd milwrol o arfau niwclear.</strong> Mae'r amser wedi dod ar gyfer yr holl genhedloedd i ymwrthod y defnydd o arfau niwclear.</p>
			
			<ol start='6'>
				<li>Nid oes unrhyw reswm moesol dilys ar gyfer unrhyw unigolyn, sefydliad, neu wladwriaeth i ddefnyddio arfau niwclear.</li>
				<li>Mae meddu ar arfau niwclear fel ataliad yn bolisi methu.</li>
				<li>Dylai gwledydd ag arfau niwclear ddatblygu cynlluniau ar gyfer datgymalu eu arsenal yn ddiogel.</li>
				<li>Dylai gwledydd gyda galluoedd niwclear yn cymryd rhan mewn trafodaethau y mae eu nod yw diddymu gyflawn o'r holl arfau niwclear.</li>
				<li>Ni ddylai unrhyw un fynd ar drywydd datblygu arfau niwclear newydd.</li>
			</ol>
			
			<p>Tyngu llw hyd heddiw, $this_date, yn<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>