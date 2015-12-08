<?php
//=============================================================================
//
// File:         /i18n/lvFavor.inc
//
// Language:     PHP
//
// Contents:     lv = Latviešu (Latvian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/lvBasePage.inc' );


//-------------------------------------
class lvFavor extends lvBasePage
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
		return "Man ir lūgumu";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Jūs varat palīdzēt, runājot droši uzlabot par kodola skaldīšanas briesmām.";
	}
			 
	//---------------------------------
	function metaKeywords()
	{
		return "kodoliekārtas, kodolspēkstacijas, kodolenerģija, kodolskaldīšanas, kodolieroči, atomelektrostacijas, skaldīšana, Zeme, verdoša ūdens, elektrība";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "mūsu skaisto zils marmors!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Svinīgi solīt";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Zvēru, ka "ne vairāk kodolskaldīšanas" zvērestu tagad!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Jūs varat palīdzēt, runājot droši uzlabot</h1>
			
			<p>Sveiki,</p>
			
			<p>Man ir lūgumu. <strong>Vai jūs varat man palīdzēt manā meklējumos, lai padarītu šo pasauli bez kodola skaldīšanas?</strong></p>
			
			<p>Ļaujiet man paskaidrot, kāpēc es jūtos tik ļoti par to.</p>
	
			<p>Kad man bija aug, kosmosa izpēte bija augstumu tā pilnā krāšņumā. Uztraukums, kas pievienots piedzīvojumu, šķiet, ir kopīga visiem. Aizraušanās, kas pavada katru jaunu pagrieziena punktu, asināt mūsu apetīte vairāk. Un prognozējot, ka mēs tiešām gatavojamies likt cilvēku uz Mēnesi un atpakaļ viņu droši uz Zemes, tur mēs nodarbojas ar pat nelielas veiksmēm un neveiksmēm projektā.</p>
			
			<p>Nesasniegusi galveno mērķi, tur bija daudzi nozīmīgi sasniegumi. Viens no visvairāk uzmundrinošu no tiem bija, kad astronauti izlauzās no Zemes orbītā. Pirmo reizi, cilvēki bija atstājot drošību viņu mājas planētas. Mēs bijām kā Piedzīvojumu meklētājiem par piedzīvojumu no dzīves.</p>
			
			<p>Un tad visvairāk ievērojams lieta notika. Astronauti paskatījās atpakaļ uz receding Zemes, un redzēja pirmo reizi zilā marmora, kas ir mūsu mājas, un viņi gandrīz pārbagātības dārgo skaistumu, ko viņi redzēja. Fotouzņēmumu, ka viņi nosūtīti atpakaļ tika raidīti uz pasauli, un mums arī bija baiļu pārņemts.</p>
			
			<p>Ievainojamība notverti šajās fotogrāfijās, kas mums apzināties sevi tādā veidā, kas transcendentālas visas politiku. Uz īsu brīdi laika, mēs aizmirsa par Aukstā Kara, mēs neievērojam mūsu atšķirības, un mēs brīnījās skaistumu Zemes. Šīs jaunās apziņas mēs zinājām, cik trausla mūsu vietu Visumā bija, un cik bīstami tuvu mums bija iznīcināt tikai mājās, mēs kādreiz ir.</p>
			
			<p>Mēs pamodās ar sajūtu steidzami noteikt savus trūkumus. Ar pārsprāgt darbības, mēs strādājām, lai noteiktu mūsu problēmas. Starptautisks līgums par kodolieroču neizplatīšanu, un vienošanās aizliegt visus virszemes testēšanu kodolieroču bija pierādījums tam, ka mēs varētu runāt par mūsu kopīgajām vērtībām un sasniegt kopīgus saprātīgus mērķus. Galu galā, ar krita Berlīnes Mūris, un attiecības starp galvenajiem sāncenšiem Aukstā Kara atkausēšanas, mēs sākām pirmo nopietno centienus, kuru mērķis ir samazināt globālo krājumu kodolieroči.</p>
			
			<p>Bet kopš tā laika mēs, šķiet, esam zaudējuši mūsu degsme par pasauli brīvu no kodolieročiem, un nesenie centieni, lai turpinātu šo darbu nav veikuši daudz reālu progresu. Pēc četrām desmitgadēm viduvēja sarunām, mēs neesam pat spējuši saglabāt pašreizējo situāciju: starptautiskos kodolieroču līgumi ir apieti vai ignorēta, arī novecošanās globālie uzkrājumi pasliktinās, un jaunu kodolieroču pētījumi turpinās.</p>
			
			<p><strong>Atturēšanas politika ir acīmredzami nav.</strong> Lai mūsu kauns, tas ir aizstāts ar neskaidriem solījumiem un tukšu retoriku.</p>
			
			<p>Diemžēl, kodolieroči nav mūsu vienīgā problēma. Mēs tagad zinām, ka atomelektrostacijas arī rada nopietnus draudus mūsu dārgo Zemes. Mums ir tikai sākums, lai atmostos pie atziņas, ka atomelektrostacijas nevar 100% drošs.</p>
			
			<p>Pie Fukušimas katastrofa nekad būtu noticis, jo kodolenerģijas inženieri bija sagatavojusi visu iespējamo sliktāko scenāriju: tie bija drošības noteikumus vietā par katru iekārtu, ekspluatācijas procedūras katru iespējamo situāciju, ārkārtas rīcības plānus, kad lietas, ja nepareizi, un vairākas automātiskas kompensācijas mehānismu gadījumā rezerves iekārta nedarbojās. Visi nozares labākajiem inženieriem strādā rūpīgi un apzinīgi ar drošību, kā savu galveno prioritāti. Vēl joprojām ir kaut kas briesmīgs ir noticis. Un atcerieties, tas notika 25 gadus pēc Černobiļas, ar pietiekami daudz laika, lai uzzinātu, no iepriekšējām kļūdām.</p>
			
			<p>Šajās dienās man ir ļoti grūti ticēt gandrīz jebko, ka kodolenerģētikas kompānijas man pateikt. Lētāk nekā alternatīvas? Tīrāka nekā alternatīvas? Drošāka nekā alternatīvas? Nē. Nē. Nē.</p>
			
			<p><strong>Tas viss tikai, lai vārīties ūdeni?</strong></p>
	
			<p>Šeit ir vienkārša patiesība: nekas īpašs par saražotās elektroenerģijas atomelektrostacijās. Naftas, ogļu, gāzes un kodolenerģijas visi izmanto to pašu mehāniku, lai radītu elektroenerģiju. Tas ir vienkārši:</p>
			
			<ol>
				<li>Siltuma avota vārīties ūdeni.</li>
				<li>Tvaiku no verdoša ūdens, liek turbīnu lāpstiņas, lai ieslēgtu.</li>
				<li>Indukcijas spoles pievienots vērpšanas turbīnu radītu elektroenerģiju, ja pagriež par magnētiskā lauka.</li>
			</ol>
			
			<p>Radīt elektrību ir tikai elementāra fizika un inženierzinātnes. Tātad, kāpēc iet uz nepatikšanas verdošu ūdeni, sadalot atomiem? Kāpēc radīt bīstamu kodolatkritumus, ka mēs nekad nevar atbrīvoties no? Kāpēc sabojāt vidi ar urāna ieguves un frēzēšanas, kas rada toksisku atkritumu-zemi? Un kāpēc kodolspēkstacijas uzņēmumi eksportē šo bīstamo tehnoloģiju, lai jaunattīstības valstīm?</p>
			
			<p>Tātad, šeit ir pieprasījums. <strong>Vai jūs varat man palīdzēt, lai runātu par šiem vienkāršiem faktiem</strong>? Es neprasu, lai jūs pievienoties organizācijai vai ziedot naudu, bet vienkārši pievienot savu vārdu sarakstam, drosmīgajiem cilvēkiem, kuri runā par labupasaule bez kodola skaldīšanas.</p>
			
			<p>Es ceru, ka tas dos starpību.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>