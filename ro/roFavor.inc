<?php
//=============================================================================
//
// File:         /i18n/roFavor.inc
//
// Language:     PHP
//
// Contents:     ro = Română (Romanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/roBasePage.inc' );


//-------------------------------------
class roFavor extends roBasePage
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
		return "Am o cerere";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Puteți ajuta prin vorbind cu curaj despre pericolele de fisiune nucleară.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "instalațiilor nucleare, energia nucleară, arme nucleare, fisiune, Pământul, apa de fierbere, electricitate";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "marmură nostru albastru frumos!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Promit solemn";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jur "nu mai fisiune" jurământ acum!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Puteți ajuta prin vorbind cu curaj</h1>
			
			<p>Alo!</p>
			
			<p>Am o cerere. <strong>Mă vei ajuta în încercarea mea de a face acest lucru o lume fără fisiunea nucleară?</strong></p>
			
			<p>Permiteți-mi să explic de ce mă simt atât de puternic despre acest lucru.</p>
	
			<p>Când am fost în creștere în sus, explorarea spațiului a fost la înălțimea de glorie deplină. Entuziasmul care a însoțit aventura părea să fie împărtășită de toată lumea. Fiorul care a însoțit fiecare nou punct de reper, va starni apetitul pentru mai mult. Și anticiparea că suntem cu adevărat de gând să pună un om pe Lună și să-l aducă în siguranță pe Pământ, ne-a ținut angajat chiar si cu succesele și eșecurile minore ale proiectului.</p>
			
			<p>Înainte de a ajunge la acest obiectiv final, au fost multe realizări importante. Una dintre cele mai înveselitor dintre acestea a fost atunci când astronauții rupt de orbita Pământului. Pentru prima dată, oamenii au fost lăsând siguranța planetei lor de origine. Am fost ca solicitanții de fiorul pe aventura de o viață.</p>
			
			<p>Și apoi cel mai remarcabil sa întâmplat. Astronautii se uită înapoi la Pământ retrage, și a văzut pentru prima dată Blue Marble care a fost casa noastră, și au fost aproape copleșit de frumusețea prețios a ceea ce au văzut. Imaginile fotografice pe care le-au trimis înapoi au fost difuzate în lume, și am fost prea copleșit.</p>
			
			<p>Vulnerabilitatea capturat în acele fotografii ne-a făcut conștienți de noi înșine într-un mod care transcende toate politica. Pentru un scurt moment în timp, am uitat despre Războiul Rece, am pus deoparte diferențele dintre noi, și am minunat de frumusețea Pământului. Din această nouă conștiință am știut exact cât de fragilă este locul nostru în univers a fost, și cât de periculos de aproape am fost de a distruge singura casa, vom avea vreodată.</p>
			
			<p>Am trezit cu un sentiment de urgență pentru a remedia deficiențele noastre. Cu o explozie de activitate, am lucrat pentru a rezolva problemele noastre. A Tratatului internațional privind proliferarea armelor nucleare, precum și acordul de a interzice toate încercările de mai sus-sol de arme nucleare au fost dovada ca putem vorbi despre valorile noastre comune și realizarea obiectivelor comune sensibile. În cele din urmă, odată cu căderea Zidului Berlinului, și dezghețarea relațiilor dintre principalii rivali ai Razboiului Rece, am început primul efort serios ca scop reducerea stocului global de arme nucleare.</p>
			
			<p>Dar, din acel moment se pare că am pierdut fervoare noastră pentru o lume liberă de arme nucleare, precum și eforturile recente de a continua munca nu s-au făcut progrese reale. După patru decenii de negocieri destul de fragil, nu am fost chiar posibilitatea de a menține situația actuală: tratatelor nucleare internaționale au fost eludate sau ignorate, de imbatranire stocurile globale se deteriorează, și de cercetare noi arme nucleare continuă.</p>
			
			<p><strong>Politica de descurajare a eșuat în mod evident.</strong> Spre rușinea noastră, aceasta a fost înlocuită cu promisiuni vagi și retorică goală.</p>
			
			<p>Din păcate, armele nucleare nu sunt singura noastră preocupare. Știm acum că centralele nucleare reprezintă, de asemenea, o amenințare serioasă pentru prețiosul nostru pământ. Suntem doar la început sa se trezeasca la realizarea că centralele nucleare nu pot fi făcute de 100% în condiții de siguranță.</p>
			
			<p>Catastrofa de la Fukushima nu ar fi avut loc, deoarece inginerii nucleare au pregătit pentru orice scenariu posibil cel mai rău caz: au avut normelor de securitate în loc pentru fiecare piesă de echipament, proceduri de operare pentru fiecare situație posibilă, planuri de urgență pentru când lucrurile atunci când rău; și mai multe mecanisme automate de compensare, în cazul în care echipamentul de rezerva nu au de lucru. Toate cele mai bune ingineri din industrie au fost de lucru cu sârguință și conștiincios, cu siguranta ca prioritatea lor de top. Cu toate acestea, încă ceva teribil sa întâmplat. Și amintiți-vă, aceasta a avut loc 25 de ani de la Cernobîl, cu suficient timp pentru a învăța din greșelile anterioare.</p>
			
			<p>Aceste zile am avea un timp foarte greu să creadă aproape orice ca firmele energie nucleară mi spui. Mai ieftin decât alternativele? Mai curat decât alternativele? Mai sigure decât alternativele? Nu. Nu. Nu.</p>
			
			<p><strong>Toate acestea doar pentru a fierbe apa?</strong></p>
	
			<p>Aici este adevărul simplu: nu este nimic special la energie electrică generată de centralele nucleare. Petrol, cărbune, gaze naturale, iar nuclear toate folosesc același mecanism pentru generarea de electricitate. E simplu:</p>
			
			<ol>
				<li>O sursa de caldura apa fierbe.</li>
				<li>Abur de la apa de fierbere forțează palele turbinei sa se invarta.</li>
				<li>Bobine de inducție atașate turbina filare crea electricitate la o rotație de un câmp magnetic.</li>
			</ol>
			
			<p>Generarea de energie electrică este doar fizică elementară și inginerie. Deci, de ce merge la probleme de apa clocotita de atomi de separare? De ce a crea deșeuri nucleare periculoase pe care noi nu putem scăpa de? De ce strica mediul cu mineritul de uraniu și de frezat, care creează deșeuri toxice-terenuri? Și de ce sunt companiile nucleare exportă această tehnologie periculoasă pentru țările în curs de dezvoltare?</p>
			
			<p>Deci, aici este cererea. <strong>Poți să mă ajuți să vorbesc despre aceste lucruri simple?</strong> Eu nu vă cer să adere la o organizație sau pentru a dona bani, ci pur și simplu pentru a adăuga numele tău la lista de persoane curajoase, care va vorbi în favoarea o lume fără fisiunea nucleară.</p>
			
			<p>Sper că acest lucru va face o diferenta.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>