<?php
//=============================================================================
//
// File:         /i18n/hrFavor.inc
//
// Language:     PHP
//
// Contents:     hr = Hrvatski (Croatian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 3, 2013
//
//=============================================================================
		 
require_once( __DIR__ . '/hrBasePage.inc' );


//-------------------------------------
class hrFavor extends hrBasePage
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
		return "Imam zahtjev";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Možete pomoći tako hrabro govoriti o opasnostima nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearna postrojenja, nuklearne elektrane, nuklearne energije, nuklearna oružja, fisija, Zemlja, kipuće vode, struje";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "naš lijepi plavi mramor!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Ozbiljno Obećajem";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "nema više fisija" zakletvu sada!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Možete pomoći tako hrabro govoriti</h1>
			
			<p>Zdravo,</p>
			
			<p>Imam zahtjev. <strong>Hoćete li mi pomoći u mom nastojanju da bi ovaj svijet bez nuklearne fisije?</strong></p>
			
			<p>Dopustite mi da objasni zašto se osjećam tako snažno o tome.</p>
	
			<p>Kad sam odrastala, istraživanje svemira bio na vrhuncu punom sjaju.Uzbuđenje koje prati avanture kao da se zajednički svima.Uzbuđenje koje je pratilo svaku novu prekretnicu, oštriti naše apetite više. A očekivanja da smo stvarno bili će se staviti čovjeka na Mjesec i sigurno ga vratiti na Zemlju, čuva nas sudjelovali s čak manjim uspjesima i neuspjesima programa.</p>
			
			<p>Prije dolaska na taj krajnji cilj, bilo je mnogo važnih postignuća. Jedan od najvažnijih uzbudljivo od njih bio je kada su astronauti oslobodio Zemljine orbite. Po prvi put, ljudi napuštaju sigurnost svog rodnog planeta. Bili smo poput uzbuđenje azila na avanturu života.</p>
			
			<p>A onda se dogodilo nešto najviše pažnje. Astronauti se osvrne na opadajući Zemlji, i vidio po prvi put plava mramora koji je naš dom, a oni su gotovo osvaja dragocjeni ljepota ono što vidje. U fotografskih slika da su poslani natrag emitirani su na svijetu, a mi bili pun straha.</p>
			
			<p>Ranjivost zarobljen u tim fotografijama su nas svjesna sebe na način da je nadišao sve političke odanosti. Za trenutak u vremenu, smo zaboravili Hladnog Rata, izdvajamo naše razlike, a mi se divili ljepoti Zemlje. S ovom novom svijesti smo znali koliko je krhko naše mjesto u svemiru bio, i kako opasno blizu smo se uništavaju jedini dom koji smo ikada imati.</p>
			
			<p>Mi probudila s osjećajem hitnosti popraviti sve nedostatke. Uz praska aktivnosti, radili smo se riješili naše probleme.Međunarodni sporazum o nuklearnom oružju proliferacije, te sporazumom o zabrani sve iznad zemlje testiranje nuklearnog oružja bili su dokaz da smo mogli razgovarati o zajedničkim vrijednostima i postizanje zajedničkih ciljeva osjetljiv. Na kraju, s padom Berlinskog Zida, i odmrzavanja odnosa između glavnih suparnika iz Hladnog Rata, počeli smo prvi ozbiljan napor u cilju smanjenja globalne zalihe nuklearnog oružja.</p>
			
			<p>No, od tada mi se čini da su izgubili žar za svijet slobodan od nuklearnog oružja, a nedavni napori da nastavi taj posao nisu napravili mnogo stvarni napredak. Nakon četiri desetljeća lackluster razgovora, nismo ni bili u stanju održati trenutno stanje stvari: za međunarodne nuklearne ugovori bili su izbjegnute ili ignorirati; starenja svjetske zalihe koje su se pogoršavaju, a nova istraživanja i dalje nuklearnog oružja.</p>
			
			<p><strong>Politika odvraćanja očito nije uspjela.</strong> Za našu sramotu, to je zamijenjen nejasnih obećanjima i praznom retorikom.</p>
			
			<p>Nažalost, nuklearno oružje nisu naša jedina briga. Mi sada znamo da nuklearke također predstavljaju ozbiljnu prijetnju za naše dragocjeno Zemlji. Mi smo tek počinju buditi do spoznaje da nuklearne elektrane ne mogu biti 100% siguran.</p>
			
			<p>Katastrofalni katastrofe na Fukushima nije smjelo dogoditi jer su nuklearni inženjeri su spremni za svaku moguću najgorem slučaju: imali sigurnosnih pravila u mjesto za svaki komad opreme, radne procedure za svaku moguću situaciju; planove za kada stvari kada je u krivu; i višestruke automatske kompenzacijske mehanizme u slučaju obvezne opreme ne rade. Sve od industrije najboljih inženjera su marljivo i savjesno sa sigurnosti kao njihov glavni prioritet. Ipak, još uvijek se nešto strašno dogodilo. I zapamtite, to se dogodilo 25 godina nakon Černobila, s dovoljno vremena za učenje iz prijašnjih pogrešaka.</p>
			
			<p>Ovih dana imam jako tvrdo vrijeme vjerujući da su gotovo sve nuklearne energije tvrtki mi reći. Jeftinije od alternativa? Čistiju od alternativa? Sigurnije od alternativa? Ne. Ne. Ne.</p>
			
			<p><strong>Sve to samo da kuhati vodu?</strong></p>
	
			<p>Ovdje je jednostavna istina: ne postoji ništa posebno o električne energije iz nuklearnih elektrana. Nafta, ugljen, plin, i nuklearna svi koriste iste mehanike za proizvodnju električne energije. To je jednostavno:</p>
			
			<ol>
				<li>Izvor topline voda uzavre.</li>
				<li>Para iz kipuće vode tjera turbine lopatice zavrtjeti.</li>
				<li>Indukcija zavojnice priključen na rotirajući turbine stvaraju električnu energiju kada se okretati magnetskom polju.</li>
			</ol>
			
			<p>Dobivanja električne energije je samo elementarna fizika i inženjerstvo. Pa zašto ići u nevolji kipuće vode cijepanjem atoma? Zašto stvoriti opasnu nuklearni otpad koji se nikada ne može osloboditi? Zašto pokvariti ozračje sa urana rudarstvo i glodanja koji stvara otrovni otpad-zemlje? I zašto su nuklearne elektrane tvrtki izvoz u tu opasnu tehnologiju u zemlje u razvoju?</p>
			
			<p>Dakle, ovdje je zahtjev. <strong>Možete li mi pomoći da razgovaraju o ovim jednostavnim činjenicama?</strong> Nisam vas tražim da se pridruže organizaciji ili donirati novac, ali jednostavno dodati svoje ime na popis hrabrih pojedinaca koji će govoriti u prilogsvijet bez nuklearne fisije.</p>
			
			<p>Nadam se da će napraviti razliku.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>