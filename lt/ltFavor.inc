<?php
//=============================================================================
//
// File:         /i18n/ltFavor.inc
//
// Language:     PHP
//
// Contents:     lt = Lietuvių (Lithuanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/ltBasePage.inc' );


//-------------------------------------
class ltFavor extends ltBasePage
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
		return "Turiu prašymą";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Jūs galite padėti kalbėdamas drąsiai apie branduolių dalijimosi pavojų.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "branduolinės energetikos objektai, branduolinės energijos, branduolinė energija, branduoliniai ginklai, dalijimosi, Žemė, verdantis vanduo, elektra";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "mūsų gražus mėlyna marmuro!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Iškilmingai pažadu";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Prisiekti "ne daugiau skilimo" priesaiką dabar!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Jūs galite padėti kalbėdamas drąsiai</h1>
			
			<p>Sveiki,</p>
			
			<p>Turiu prašymą. <strong>Ar galite man padėti mano kvesto, kad šis pasaulis be branduolinio dalijimosi?</strong></p>
			
			<p>Leiskite man paaiškinti, kodėl jaučiuosi taip stipriai apie tai.</p>
	
			<p>Kai aš augau, kosmoso tyrimai buvo visą jo šlovės aukščio. Jaudulys, kad kartu nuotykius atrodė būti paskirstytos visiems. Suvirpinti, kad kartu kiekvieną naują etapą, pustyti mūsų apetitą daugiau. Ir tikintis, kad mes tikrai ketiname įdėti žmogų į Mėnulį ir grąžinti jį saugiai į Žemę, nuolat mums užsiima su net nedidelių sėkmių ir nesėkmių projekto.</p>
			
			<p>Prieš pasiekiant šį galutinį tikslą, buvo daug svarbių pasiekimų. Vienas iš labiausiai įkvepia jų buvo, kai astronautai įveikė be Žemės orbitą. Pirmą kartą, žmonės buvo palikti jų gimtojoje planetoje saugumą. Mes buvome kaip suvirpinti prašytojams visą gyvenimą nuotykius.</p>
			
			<p>Ir tada Ryškiausias dalykas atsitiko. Astronautai pažiūrėjau atgal į traukiasi Žemėje, ir pamačiau pirmą kartą mėlyna marmuro, kuris buvo mūsų namuose, ir jie buvo beveik priblokšti tauriųjų grožio, ką jie matė. Fotografijos vaizdai, kad jie siunčiami atgal buvo transliuojami į pasaulį, ir mes taip pat buvo apimtas baimės.</p>
			
			<p>Pažeidžiamumas fiksuojami tų nuotraukomis privertė mus suvokti save taip, kad peržengė visas politines ištikimybę. Dėl trumpo laiko momentu, mes pamiršo apie šaltojo karo, mes atidėtos mūsų skirtumus, ir mes žavėjosi Žemės grožį. Nuo šios naujos sąmonės žinojome tik kokia trapi mūsų vieta Visatoje buvo ir kaip pavojingai arti mes buvome sunaikinti tik namuose mes kada nors turėti.</p>
			
			<p>Mes atsibudo su skubiai nustatyti savo trūkumų. Su veiklos sprogo, dirbome išspręsti mūsų problemas. Tarptautinės sutarties dėl branduolinių ginklų neplatinimo, ir susitarimo uždrausti visus antžeminės bandymai branduolinio ginklo buvo įrodymas, kad mes galime kalbėti apie mūsų bendromis vertybėmis ir siekti bendrų protingus tikslus. Galų gale, su Berlyno sienos ir atšildymo santykių pagrindinių konkurentų iš šaltojo karo rudenį pradėjome pirmas rimtas pastangas, kuriomis siekiama sumažinti bendrą atsargas branduolinių ginklų.</p>
			
			<p>Bet nuo to laiko mes, atrodo, prarado savo užsidegimą už pasaulį be branduolinių ginklų, ir pastarojo meto pastangos tęsti šį darbą nepadarė daug realios pažangos. Po keturis dešimtmečius blausus derybų mes net sugebėjo išlaikyti esamą padėtį: Tarptautinę branduolinių sutartys buvo apeitos ar ignoruojamos; senėjimo pasaulio atsargos blogėja, ir nauja atominė ginklo tyrimai tęsiasi.</p>
			
			<p><strong>Atgrasymo politika aiškiai nepavyko.</strong> Mūsų gėdai, buvo pakeistas neaiškių pažadų ir tuščią retoriką.</p>
			
			<p>Deja, branduoliniai ginklai ne vienintelis mūsų rūpestis. Mes dabar žinome, kad atomines elektrines taip pat kelia didelę grėsmę mūsų brangų Žemėje. Mes tik pradedame pažadinti suvokimas, kad atominės elektrinės negali būti 100% saugus.</p>
			
			<p>Katastrofiškų nelaimių metu Fukušimos niekada turėjo atsitiko dėl branduolinės inžinieriai turėjo paruošti visais įmanomais blogiausiu atveju: jie turėjo saugos taisykles vietoje kiekvienam įrenginio; veiklos procedūros, kuriomis kiekvienai galimai situacijai; nepaprastosios padėties planus, kai viskas, kai negerai; ir daug automatiniai kompensaciniai mechanizmai atveju rezervas įranga neveikia. Visi geriausių pramonės inžinieriai dirbo uoliai ir sąžiningai su sauga, nes jų prioritetas. Tačiau vis dar kažkas baisaus atsitiko. Ir atminkite, kad tai įvyko praėjus 25 metams nuo Černobylio, su pakankamai laiko mokytis iš ankstesnių klaidų.</p>
			
			<p>Šiomis dienomis turiu labai sunku tikėti, beveik viską, kad branduolinės energetikos bendrovėms man pasakyti. Pigiau nei alternatyvų? Švaresnis nei alternatyvų? Saugesnis nei alternatyvų? Ne. Ne. Ne.</p>
			
			<p><strong>Visa tai tik virinti vandenį?</strong></p>
	
			<p>Čia yra paprasta tiesa: nėra nieko ypatingo apie elektros energijos atominėse elektrinėse. Naftos, akmens anglies, dujų ir branduolinės visi naudoja tuos pačius mechanikos elektros energijos. Tai paprasta:</p>
			
			<ol>
				<li>Šilumos šaltinis užvirina vandenį.</li>
				<li>Garo iš verdančio vandens verčia turbinų mentes suktis.</li>
				<li>Turinčios indukcinių ričių, pritvirtintos prie besisukančio turbinos sukurti elektros energijos, kai apsukama magnetiniame lauke.</li>
			</ol>
			
			<p>Elektros energijos yra tiesiog elementinio fizika ir inžinerija. Tad kodėl eiti į verdantį vandenį problemų padalijant atomų? Kodėl reikia kurti pavojingų branduolinių atliekų, kad mes niekada negalime atsikratyti? Kodėl sugadinti aplinką su urano kasybos ir frezavimo kuri sukuria toksinių atliekų žemių? Ir kodėl branduolinės energetikos bendrovių eksportuoti šį pavojingą technologiją besivystančioms šalims?</p>
			
			<p>Taigi čia yra prašymas. <strong>Ar galite padėti man kalbėti apie šiuos paprastus faktus?</strong> Aš neprašau Jus prisijungti prie organizacijos ar paaukoti pinigų, bet tiesiog įtraukti savo vardą į drąsių asmenų sąrašo, kuris kalbės užbe branduolių dalijimosi pasaulį.</p>
			
			<p>Tikiuosi, kad tai bus skirtumas.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>