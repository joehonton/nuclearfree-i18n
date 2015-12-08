<?php
//=============================================================================
//
// File:         /i18n/itFavor.inc
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
class itFavor extends itBasePage
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
		return 'Ho un favore da chiederti';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'È possibile aiutare parlare fuori circa i pericoli di fissione nucleare.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "centrali nucleari,l'energia nucleare,armi nucleari,fissione nucleare";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'La nostra Bella Marmo Blu!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Adottare il Pegno';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prendere il "Impegno per un Mondo Libero dal Nucleare" ora!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>È Possibile Aiutare Parlando Fuori</h1>
			
			<p>Salve!</p>
			
			<p>Ho un favore da chiederti. <strong>Mi vuoi aiutare nella mia ricerca per rendere questo un mondo denuclearizzato</strong>?</p>
			
			<p>Mi permetta di spiegare perché mi sento così fortemente su questo.</p>
	
			<p>Quando ero piccola, l'esplorazione dello spazio era al culmine del suo splendore. L'entusiasmo che ha accompagnato l'avventura sembrava essere condivisa da tutti. L'emozione che accompagna ogni nuova pietra miliare, stuzzicare i nostri appetiti di più. E l'anticipazione che davvero stavamo andando a mettere un uomo sulla Luna e farlo tornare in sicurezza a terra, ci ha tenuti impegnati con anche i piccoli successi e fallimenti del programma.</p>
			
			<p>Prima di raggiungere tale obiettivo finale, ci sono stati molti successi importanti. Uno dei più esilarante di questi è stato quando gli astronauti si liberarono da orbita terrestre. Per la prima volta, gli esseri umani stavano lasciando la sicurezza del loro pianeta natale. Eravamo come chi ama il brivido sul giro di gioia finale.</p>
			
			<p>E poi la cosa più notevole è accaduto. Gli astronauti si voltò a guardare la Terra sfuggente, e ha visto per la prima volta il marmo blu che era a casa, e sono stati quasi sopraffatti dalla preziosa bellezza di ciò che videro. Le immagini fotografiche che hanno mandato indietro sono stati trasmessi al mondo, e anche noi erano sbalorditi.</p>
			
			<p>La vulnerabilità catturato in quelle foto ci ha reso consapevoli di noi stessi in un modo che trascende tutte le alleanze politiche. Per un breve momento nel tempo, abbiamo dimenticato la Guerra Fredda, mettiamo da parte le nostre differenze, e ci siamo meravigliati della bellezza della Terra. Da questa nuova consapevolezza che sapevamo quanto sia fragile il nostro posto nell'universo è stato, e come pericolosamente vicino dovessimo distruggere l'unica casa che noi avremo mai.</p>
			
			<p>Siamo svegliati con un senso di urgenza per correggere i nostri difetti. Con una raffica di attività, abbiamo lavorato per risolvere i nostri problemi. Il trattato internazionale sulla proliferazione di armi nucleari, e l'accordo di vietare tutti i test fuori terra delle armi nucleari erano la prova che possiamo parlare dei nostri valori condivisi e raggiungere obiettivi sensibili comuni. Alla fine, con la caduta del Muro di Berlino, e il disgelo delle relazioni tra i principali rivali della Guerra Fredda, abbiamo iniziato il primo serio sforzo volto a ridurre le scorte globali di armi nucleari.</p>
			
			<p>Ma da quel momento ci sembra di aver perso il nostro fervore per un mondo libero da armi nucleari, e dei recenti sforzi per continuare il lavoro che non hanno fatto molti progressi reali. Dopo quattro decenni di colloqui poco brillanti, non siamo nemmeno in grado di mantenere lo statu quo: i trattati nucleari internazionali sono state aggirate o ignorate, le riserve globali di invecchiamento si stanno deteriorando, e la nuova ricerca di armi nucleari continua.</p>
			
			<p><strong>La politica di deterrenza ha chiaramente venuta meno.</strong> Per il nostro peccato, è stato sostituito da vaghe promesse e la retorica vuota.</p>
			
			<p>Purtroppo, le armi nucleari non sono la nostra unica preoccupazione. Ora sappiamo che le centrali nucleari anche rappresentare una seria minaccia per la nostra terra preziosa. Stiamo appena cominciando a risvegliarsi alla consapevolezza che le centrali nucleari non possono essere resi sicuri al 100%.</p>
			
			<p>Il disastro catastrofico di Fukushima non sarebbe dovuto accadere, perché gli ingegneri nucleari avevano preparato per ogni possibile scenario peggiore: avevano regole di sicurezza in vigore per ogni pezzo di equipaggiamento; le procedure operative per ogni possibile situazione; piani di emergenza per quando le cose quando torto; e molteplici procedura di emergenza nel caso in cui i attrezzature di riserva non ha funzionato. Tutti i migliori ingegneri del settore stavano lavorando diligentemente e coscienziosamente con sicurezza come loro priorità. Eppure è accaduto qualcosa di terribile. E ricordate, questo si è verificato 25 anni dopo Chernobyl, con tutto il tempo per imparare dagli errori precedenti.</p>
			
			<p>In questi giorni ho avuto un tempo molto difficile credere quasi tutto ciò che le imprese del settore energetico nucleare mi dicono. Prezzi più bassi che le alternative? Più pulita rispetto alle alternative? Più sicuro che le alternative? No. No. No.</p>
			
			<p><strong>Tutto questo solo per far bollire l'acqua?</strong></p>
	
			<p>Ecco la semplice verità: non c'è niente di speciale in elettricità generata da centrali nucleari. Petrolio, carbone, gas e nucleare usano tutti la stessa meccanica per la produzione di energia elettrica. E 'semplice:</p>
			
			<ol>
				<li>Una fonte di calore l'acqua bolle.</li>
				<li>Vapore dell'acqua bollente costringe palette della turbina a girare.</li>
				<li>Bobine di induzione collegate alla turbina filatura generano elettricità quando ruotata di un campo magnetico.</li>
			</ol>
			
			<p>Generazione di energia elettrica è solo fisica elementare e di ingegneria. Allora perché prenderà la briga di acqua bollente da atomi di scissione? Perché creare scorie nucleari pericolosi che non potremo mai eliminare? Perché rovinare l'ambiente con l'estrazione dell'uranio e fresatura che crea terre desolate tossici? E perché sono società di energia nucleare esportando questa tecnologia pericolosa per i paesi in via di sviluppo?</p>
			
			<p>Così qui è il favore. <strong>Mi potete aiutare a parlare di questi semplici fatti?</strong> Io non chiedo di unirvi una organizzazione o di donare soldi, ma semplicemente di aggiungere il vostro nome alla lista degli individui coraggiosi che parleranno in favore di un mondo senza nucleare.</p>
			
			<p>Spero che questo farà la differenza.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>