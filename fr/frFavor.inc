<?php
//=============================================================================
//
// File:         /i18n/frFavor.inc
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
class frFavor extends frBasePage
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
		return "J'ai une requête";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Vous pouvez nous aider en parlant courageusement sur les dangers de la fission nucléaire.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "le nucléaire, l'énergie nucléaire, armes nucléaires, la fission, la terre, l'eau bouillante, de l'électricité";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "notre beau marbre bleu!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Promettre solennellement";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jurez-le «non plus fission» serment maintenant!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Vous pouvez nous aider en parlant courageusement</h1>
			
			<p>Bonjour,</p>
			
			<p>J'ai une requête. <strong>Voulez-vous m'aider dans ma quête pour faire de ce monde un monde sans fission nucléaire?</strong></p>
			
			<p>Permettez-moi d'expliquer pourquoi je me sens si fortement à ce sujet.</p>
	
			<p>Quand je grandissais, exploration de l'espace est à l'apogée de sa gloire. L'enthousiasme qui a accompagné l'aventure semble être partagée par tout le monde. Le frisson qui accompagne chaque nouvelle étape, aiguiser nos appétits plus. Et l'anticipation que nous avons vraiment allions mettre un homme sur la Lune et le ramener en toute sécurité à terre, nous a tenus engagés, même avec les petits succès et les échecs du programme.</p>
			
			<p>Avant d'atteindre ce but ultime, il ya eu de nombreuses réalisations importantes. L'un des plus exaltante d'entre eux était quand les astronautes se sont libérés de l'orbite de la Terre. Pour la première fois, les humains ont quitté la sécurité de leur planète d'origine. Nous étions comme des amateurs de sensations fortes sur l'aventure d'une vie.</p>
			
			<p>Et puis, la chose la plus remarquable s'est produit. Les astronautes se retourna vers la Terre s'éloigne, et a vu pour la première fois le marbre bleu qui était notre maison, et ils étaient presque submergés par la beauté précieuse de ce qu'ils voyaient. Les images photographiques qui ils sont renvoyés ont été diffusées dans le monde, et nous aussi étaient stupéfaits.</p>
			
			<p>La vulnérabilité capturé dans ces photos nous a fait conscients de nous-mêmes d'une manière qui transcende toutes les allégeances politiques. Pendant un bref moment dans le temps, nous avons oublié la guerre froide, nous avons mis de côté nos différences, et nous avons été émerveillés par la beauté de la Terre. De cette nouvelle conscience, nous savions juste la fragilité de notre place dans l'univers, et comment dangereusement près nous étions à la destruction de la seule maison que nous aurons jamais.</p>
			
			<p>Nous réveillés avec un sentiment d'urgence pour corriger nos lacunes. Avec un regain d'activité, nous avons travaillé pour régler nos problèmes. Le traité international sur la prolifération des armes nucléaires, et l'accord d'interdire tous les essais hors-sol des armes nucléaires étaient la preuve que nous pourrions parler de nos valeurs communes et d'atteindre des objectifs raisonnables communs. Finalement, avec la chute du mur de Berlin, et le dégel des relations entre les principaux rivaux de la guerre froide, nous avons commencé le premier effort sérieux visant à réduire le stock mondial d'armes nucléaires.</p>
			
			<p>Mais depuis ce temps, nous semblons avoir perdu notre ferveur pour un monde exempt d'armes nucléaires et les efforts récents de poursuivre ce travail n'ont pas fait beaucoup de progrès réel. Après quatre décennies de pourparlers en demi-teinte, nous n'avons pas encore été en mesure de maintenir l'état actuel des choses: les traités nucléaires internationaux ont été contournées ou ignorées, les stocks mondiaux de vieillissement sont la détérioration et de nouvelles recherches sur les armes nucléaires se poursuit.</p>
			
			<p><strong>La politique de dissuasion a clairement échoué.</strong> Pour notre honte, il a été remplacé par de vagues promesses et de la rhétorique vide.</p>
			
			<p>Malheureusement, les armes nucléaires ne sont pas notre seule préoccupation. Nous savons maintenant que les centrales nucléaires représentent une menace sérieuse pour notre précieuse planète. Nous commençons tout juste à s'éveiller à la conscience que les centrales nucléaires ne peuvent pas être faites à 100% sûr.</p>
			
			<p>La terrible catastrophe de Fukushima jamais dû se produire parce que les ingénieurs nucléaires avaient préparé pour chaque pire scénario possible: ils ont des règles de sécurité en place pour chaque pièce d'équipement, les procédures d'exploitation pour toutes les situations possibles, des plans d'urgence pour quand les choses si faux; et de multiples mécanismes de compensation automatique en cas de l'équipement de réserve n'ont pas fonctionné. Toutes meilleurs ingénieurs de l'industrie travaillaient avec diligence et consciencieusement avec la sécurité comme leur priorité absolue. Pourtant, encore quelque chose de terrible est arrivé. Et rappelez-vous, cela s'est produit 25 ans après Tchernobyl, avec suffisamment de temps pour apprendre des erreurs passées.</p>
			
			<p>Ces jours-ci j'ai beaucoup de mal à croire presque tout ce que les sociétés d'énergie nucléaire me disent. Moins cher que les autres? Plus propre que les alternatives? Plus sûr que les alternatives? No. No. No.</p>
			
			<p><strong>Tout cela juste pour faire bouillir l'eau?</strong></p>
	
			<p>Voici la vérité simple: il n'y a rien de spécial à propos de l'électricité produite par les centrales nucléaires. Pétrole, charbon, gaz et nucléaire utilisent tous la même mécanique pour produire de l'électricité. C'est simple:</p>
			
			<ol>
				<li>Une source d'eau se résume à la chaleur.</li>
				<li>La vapeur de l'eau bouillante oblige aubes de turbine à tourner.</li>
				<li>Des bobines d'induction attachés à la turbine de filage créer de l'électricité lors d'une rotation à travers un champ magnétique.</li>
			</ol>
			
			<p>La production d'électricité est juste physique élémentaire et de l'ingénierie. Alors, pourquoi se donner la peine de l'eau bouillante par des atomes de fractionnement? Pourquoi créer déchets nucléaires dangereux que nous ne pourrons jamais vous débarrasser? Pourquoi gâcher l'environnement de l'exploitation minière de l'uranium et de traitement qui crée des friches toxiques? Et pourquoi les compagnies d'électricité nucléaire exporter cette technologie dangereuse pour les pays en développement?</p>
			
			<p>Voici donc la demande. <strong>Pouvez-vous m'aider à parler de ces simples faits?</strong> Je ne vous demande pas d'adhérer à une organisation ou à donner de l'argent, mais simplement d'ajouter votre nom à la liste des personnes courageuses qui prendra la parole en faveur de un monde sans fission nucléaire.</p>
			
			<p>J'espère que cela va faire une différence.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>