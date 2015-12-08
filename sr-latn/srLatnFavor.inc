<?php
//=============================================================================
//
// File:         /i18n/srLatnFavor.inc
//
// Language:     PHP
//
// Contents:     sr = Српски (Serbian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/srLatnBasePage.inc' );


//-------------------------------------
class srLatnFavor extends srLatnBasePage
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
		return "Imam zahtev";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Možete pomoći tako hrabro govori o opasnostima od nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearna postrojenja, nuklearne energije, nuklearnog oružja, fisija, Zemlja, ključala voda, struja";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "naša lepa plava mermer!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Svečano obećavam";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "više ne fisija" zakletvu sada!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Možete pomoći tako govoreći hrabro</h1>
			
			<p>Zdravo,</p>
			
			<p>Imam zahtev. <strong>Hoćeš li mi pomoći u mojoj potrazi bi ovaj svet bez nuklearne fisije? </strong></p>
			
			<p>Dozvolite mi da objasnim zašto se osećam tako snažno o ovome.</p>
	
			<p>Kada sam odrastao, istraživanje prostora bio na vrhuncu punom sjaju.Uzbuđenje koje prati avanturu činilo da se dele svi.Uzbuđenje koje prati svaku novu prekretnicu, podstaći naše apetite za više. I anticipacija da ćemo zaista hteli da stavi čoveka na Mesec i vrate ga bezbedno na Zemlju, stalno nas angažovani sa čak manje uspeha i neuspeha projekta.</p>
			
			<p>Pre donošenja tog krajnjeg cilja, bilo je mnogo važnih dostignuća. Jedan od najvažnijih od njih je uzbudljivo kada su astronauti oslobodio iz Zemljine orbite. Po prvi put, ljudi su odlazili na bezbednost svoje matične planete. Bili smo kao uzbuđenje traže u avanturu života.</p>
			
			<p>A onda se desilo najznačajnija stvar. Astronauti pogledao nazad na Zemlju u povlačenju, a vidio prvi put Blue Marble da je naš dom, a oni su skoro poražen od plemenitog lepotom onoga što videše. Fotografske slike koje su poslate nazad su emitovani na svetu, a mi smo bili suviše pun straha.</p>
			
			<p>Ranjivost zarobljeni u tim fotografijama su nas svesno sebe na način koji nadmašuje sve politiku. Za kratak trenutak u vremenu, mi smo zaboravili na Hladnog Rata, izdvajamo naše razlike, a mi divio se lepoti Zemlje. Iz ove nove svesti smo znali koliko krhka naše mesto u svemiru bila je, i koliko opasno blizu smo bili da uništi jedini dom ćemo ikada imati.</p>
			
			<p>Mi probudila sa osećajem hitnosti da popravi naše nedostatke. Sa rafalom aktivnosti, radili smo da popravimo naše probleme.Međunarodni ugovor o proliferacije nuklearnog oružja, i dogovor da se zabrani sve nadzemne testiranje nuklearnog oružja bili dokaz da možemo da razgovaramo o našim zajedničkim vrednostima i postizanje zajedničkih ciljeva razumne. Na kraju, sa padom Berlinskog zida, i odmrzavanja odnosa između glavnih rivala iz Hladnog Rata, počeli smo prvu ozbiljne napore usmerene na smanjenje globalne zalihe nuklearnog oružja.</p>
			
			<p>Ali od tog vremena izgleda da smo izgubili našu strast za svet slobodan od nuklearnog oružja, i nedavni napori da se nastavi taj posao nisu napravili puno stvarni napredak. Posle četiri decenije zastarelo razgovora, nismo ni bili u stanju da održi postojeće stanje: međunarodni ugovori su nuklearne zaobilaze ili ignorišu; starenja globalne zalihe se pogoršavaju, a nova istraživanja nuklearnog oružja nastavlja.</p>
			
			<p><strong>Politika odvraćanja jasno propustila. </strong> Na naše sramote, ona je zamenjena maglovitim obećanjima i praznom retorikom.</p>
			
			<p>Nažalost, nuklearno oružje ne samo naša briga. Mi sada znamo da je nuklearna elektrana takođe predstavljaju ozbiljnu pretnju našem dragocenom Zemlji. Mi tek počinjemo da se probudi do saznanja da nuklearne elektrane ne može da se napravi 100% siguran.</p>
			
			<p>Katastrofa u Fukušimi nikada ne bi trebalo da se desi, jer su nuklearni inženjeri su pripremili za sve moguće najgorem slučaju: oni su imali pravila bezbednosti na mestu za svaki komad opreme; operativne procedure za svaku moguću situaciju, postoje planovi za kada stvari kad pogrešno; i višestruki mehanizmi automatski kompenzuje u slučaju rezerva oprema nije radila. Sve najboljih inženjera u industriji su marljivo i savesno rade sa bezbednost kao svoj prioritet. Ipak, nešto strašno desilo još. I zapamtite, to se desilo 25 godina posle Černobila, sa dovoljno vremena da uče iz prethodnih grešaka.</p>
			
			<p>Ovih dana imam jako teško da poverujem da mi skoro ništa nuklearne energije kompanije kažem. Jeftinije nego alternativa? Čisti od alternativa? Sigurnije od alternativa? Ne. Ne. Ne.</p>
			
			<p><strong>Sve ovo samo da kuvate vodu?</strong></p>
	
			<p>Ovde je jednostavna istina: ne postoji ništa posebno električne energije u nuklearnim elektranama. Ulje, ugalj, gas, nuklearna i svi koriste iste mehanizme za generisanje električne energije. To je jednostavna:</p>
			
			<ol>
				<li>Izvor toplote provri voda.</li>
				<li>Parna iz ključale vode lopatica turbina snage da se okreće.</li>
				<li>Indukcioni kalemovi pričvršćeni za predenje turbine stvaraju struju kada rotira kroz magnetno polje.</li>
			</ol>
			
			<p>Proizvodnja energije je samo elementarna fizika i inženjering. Pa zašto idu u nevolji ključale vode deljenjem atome? Zašto stvoriti opasan nuklearni otpad koji se nikada ne može otarasiti? Zašto kvariti okruženje sa rudarstva uranijuma i glodanje da stvara toksične otpadne zemlje? I zašto su nuklearne elektrane kompanije izvoze ovu opasnu tehnologiju u zemljama u razvoju?</p>
			
			<p>Dakle, ovde je zahtev. <strong>Možeš li mi pomoći da razgovarate o ovim jednostavnim činjenicama?</strong> Ja ne tražim da se pridruže organizaciji ili da doniraju novac, već jednostavno da dodate svoje ime na listu hrabrih pojedinaca koji će govoriti u koristsvet bez nuklearne fisije.</p>
			
			<p>Nadam se da će napraviti razliku.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>