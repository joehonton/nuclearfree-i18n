<?php
//=============================================================================
//
// File:         /i18n/dePledge.inc
//
// Language:     PHP
//
// Contents:     de = German
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/deBasePage.inc' );


//-------------------------------------
class dePledge extends deBasePage
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
		return 'Versprechen in Richtung einer Welt ohne Fission';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Registriert Mitbürger der Welt versprach, mutig sprechen über die Gefahren durch die Nutzung der Kernspaltung auferlegt.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'Kernspaltung,Kernenergie,nukleare Waffen,sprechen mutig,versprechen,feierlich versprechen,schwören,Eid';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Ich verspreche, Mutig sprechen.';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Schwören das "Nicht mehr Kernspaltung" Eid jetzt!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return 'Ihre Vornamen und Familiennamen';
	}

	//---------------------------------
	function city()
	{
		return 'Ihre Stadt oder Heimatstadt';
	}
	
	//---------------------------------
	function country()
	{
		return 'Ihre Nationalität';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'Der Eid wäre effektiver, wenn Sie Ihren Namen zur Verfügung gestellt. Könnten Sie bitte das Formular ausfüllen?';
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Ihr Eid wäre sinnvoll, wenn Sie Ihre Heimatstadt und Staatsangehörigkeit vorgesehen, aber wenn Sie sie weglassen wollen, drücken Sie einfach die "Ich verspreche"-Taste noch einmal.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $w_personal_name, $w_date, $w_city, $w_country )
	{
return <<<ENDHTML
			<h1>Versprechen in Richtung einer Welt ohne Fission</h1>
			
			<p>Ich, $w_personal_name, verbinden Mitbürger der Welt versprach, mutig sprechen über die Gefahren auf der Erde und alle ihre Bewohner durch die Nutzung der Kernspaltung in der Stromerzeugung und in militärischen Waffen auferlegt.</p>
			
			<p><strong>Ich schwöre feierlich, mutig sprechen über die Gefahren der Kernenergie.</strong> Die Vorteile der Verwendung der Kernspaltung in der Stromerzeugung sind übertrieben, und die wahren langfristigen Risiken sind zu groß, um fortzufahren.</p>
			
			<ol>
				<li>Strom von Kernkraftwerken ist nicht billiger als andere Formen der Stromerzeugung.</li>
				<li>Kernkraftwerke können nicht gemacht 100% sicher vor Totalausfall werden.</li>
				<li>Die Isotopen-Abfall durch Kernspaltung erzeugt wird bleiben für eine sehr lange Zeit giftig, und wir haben keinen Platz dafür.</li>
				<li>Die Kernenergie ist nicht sauber Energie: der Bergbau-, Fräs-, und Anreicherung von Uranerz führt zu großen ökologischen Brachflächen, die schädlich für Mensch und Tier sind.</li>
				<li>Angereichertes Uran für Kraftwerke und hoch angereichertes Uran für Atomwaffen sind mit der gleichen Ausrüstung gemacht.</li>
			</ol>
			
			<p><strong>Ich schwöre feierlich, mutig sprechen über die militärische Nutzung von Atomwaffen.</strong> Die Zeit ist für alle Nationen kommen, um den Einsatz von Atomwaffen zu verzichten.</p>
			
			<ol start='6'>
				<li>Es gibt keine moralisch legitimen Grund für eine Einzelperson, Organisation oder Staat, Atomwaffen einzusetzen.</li>
				<li>Der Besitz von Atomwaffen als Abschreckung ist eine gescheiterte Politik.</li>
				<li>Nationen mit Atomwaffen entwickeln sollte Pläne zur sicheren Demontage ihrem Arsenal.</li>
				<li>Nationen mit nuklearen Fähigkeiten sollten in Verhandlungen, deren Ziel ist die vollständige Abschaffung aller Atomwaffen zu engagieren.</li>
				<li>Niemand sollte verfolgen die Entwicklung neuer Atomwaffen.</li>
			</ol>
			
			<p>Eidesstattliche bis zum heutigen Tag, $w_date, in <br />
			$w_city, $w_country.</p>
ENDHTML;
	}
}
?>