<?php
//=============================================================================
//
// File:         /i18n/caFavor.inc
//
// Language:     PHP
//
// Contents:     ca = Català (Catalan)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/caBasePage.inc' );


//-------------------------------------
class caFavor extends caBasePage
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
		return "Tinc una petició";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Vostè pot ajudar a parlar amb valentia sobre els perills de la fissió nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "l'energia nuclear, armes nuclears, fissió, la Terra, l'aigua bullint, l'electricitat";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "nostra bella bala blau!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Solemnement prometo";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Juro que el "no més de fissió" jurament ara!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Vostè pot ajudar a parlar amb valentia</h1>
			
			<p>Hola,</p>
			
			<p>Tinc una petició. <strong>¿Va a ajudar-me en la meva recerca per fer d'aquest un món sense la fissió nuclear?</strong></p>
			
			<p>Permetin explicar per què em sento tan fortament sobre això.</p>
	
			<p>Quan jo era petit, exploració espacial estava en la cúspide de la seva glòria. L'emoció que va acompanyar l'aventura semblava ser compartit per tots. L'emoció que acompanya a cada nou pas, anar obrint la gana per més. I la previsió que realment anàvem a posar un home a la Lluna i tornar-ho a salvo a la Terra, ens va mantenir ocupats, fins i tot amb els petits èxits i fracassos del programa.</p>
			
			<p>Abans d'arribar a aquest objectiu final, hi va haver molts èxits importants. Un dels més emocionants d'ells va ser quan els astronautes es va alliberar de l'òrbita terrestre. Per primera vegada, els humans estaven deixant la seguretat del seu planeta d'origen. Érem com amants de l'adrenalina en l'aventura de la seva vida.</p>
			
			<p>I llavors va passar una cosa extraordinària. Els astronautes van mirar cap enrere a la Terra s'allunya, i van veure per primera vegada el marbre blau que era la nostra llar, i van ser gairebé aclaparats per la bellesa preciosa del que van veure. Les imatges fotogràfiques que són retornades es van transmetre al món, i nosaltres també estaven impressionats.</p>
			
			<p>La vulnerabilitat capturada en aquestes fotografies ens va fer conscients de nosaltres mateixos d'una manera que transcendeix totes les filiacions polítiques. Per un breu moment en el temps, ens oblidem de la Guerra Freda, deixem de banda les nostres diferències, i ens meravellem de la bellesa de la Terra. A partir d'aquesta nova consciència sabíem com de fràgil és el nostre lloc en l'univers, i com de perillosament a prop que estàvem destruint l'única llar que mai tindrem.</p>
			
			<p>Ens despertem amb un sentit d'urgència per corregir els nostres defectes. Amb una explosió d'activitat, treballem per solucionar els nostres problemes. El tractat internacional sobre la proliferació d'armes nuclears, i l'acord per prohibir totes les proves sobre el sòl de les armes nuclears eren una prova que podem parlar dels nostres valors compartits i assolir fites raonables comuns. Finalment, amb la caiguda del mur de Berlín i el desglaç de les relacions entre els principals rivals de la Guerra Freda, que va començar el primer esforç seriós destinat a la reducció de la reserva mundial de les armes nuclears.</p>
			
			<p>Però des d'aleshores, sembla que hem perdut el nostre fervor per un món lliure d'armes nuclears i els esforços recents per continuar aquest treball no han avançat molt més real. Després de quatre dècades de converses sense brillantor, ni tan sols hem estat capaços de mantenir l'estat actual de les coses: els tractats internacionals en matèria nuclear s'han eludit o ignorat, les reserves globals d'envelliment s'estan deteriorant, i nova investigació d'armes nuclears continua.</p>
			
			<p><strong>La política de dissuasió ha fracassat clarament.</strong> Per a la nostra vergonya, s'ha substituït per vagues promeses i retòrica buida.</p>
			
			<p>Per desgràcia, les armes nuclears no són la nostra única preocupació. Ara sabem que les centrals nuclears també representen una seriosa amenaça a la nostra preciosa Terra. Estem començant a despertar la consciència que les centrals nuclears no es poden fer 100% segur.</p>
			
			<p>El catastròfic desastre de Fukushima mai hauria d'haver passat perquè els enginyers nuclears havien preparat per a cada possible escenari del pitjor cas: tenien les regles de seguretat en el lloc per a cada peça d'equip, els procediments d'operació per a totes les situacions possibles, els plans de contingència per a quan les coses quan malament; i diversos mecanismes de compensació automàtica en cas que l'equip de reserva no funcionava. Tots els millors enginyers de la indústria estaven treballant amb diligència i en consciència amb la seguretat com la seva principal prioritat. No obstant això, encara va passar una cosa terrible. I recordi, això va passar 25 anys després de Txernòbil, amb el temps suficient per aprendre dels errors anteriors.</p>
			
			<p>Aquests dies tinc un temps molt difícil creure gairebé qualsevol cosa que les companyies d'energia nuclear em diuen. Més barat que les alternatives? Més net que les alternatives? Més segur que les alternatives? No. No. No.</p>
			
			<p><strong>Tot això només per bullir aigua?</strong></p>
	
			<p>Aquesta és la simple veritat: no hi ha res especial sobre l'electricitat generada per les centrals nuclears. Petroli, carbó, gas i nuclear utilitzen els mateixos mecanismes per a la generació d'electricitat. És molt senzill:</p>
			
			<ol>
				<li>Una font de calor bull l'aigua.</li>
				<li>El vapor de l'aigua bullint obliga aspes de les turbines girin.</li>
				<li>Les bobines d'inducció connectats a la turbina de filatura creen electricitat quan es fa girar a través d'un camp magnètic.</li>
			</ol>
			
			<p>La generació d'electricitat és només la física elemental i l'enginyeria. Per què prendre la molèstia d'aigua bullint per la divisió d'àtoms? Per què crear residus nuclears perillosos que mai podem eliminar? Per què arruïnar el medi ambient amb la mineria i tractament d'urani que crea deserts tòxics? ¿I per què les empreses d'energia nuclear exportant aquesta tecnologia perillosa per als països en desenvolupament?</p>
			
			<p>Així que aquí està la solicitud. <strong>Pots ajudar a que parli d'aquests simples fets?</strong> Jo no demano que s'uneixin a una organització o donar diners, sinó simplement per afegir el seu nom a la llista de persones valentes que parlarà a favor de la un món lliure de la fissió nuclear.</p>
			
			<p>Espero que això farà una diferència.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>