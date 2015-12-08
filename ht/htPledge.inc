<?php
//=============================================================================
//
// File:         /i18n/htPledge.inc
//
// Language:     PHP
//
// Contents:     ht = Kreyòl (Haitian Creole)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/htBasePage.inc' );


//-------------------------------------
class htPledge extends htBasePage
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
		return "Yon pwomès nan direksyon pou yon mond san yo pa fisyon";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Join ansanm ak sitwayen parèy nan mond lan nan pwomèt yo pale kouraj sou danje ki enpoze yo pa itilize nan fisyon nikleyè.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fisyon nikleyè, enèji nikleyè, zam nikleyè, pale kouraj, pwomès, avèti angajman, fè sèman, sèman";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mwen te pwomèt yo pale kouraj";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Fè sèman di "pa plis fisyon" sèman an kounye a!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "bay non ak non fanmi";
	}

	//---------------------------------
	function city()
	{
		return "vil ou an oswa y'al";
	}
	
	//---------------------------------
	function country()
	{
		return "nasyonalite ou";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Sèman an ta dwe pi efikas ou si ou bay non ou. Te kapab ou souple ranpli nan fòm lan?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return "Sèman ou ta gen plis sans si ou bay y'al ou ansanm ak nasyonalite, men si ou vle oblije yo, jis peze \"mwen te pwomèt\" bouton yon fwa plis la.";
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Yon pwomès nan direksyon pou yon mond san yo pa fisyon</h1>
			
			<p>Se mwen menm, $personal_name, ini ak sitwayen ansanm ak mwen nan mond lan nan pwomèt yo pale kouraj sou danje ki enpoze sou Latè ak tout moun li yo pa itilize nan fisyon nikleyè nan moun k'ap viv koulye a nan elektrisite ak nan zam militè yo.</p>
			
			<p><strong> Mwen fè sèman yo pale kouraj sou danje ki genyen nan enèji nikleyè.</strong> Baz byenfonde ki nan lè l sèvi avèk fisyon nikleyè nan moun k'ap viv koulye a nan elektrisite yo ekzajere, ak vre risk ki genyen nan tèm ki long yo twò gwo yo ka kontinye.</p>
			
			<ol>
				<li>Elektrisite ki te pwodwi pa plant fòs nikleyè se pa pi bon mache pase lòt fòm nan jenerasyon elektrisite.</li>
				<li>Pa ka fè plant fòs nikleyè 100% san danje nan echèk katastwofik.</li>
				<li>Fatra a isotope ki te kreye pa fisyon nikleyè yo ap rete toksik pou yon tan trè lontan, epi nou pa gen okenn kote yo mete li.</li>
				<li>Enèji nikleyè se pa enèji pwòp: min, fraisage, ak anrichisman la nan minrè iranyòm kreye gwo ekolojik fatra-tè ki poze danje pou pou moun ak bèt sovaj.</li>
				<li>Yo rich iranyòm pou plant pouvwa ak iranyòm trè rich pou zam nikleyè ki fèt ak ekipman an menm.</li>
			</ol>
			
			<p><strong>Mwen fè sèman yo pale kouraj sou jan pou sèvi nan militè nan zam nikleyè.</strong> Lè a te rive pou tout nasyon yo abandone itilize nan zam nikleyè.</p>
			
			<ol start='6'>
				<li>Pa gen okenn rezon moralman lejitim pou nenpòt moun, òganizasyon, oswa eta yo sèvi ak zam nikleyè.</li>
				<li>Posesyon an nan zam nikleyè kòm yon prevantif se yon politik echwe.</li>
				<li>Nasyon ak zam nikleyè ta dwe devlope plan pou san danje demantèlman asenal yo.</li>
				<li>Nasyon ki gen kapasite nikleyè ta dwe angaje nan yon negosyasyon ki gen objektif se abolisyon a konplè tout zam nikleyè.</li>
				<li>Pa gen moun ki ta dwe pouswiv devlopman nan nouvo zam nikleyè.</li>
			</ol>
			
			<p>Fè sou sèman sa a jou, $this_date, nan<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>