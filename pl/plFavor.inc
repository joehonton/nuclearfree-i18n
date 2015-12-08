<?php
//=============================================================================
//
// File:         /i18n/plFavor.inc
//
// Language:     PHP
//
// Contents:     pl = Polski (Polish)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/plBasePage.inc' );


//-------------------------------------
class plFavor extends plBasePage
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
		return "Mam prośbę";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Możesz pomóc mówić odważnie o niebezpieczeństwach rozszczepienia jądrowego.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "obiekty jądrowe, energia jądrowa, energia nuklearna, broń jądrowa, rozszczepienie, Ziemia, wrzącej wody, energii elektrycznej";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "nasz piękny niebieski marmur!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Uroczyście obiecuję";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Przysięgam na "nie więcej rozszczepienia" przysięgę teraz!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Możesz pomóc mówiąc odważnie</h1>
			
			<p>Cześć!</p>
			
			<p>Mam prośbę. <strong>Pomożesz mi w dążeniu, aby ten świat bez rozszczepienia jądrowego?</strong></p>
			
			<p>Pozwól mi wyjaśnić, dlaczego czuję się tak mocno o tym.</p>
	
			<p>Kiedy dorastałem, badania kosmosu był na wysokości pełnej krasie.Emocje, które towarzyszą przygodę wydawał się być wspólne dla wszystkich. Emocji, które towarzyszą każdej nowy kamień milowy, zaostrzyć nasze apetyty na więcej. A oczekiwanie, że naprawdę jechaliśmy umieścić człowieka na Księżycu i jego bezpieczny powrót na Ziemię, ciągle nas zajmuje nawet z drobnych sukcesów i porażek projektu.</p>
			
			<p>Przed osiągnięciem tego ostatecznego celu, było wiele ważnych osiągnięć. Jednym z najbardziej radosny z nich był, gdy astronauci uwolnił z ziemskiej orbity. Po raz pierwszy, ludzie opuszczały bezpieczeństwo ich planecie. Byliśmy jak silnych wrażeń na przygodę swojego życia.</p>
			
			<p>A następnie stało się coś najbardziej niezwykłe. Astronauci spojrzał na Ziemi oddala, i zobaczył po raz pierwszy Marmur Niebieski to był nasz dom, a oni prawie przytłoczeni cennego piękna, co ujrzeli. Te obrazy fotograficzne, że odsyłane były transmitowane na świat, a my byliśmy zadziwieni.</p>
			
			<p>Luka zrobione w tych fotografiach nas świadoma siebie w sposób, który przekroczył wszystkie polityki. Przez krótką chwilę w czasie, zapomniał o zimnej wojny, to uchylenie nasze różnice, i podziwiał piękno Ziemi. Ze tej nowej świadomości, że wiedzieliśmy, jak kruche jest nasze miejsce we wszechświecie było i jak niebezpiecznie blisko byliśmy do zniszczenia tylko do domu będziemy kiedykolwiek mieć.</p>
			
			<p>Obudziliśmy się z poczuciem pilności, aby naprawić nasze braki. W przypływie działalności pracowaliśmy, aby naprawić nasze problemy. Traktatu międzynarodowego rozprzestrzeniania broni jądrowej, oraz umowy o zakazie naziemnej testowanie broni jądrowej były dowodem, że możemy mówić o naszych wspólnych wartości i osiągnięcia wspólnych rozsądne cele. Wreszcie, wraz z upadkiem muru berlińskiego i rozmrażania stosunków między głównymi rywalami z okresu zimnej wojny, zaczęliśmy pierwsze poważne starania na rzecz zmniejszenia globalnego arsenału broni nuklearnej.</p>
			
			<p>Ale od tego czasu wydaje się, że straciliśmy nasz zapał do świata wolnego od broni jądrowej, a ostatnich wysiłków, aby kontynuować tę pracę nie nastąpił znaczny rzeczywisty postęp. Po czterech dekadach lackluster rozmów, nie były nawet w stanie utrzymać obecny stan rzeczy: międzynarodowe traktaty zostały jądrowych obejście lub ignorowane, starzejące się światowe zapasy pogarsza, a nowe badania jądrowe broń nadal.</p>
			
			<p><strong>Polityka odstraszania wyraźnie nie.</strong> Do wstydu, został on zastąpiony przez mglistych obietnic i retoryki pusty.</p>
			
			<p>Niestety, broń nuklearna nie są naszym jedynym zmartwieniem. Teraz wiemy, że elektrownie jądrowe stanowią również poważne zagrożenie dla naszego cennego Ziemi. Jesteśmy dopiero zaczynają budzić się do realizacji, że elektrownie jądrowe nie może być w 100% bezpieczne.</p>
			
			<p>Katastrofa w Fukushimie nigdy nie powinno mieć miejsca, ponieważ jądrowych inżynierowie przygotowani na każdy możliwy scenariusz najgorszy: mieli zasad bezpieczeństwa w miejscu dla każdego elementu wyposażenia, procedur operacyjnych dla każdej możliwej sytuacji; plany interwencyjne w przypadku rzeczy, kiedy źle, i wielokrotne automatyczne mechanizmy kompensacyjne w przypadku urządzenia rezerwy nie działa. Wszystko z najlepszych w branży inżynierów pracowali rzetelnie i sumiennie z bezpieczeństwem ich priorytet. A jednak wciąż coś strasznego się stało. I pamiętaj, że miało to miejsce 25 lat po Czarnobylu, z dużo czasu, aby dowiedzieć się od poprzednich błędów.</p>
			
			<p>Te dni mam bardzo ciężko uwierzyć, prawie wszystko, że przedsiębiorstwa energetyczne jądrowe Powiedz mi. Tańsze niż alternatyw? czystsze niż alternatyw? Bezpieczniej niż alternatyw? Nie. Nie. Nie.</p>
			
			<p><strong>Wszystko to tylko do gotowania wody?</strong></p>
	
			<p>Oto prosta prawda: nie ma nic szczególnego w energii elektrycznej wytworzonej przez elektrownie jądrowe. Naftowa, węgiel, gaz, i jądrowej wszystkie używają tych samych mechaników do wytwarzania energii elektrycznej. To proste:</p>
			
			<ol>
				<li>Sprowadza źródło ciepła woda.</li>
				<li>Para z gotującej się wody zmusza łopatki turbiny się kręcić.</li>
				<li>Cewki indukcyjne związane z wirującą turbiny wytwarzania energii elektrycznej, gdy obraca się w polu magnetycznym.</li>
			</ol>
			
			<p>Wytwarzania energii elektrycznej jest tylko elementarnej fizyki i inżynierii. Więc dlaczego się trudzić wrzącej wody przez atomy podziału? Po co tworzyć niebezpieczne odpady nuklearne, że nigdy nie możemy się pozbyć? Dlaczego psują środowisko z wydobyciem uranu i frezowania, który tworzy toksyczne odpady-ląduje? I dlaczego jądrowe przedsiębiorstwa energetyczne eksportu tej niebezpiecznej technologii do krajów rozwijających się?</p>
			
			<p>Więc tutaj jest wniosek. <strong>Pomożesz mi mówić o tych prostych faktów?</strong> Nie pytam Cię do organizacji lub do oddawania pieniędzy, ale po prostu dodać swoje nazwisko do listy odważnych osób, które będą przemawiać na korzyśćświat bez rozszczepienia jądrowego.</p>
			
			<p>Mam nadzieję, że będzie różnica.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>