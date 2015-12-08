<?php
//=============================================================================
//
// File:         /i18n/frPledge.inc
//
// Language:     PHP
//
// Contents:     fr = French
//
// Author:       Joe Honton © 2013
//
// Initial date: September 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/frBasePage.inc' );


//-------------------------------------
class frPledge extends frBasePage
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
		return "Promesse vers un monde sans fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unite avec d'autres citoyens du monde en promettant de parler courageusement sur ​​les dangers imposés par l'utilisation de la fission nucléaire.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fission nucléaire, l'énergie nucléaire, armes nucléaires, parler courageusement, promesse, engagement solennel, jurez, serment";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Je promets de parler courageusement.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jurez-le «non plus fission» serment maintenant!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Votre prénom et nom de famille";
	}

	//---------------------------------
	function city()
	{
		return "Votre ville ou village natal";
	}
	
	//---------------------------------
	function country()
	{
		return "votre nationalité";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Le serment serait plus efficace si vous avez fourni votre nom. Pourriez-vous s'il vous plaît remplir le formulaire?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Votre serment serait plus utile si vous avez fourni votre ville natale et la nationalité, mais si vous voulez omettre, appuyez simplement sur le «je promets» touche une fois de plus.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Promesse vers un monde sans fission</h1>
			
			<p>Je, $personal_name, m'unis à mes concitoyens du monde en promettant de parler courageusement sur les dangers imposés sur la Terre et tous ses habitants par l'utilisation de la fission nucléaire dans la production d'électricité et des armes militaires.</p>
			
			<p><strong>Je m'engage solennellement à parler courageusement sur les dangers de l'énergie nucléaire.</strong> Le bien-fondé de l'utilisation de la fission nucléaire dans la production d'électricité sont exagérées, et les vrais risques à long terme sont trop importants pour continuer.</p>
			
			<ol>
				<li>L'électricité produite par les centrales nucléaires n'est pas moins cher que les autres formes de production d'électricité.</li>
				<li>Les centrales nucléaires ne peuvent pas être sûr à 100% de l'échec catastrophique.</li>
				<li>Les déchets isotopique créé par la fission nucléaire restera toxique pour un temps très long, et nous n'avons aucun endroit pour le mettre.</li>
				<li>L'énergie nucléaire n'est pas une énergie propre: l'extraction, le broyage et l'enrichissement du minerai d'uranium crée de grands déserts écologiques qui sont nocifs pour les humains et la faune.</li>
				<li>Uranium enrichi pour les centrales électriques et d'uranium hautement enrichi pour les armes nucléaires sont fabriqués avec le même équipement.</li>
			</ol>
			
			<p><strong>Je m'engage solennellement à parler courageusement de l'utilisation militaire des armes nucléaires.</strong> Le temps est venu pour toutes les nations de renoncer à l'utilisation des armes nucléaires.</p>
			
			<ol start='6'>
				<li>Il n'ya aucune raison moralement légitime pour toute personne, organisation ou Etat d'utiliser des armes nucléaires.</li>
				<li>La possession d'armes nucléaires comme un moyen de dissuasion est une politique qui a échoué.</li>
				<li>Nations dotés d'armes nucléaires devraient élaborer des plans de démantèlement en toute sécurité leur arsenal.</li>
				<li>Nations dotés de capacités nucléaires devraient s'engager dans des négociations dont le but est l'abolition complète de toutes les armes nucléaires.</li>
				<li>Personne ne devrait poursuivre le développement de nouvelles armes nucléaires.</li>
			</ol>
			
			<p>Assermenté ce jour, $this_date, en<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>