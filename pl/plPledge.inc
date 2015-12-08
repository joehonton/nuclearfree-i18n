<?php
//=============================================================================
//
// File:         /i18n/plPledge.inc
//
// Language:     PHP
//
// Contents:     pl = Polski (Polish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/plBasePage.inc' );


//-------------------------------------
class plPledge extends plBasePage
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
		return "Obietnica w kierunku świata bez rozszczepienia";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Dołącz wraz z innymi obywatelami świata w obiecując mówić odważnie o niebezpieczeństwach wynikających z korzystania z rozszczepienia jądrowego.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "rozszczepienie jądrowe, energia jądrowa, broń jądrowa, mówić odważnie, obietnica, uroczyście zastaw, przysięgam, przysięgi";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Obiecuję mówić odważnie.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Przysięgam na "nie więcej rozszczepienia" przysięgę teraz!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Twoje imię i nazwisko";
	}

	//---------------------------------
	function city()
	{
		return "Twoje miasto lub rodzinnym";
	}
	
	//---------------------------------
	function country()
	{
		return "Twoja narodowość";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Przysięga będzie bardziej skuteczne, jeśli dostarczone nazwę. Czy możesz wypełnić formularz?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Twoja przysięga będzie bardziej znaczące, jeśli podałeś swoje miasto i kraj, ale jeśli chcesz je pominąć, wystarczy nacisnąć "obiecuję" przycisk jeszcze raz.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Obietnica w kierunku świata bez rozszczepienia</h1>
			
			<p>Ja $personal_name, zjednoczyć się z moich współobywateli świata w obiecując mówić odważnie o niebezpieczeństwach nałożonych na Ziemi i wszystkich jej mieszkańców za pomocą rozszczepienia jądrowego w zakresie wytwarzania energii elektrycznej i broni wojskowej.</p>
			
			<p><strong>Uroczyście zobowiązują się mówić odważnie o zagrożeniach związanych z energią jądrową.</strong> Zalety korzystania rozszczepienia jądrowego w zakresie wytwarzania energii elektrycznej są przesadzone, a prawdziwe długoterminowe ryzyko jest zbyt duże, aby kontynuować.</p>
			
			<ol>
				<li>Produkcja energii elektrycznej w elektrowniach atomowych nie jest tańszy niż inne formy energii elektrycznej.</li>
				<li>Elektrownie jądrowe nie mogą być wykonane w 100% bezpieczne od poważnej awarii.</li>
				<li>Odpady stworzony przez izotopów rozszczepienia jądrowego pozostają toksyczne dla bardzo długi czas, a my nie mamy miejsca, aby umieścić go.</li>
				<li>Energia jądrowa nie czysta energia jest: wydobycie, mielenie i wzbogacanie rudy uranu tworzy duże ziemie odpadów ekologicznych, które są szkodliwe dla ludzi i przyrody.</li>
				<li>Wzbogacony uran dla elektrowni i wysoko wzbogaconego uranu do broni jądrowej są wykonane z tego samego sprzętu.</li>
			</ol>
			
			<p><strong>Uroczyście zobowiązują się mówić odważnie o wojskowych broni jądrowej.</strong> Nadszedł czas dla wszystkich narodów, aby zrezygnować z użycia broni jądrowej.</p>
			
			<ol start='6'>
				<li>Nie ma moralnie uzasadniony powód do żadnej osoby, organizacji, lub państwa do korzystania z broni nuklearnej.</li>
				<li>Posiadanie broni jądrowej jako środek odstraszający to nie polityka.</li>
				<li>Narodów z broni jądrowej powinny opracować plany na bezpieczny demontaż ich arsenał.</li>
				<li>Zdolności nuklearnych narodów powinna angażować się w negocjacje, których celem jest całkowite zniesienie wszelkiej broni jądrowej.</li>
				<li>Nikt nie powinien dążyć do rozwoju nowych broni jądrowej.</li>
			</ol>
			
			<p>Sworn do dziś $this_date, w<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>