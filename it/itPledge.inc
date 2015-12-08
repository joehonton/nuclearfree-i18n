<?php
//=============================================================================
//
// File:         /i18n/itPledge.inc
//
// Language:     PHP
//
// Contents:     it = Italian
//
// Author:       Joe Honton © 2013
//
// Initial date: September 16, 2013
//
//=============================================================================

require_once( __DIR__ . '/itBasePage.inc' );


//-------------------------------------
class itPledge extends itBasePage
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
		return 'Prendere il Denuclearizzato Pegno';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Unitevi a noi cittadini del mondo in impegnandosi a parlare coraggiosamente i pericoli imposti dall'uso di fissione nucleare.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'pegno,denuclearizzato';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Mi impegno a parlare fuori.';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prendere il "Impegno per un Mondo Libero dal Nucleare" ora!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return 'Il tuo nome di battesimo e cognome';
	}

	//---------------------------------
	function city()
	{
		return 'La vostra città o paese natale';
	}
	
	//---------------------------------
	function country()
	{
		return 'La tua nazionalità';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'La promessa sarebbe più efficace se hai fornito il tuo nome. La prego di compilare il modulo?';
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Il vostro impegno sarà più significativo se hai fornito la tua città e la nazionalità, ma se si vuole omettere loro, basta premere il tasto "mi impegno" una volta di più.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $w_personal_name, $w_date, $w_city, $w_country )
	{
return <<<ENDHTML
			<h1>Impegno per un Mondo Libero dal Nucleare</h1>
			
			<p>Io, $w_personal_name, unitevi a noi cittadini del mondo in impegnandosi a parlare con coraggio i pericoli imposti sulla Terra e tutti i suoi abitanti con l'uso della fissione nucleare nella generazione di energia elettrica e di armi militari.</p>
			
			<p><strong>Mi impegno a parlare di energia nucleare.</strong> I meriti di usare la fissione nucleare per la generazione di elettricità sono esagerate, ei rischi reali a lungo termine sono troppo grande per continuare.</p>
			
			<ol>
				<li>Energia elettrica prodotta da centrali nucleari non è più conveniente rispetto ad altre forme di produzione di energia elettrica.</li>
				<li>Le centrali nucleari non possono essere fatte al 100% sicuro da guasti catastrofici.</li>
				<li>I rifiuti isotopica creato da fissione nucleare rimarrà tossici per un tempo molto lungo, e non abbiamo alcun posto dove metterlo.</li>
				<li>L'energia nucleare non è un'energia pulita: l'estrazione, la separazione e l'arricchimento del minerale di uranio crea grandi terre desolate ecologici che sono nocivi per l'uomo e la fauna selvatica.</li>
				<li>Uranio arricchito per le centrali elettriche e uranio altamente arricchito per le armi nucleari sono realizzati con la stessa attrezzatura.</li>
			</ol>
			
			<p><strong>Mi impegno a parlare circa l'uso militare della fissione nucleare.</strong> È arrivato il momento per tutte le nazioni a rinunciare all'uso delle armi nucleari.</p>
			
			<ol start='6'>
				<li>Non c'è ragione moralmente legittima per qualsiasi individuo, organizzazione, o stato di usare armi nucleari.</li>
				<li>Il possesso di armi nucleari come deterrente è una politica fallimentare.</li>
				<li>Nazioni con armi nucleari dovrebbero elaborare piani di smantellamento in sicurezza il loro arsenale.</li>
				<li>Nazioni con capacità nucleari dovrebbero impegnarsi in negoziati il cui obiettivo è la completa abolizione di tutte le armi nucleari.</li>
				<li>Nessuna nazione dovrebbe perseguire lo sviluppo di nuove armi nucleari.</li>
			</ol>
			
			<p>Firmato oggi, $w_date, a <br />
			$w_city, $w_country.</p>
ENDHTML;
	}
}
?>