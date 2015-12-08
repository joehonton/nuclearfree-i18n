<?php
//=============================================================================
//
// File:         /i18n/bsLatnFavor.inc
//
// Language:     PHP
//
// Contents:     bs = босански (Bosnian)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/bsLatnBasePage.inc' );


//-------------------------------------
class bsLatnFavor extends bsLatnBasePage
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
		return "Imam upit";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Možete pomoći tako što govori hrabro o opasnostima nuklearne fisije.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklearna postrojenja, nuklearne energije, nuklearno oružje, fisije, Zemlja, vrele vode, struje";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "našem lijepom plavom mramora!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Svečano Obećavam";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zakuni se "više nema fisije" zakletvu sada!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Možete pomoći tako što govori hrabro</h1>
			
			<p>Zdravo,</p>
			
			<p>Imam zahtjev. <strong>Hoćeš li mi pomoći u mojoj potrazi da ovaj svijet bez nuklearnu fisiju?</strong></p>
			
			<p>Dozvolite mi da objasnim zašto sam se tako snažno o tome.</p>
	
			<p>Kada sam odrastao, istraživanje svemira bio na vrhuncu punom sjaju. Uzbuđenje koji su pratili avanture činilo se da dijele svi. Uzbuđenje koje su pratile svaki novi korak, oštriti naše apetite za više. I očekivanju da smo zaista išli staviti čovjeka na Mjesec i sigurno vratiti ga na Zemlju, čuva nas bavi čak i manje uspjeha i neuspjeha projekta.</p>
			
			<p>Prije dolaska da krajnji cilj, bilo je mnogo važnih postignuća. Jedan od najviše uzbudljivo ovih je bilo kada su astronauti kada se oslobodio iz Zemljinu orbitu. Po prvi put, ljudi su ostavljajući sigurnost njihove planete. Bili smo kao uzbuđenje azila na avanturu života.</p>
			
			<p>A onda najupečatljivijih stvari dogodilo. Astronauti osvrnuo na udaljava Zemlji, i vidio po prvi put plavog to je naš dom, a oni su gotovo preplavljeni dragocjene ljepotu onoga što ugledao. Na fotografijama koje su vraćeni su emitovani na svijetu, a mi previše su ispunjen strahopoštovanjem.</p>
			
			<p>Ranjivost zarobljeni u tim fotografijama su nas svjesni sebe na način da je prevazišao sve politika. Za kratak trenutak u vremenu, zaboravili smo o Hladnog rata, izdvajamo naše razlike, a mi divio ljepoti Zemlje. Od ove nove svijesti smo znali koliko je krhka naše mjesto u svemiru bio je, i kako opasno blizu smo bili uništenja jedini dom ćemo ikada imati.</p>
			
			<p>Probudio smo s osjećajem hitnosti da popravi naše nedostatke. Uz nalet aktivnosti, radili smo popraviti naše probleme. Međunarodni sporazum o nuklearnog oružja proliferacije, a sporazum o zabrani svih testiranja nadzemnog nuklearnog oružja bili su dokaz da smo mogli govoriti o našim zajedničkim vrijednostima i ostvarivanja zajedničkih ciljeva razumno. Na kraju, s padom Berlinskog zida, i odmrzavanje odnosa između glavnih rivala hladnog rata, počeli smo prvi ozbiljan napor u cilju smanjenja globalne zalihe nuklearnog oružja.</p>
			
			<p>Ali od tada izgleda da smo izgubili žar za slobodan od nuklearnog oružja svijeta, a nedavni napori da se nastavi taj posao nisu napravili mnogo stvarni napredak. Nakon četiri decenije bez sjaja razgovora, nismo ni bili u stanju da održi postojeće stanje: međunarodne nuklearne ugovorima su zaobići ili ignorišu; starenja globalne zalihe su se pogoršale, a novo istraživanje nuklearnog oružja nastavlja.</p>
			
			<p><strong>Politika odvraćanja jasno je uspio.</strong> Za našu sramotu, to je zamijenjen nejasna obećanja i prazne retorike.</p>
			
			<p>Nažalost, nuklearno oružje nisu naša jedina briga. Mi sada znamo da je nuklearna elektrana i predstavljaju ozbiljnu prijetnju za naše plemenite Zemlju. Mi se tek počinju da se probudi do spoznaje da nuklearne elektrane ne mogu biti 100% sigurna.</p>
			
			<p>Katastrofa u Fukushimi nije trebalo da se dogodilo, jer je nuklearni inženjeri su spremni za sve moguće najgorem slučaju: imali su pravila sigurnosti u mjesto za svaki komad opreme; operativnih procedura za svaku moguću situaciju; planove za kada su stvari kada je u redu, i više automatski mehanizmi kompenzacijski u slučaju opreme rezerve nisu radili. Sve najbolje inženjera u industriji su radili marljivo i savjesno sa sigurnosnim kao svoj glavni prioritet. Ipak, još uvijek se nešto strašno dogodilo. I zapamti, to se desilo 25 godina nakon Černobila, uz dovoljno vremena da uče iz prethodnih grešaka.</p>
			
			<p>Ovih dana imam jako teško vjerujući gotovo ništa da je nuklearna energija kompanija reci mi. Jeftiniji od alternative? Čistija od alternative? Sigurnije od alternative? Ne. Ne. Ne.</p>
			
			<p><strong>Sve ovo samo da provri voda?</strong></p>
	
			<p>Ovdje je jednostavna istina: ne postoji ništa posebno o električne energije proizvedene nuklearnih elektrana. Ulje, ugalj, gasa, i nuklearne svi koriste iste mehanike za proizvodnju električne energije. To je jednostavno:</p>
			
			<ol>
				<li>A izvor topline kuha vodu.</li>
				<li>Para iz kipuće vode snage lopatice turbine da se okreću.</li>
				<li>Indukcija namotaja priključen na predenje turbine stvaraju električnu energiju kada se rotiraju kroz magnetno polje.</li>
			</ol>
			
			<p>Proizvodnja energije je samo elementarne fizike i inženjerstva. Pa zašto bih se mučio kipuće vode razdvajanjem atoma? Zašto stvoriti opasne nuklearnog otpada koje nikada ne možemo riješi? Zašto pokvariti okruženje sa rudarstva urana i glodanja koji stvara toksičnog otpada-zemlje? I zašto su nuklearne elektrane kompanije izvoze ovu opasnu tehnologiju u zemljama u razvoju?</p>
			
			<p>Dakle, ovdje je zahtjev. <strong>Možete li mi pomoći da razgovaramo o ove jednostavne činjenice?</strong> Ja ne tražim da se pridruže organizaciji ili donirati novac, već jednostavno dodati svoje ime na listu hrabrih pojedinaca koji će govoriti u prilog svijet bez nuklearnu fisiju.</p>
			
			<p>Nadam se da će napraviti razliku.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>