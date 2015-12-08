<?php
//=============================================================================
//
// File:         /i18n/ltPledge.inc
//
// Language:     PHP
//
// Contents:     lt = Lietuvių (Lithuanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/ltBasePage.inc' );


//-------------------------------------
class ltPledge extends ltBasePage
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
		return "Į be dalijimosi pasaulyje pažadas";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Sujunkite su kitais piliečiais pasaulyje žada drąsiai prabilti apie pavojus, kuriuos kelia branduolių dalijimosi naudojimo.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "branduolių dalijimosi, branduolinė energija, branduoliniai ginklai, kalbėti drąsiai, pažadas, iškilmingai įkeitimo, prisiekiu, priesaiką";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Pažadu kalbėti drąsiai.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisiekti "ne daugiau skilimo" priesaiką dabar!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Jūsų vardas ir pavardė";
	}

	//---------------------------------
	function city()
	{
		return "Jūsų mieste ar gimtajame";
	}
	
	//---------------------------------
	function country()
	{
		return "Jūsų tautybė";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Priesaika būtų veiksmingesnis, jei jūs pateikėte savo vardą. Gal galėtumėte užpildyti formą?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Jūsų priesaika būtų prasmingesnis, jei jūs pateikėte savo gimtajame mieste ir pilietybę, tačiau, jei norite praleisti juos, tiesiog paspauskite "Pažadu" mygtuką dar kartą.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Į be branduolių dalijimosi pasaulyje pažadas</h1>
			
			<p>I $personal_name, susivienyti su kolegomis piliečių pasaulyje žada drąsiai prabilti apie pavojus nustatytų Žemėje ir visų jos gyventojų pagal branduolių dalijimosi naudojimo elektros energijos gamybai ir karinių ginklų.</p>
			
			<p><strong>Aš iškilmingai pažadu drąsiai prabilti apie branduolinės energijos pavojus.</strong> naudojant branduolių dalijimosi elektros energijos gamybos nuopelnai perdėti, ir tiesa ilgalaikės rizika yra per didelė, kad tęsti.</p>
			
			<ol>
				<li>Elektros energija, pagaminta atominėse elektrinėse nėra pigiau nei kitų formų elektros gamybai.</li>
				<li>Atominės elektrinės negali būti 100% saugus nuo pražūtingo gedimo atveju.</li>
				<li>Izotopų atliekų sukūrė branduolių dalijimosi liks toksiškos labai ilgai, ir mes neturime vietą įdėti jį.</li>
				<li>Branduolinė energija nėra švarios energijos: kasybą, smulkinimą, ir sodrinimo urano rūdos sukuria didelius ekologinius atliekų žemių, kurios yra kenksmingos žmonėms, gyvūnijai bei augalijai.</li>
				<li>Uranas Jėgainių ir labai prisodrinto urano branduoliniams ginklams pagaminti naudojant tą pačią įrangą.</li>
			</ol>
			
			<p><strong>Aš iškilmingai pažadu drąsiai prabilti apie karinio branduolinio ginklo panaudojimo.</strong> Atėjo laikas visoms tautoms atsisakyti branduolinių ginklų naudojimą.</p>
			
			<ol start='6'>
				<li>Nėra morališkai teisėtas priežastis bet kuriam asmeniui, organizacijai ar valstybės panaudoti branduolinį ginklą.</li>
				<li>Branduolinių ginklų, kaip atgrasymo turėjimas yra nepavyko politika.</li>
				<li>Tautos su branduolinių ginklų turėtų parengti planus saugiai išmontuoti savo arsenalą.</li>
				<li>Tautos su branduoliniais pajėgumais turėtų dalyvauti derybose, kurių tikslas yra visiškai panaikinti visų branduolinių ginklų.</li>
				<li>Niekas turėtų siekti naujų branduolinių ginklų kūrimą.</li>
			</ol>
			
			<p>Didziausias iki šios dienos, $this_date, kad<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>