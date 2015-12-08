<?php
//=============================================================================
//
// File:         /i18n/sqFavor.inc
//
// Language:     PHP
//
// Contents:     sq = Shqip (Albanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 20, 2013
//
//=============================================================================

require_once( __DIR__ . '/sqBasePage.inc' );


//-------------------------------------
class sqFavor extends sqBasePage
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
		return "Unë kam një kërkesë";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ju mund të ndihmoni duke folur me kurajo për rreziqet e shpërbërjes bërthamore.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "objektet bërthamore, energjia bërthamore, armët bërthamore, shpërbërjes bërthamore, atomike, Toka, ujë valë, energjisë elektrike";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "mermer jonë e bukur blu!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Premtoj solemnisht";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Betohen "jo më shumë atomike" betimin tani!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Ju mund të ndihmoni duke folur me guxim</h1>
			
			<p>Përshëndetje,</p>
			
			<p>Unë kam një kërkesë. <strong>Do të ju ndihmojë mua në kërkimin tim për të bërë këtë një botë pa atomike bërthamore?</strong></p>
			
			<p>Më lejoni të shpjegoj pse ndihem kaq fort në lidhje me këtë.</p>
	
			<p>Kur isha në rritje deri, eksplorimin e hapësirës ishte në kulmin e lavdisë së tij të plotë. Eksitim që e shoqëroi aventurë dukej që do të ndahen nga të gjithë. Emocion që shoqëroi çdo moment të ri, të ngjall oreksin tonë për më shumë. Dhe në pritje që ne me të vërtetë ishin duke shkuar për të vënë një njeri në Hënë dhe të kthehen të sigurt në Tokë, na mbajtur të angazhuar edhe me sukseset e vogla dhe dështimet e projektit.</p>
			
			<p>Para arritjes së këtij qëllimi përfundimtar, ka pasur arritje shumë të rëndësishme. Një nga më të exhilarating nga këto ishte kur astronautët thyen lirë nga orbitën e Tokës. Për herë të parë, njerëzit ishin duke e lënë sigurinë e planetit të tyre në shtëpi. Ne ishim si kërkuesit emocion në aventurën e jetës.</p>
			
			<p>Dhe pastaj gjëja më e shquar ndodhur. Astronautët lëshoi ​​prapa në Tokë largohet, dhe pashë për herë të parë mermeri blu që ishte shtëpia jonë, dhe ata ishin të tronditur pothuajse nga bukuria e çmuar e asaj që ata panë. Imazhet fotografike që ata i dërguan përsëri u transmetuan në botë, dhe ne gjithashtu ishin të magjepsur.</p>
			
			<p>Dobësi kapur në këto fotografi të na bëri të vetëdijshëm për veten në një mënyrë që kapërcen të gjitha politikën. Për një moment të shkurtër në kohë, ne kemi harruar për të Luftës së Ftohtë, ne kemi lënë mënjanë dallimet tona, dhe ne mrekulluar me bukurinë e Tokës. Nga kjo vetëdije e re ne e dinim se sa e brishtë vendi ynë në univers ishte, dhe sa rrezikshmërisht afër ishim të shkatërruar shtëpinë vetëm ne do të ketë kurrë.</p>
			
			<p>Ne u zgjua me një sens urgjence për të rregulluar të metat tona. Me një hov të aktivitetit, ne kemi punuar për të rregulluar problemet tona.Traktat ndërkombëtar mbi përhapjen e armëve bërthamore, dhe marrëveshja për të ndaluar të gjitha testimin e sipër-tokësore e armëve bërthamore ishin dëshmi se ne mund të flasim rreth vlerave tona të përbashkëta dhe për të arritur qëllimet e përbashkëta të ndjeshme. Përfundimisht, me rënien e Murit të Berlinit, dhe shpërbërjen e marrëdhënieve mes rivalëve kryesorë të Luftës së Ftohtë, kemi filluar përpjekjen e parë serioze që synon reduktimin e rezervave globale të armëve bërthamore.</p>
			
			<p>Por që nga ajo kohë ne duket se kanë humbur entuziazmin tonë për një botë të lirë nga armët bërthamore, dhe përpjekjet e fundit për të vazhdojë këtë punë nuk e kanë bërë progres shumë të vërtetë. Pas katër dekadave të bisedimeve pa shkëlqim, ne nuk kemi qenë edhe në gjendje për të ruajtur gjendjen aktuale të punëve: traktatet ndërkombëtare bërthamore kanë qenë të anashkaluar apo injoruar; stoqeve të plakjes globale janë përkeqësuar; dhe të reja të armëve bërthamore kërkimore vazhdon.</p>
			
			<p><strong>Politika e parandalimit ka dështuar në mënyrë të qartë.</strong> Për turpin tonë, ajo është zëvendësuar nga premtimet e paqarta dhe retorikë boshe.</p>
			
			<p>Mjerisht, armët bërthamore nuk janë shqetësimi ynë i vetëm. Ne tani e dimë se bimët bërthamore gjithashtu paraqesin një kërcënim serioz për Tokën tonë të çmuar. Ne jemi vetëm fillimi për të zgjuar në realizimin se reaktorët bërthamorë nuk mund të bëhet 100% të sigurt.</p>
			
			<p>Katastrofa në Fukushima kurrë nuk duhet të ketë ndodhur për shkak se inxhinierët bërthamorë kishte përgatitur për çdo skenar të mundshëm më të keq: ata kishin rregullat e sigurisë në vend për çdo pjesë të pajisjeve, procedurat operative për çdo situatë të mundshme; plane rezervë për kur gjërat kur i gabuar; dhe mekanizma automatike të shumta kompensuese në rast pajisje rezervë nuk punojnë. Të gjitha të inxhinierët më të mirë të industrisë ishin duke punuar me zell dhe me ndërgjegje me sigurinë si prioritet të tyre të lartë. Megjithatë, ende diçka e tmerrshme ka ndodhur. Dhe mbani mend, kjo ka ndodhur 25 vjet pas Çernobilit, me kohë të mjaftueshme për të mësuar nga gabimet e mëparshme.</p>
			
			<p>Këto ditë unë kam një kohë shumë të vështirë të besojnë pothuajse çdo gjë që kompanitë e energjisë bërthamore thoni. Lirë se alternativat? Më të pastër se alternativat? Sigurtë se alternativat? Jo. Jo. Jo.</p>
			
			<p><strong>Gjithë kjo vetëm për të vlim me ujë?</strong></p>
	
			<p>Këtu është e vërteta e thjeshtë: nuk ka asgjë të veçantë në lidhje me energjinë elektrike të gjeneruara nga centraleve bërthamore. Naftës, thëngjillit, gazit, dhe bërthamore gjitha përdorin mekanikë njëjta për gjenerimin e energjisë elektrike. Është e thjeshtë:</p>
			
			<ol>
				<li>Një burim i ngrohjes vlon uji.</li>
				<li>Avull nga uji i vluar detyron blades turbinë të tjerr.</li>
				<li>Spiralet induksion bashkëngjiten turbine tjerrje të krijuar energji elektrike, kur qarkullojnë nëpër një fushë magnetike.</li>
			</ol>
			
			<p>Gjenerimi i energjisë elektrike është vetëm fizika thelbësor dhe inxhinieri. Pra, pse të shkojë në telashe me ujë të valë nga atomet ndarjen? Pse të krijuar mbeturinave të rrezikshme bërthamore që ne kurrë nuk mund të heqin qafe? Pse prishin mjedisin me minierat e uraniumit dhe mulliri që krijon mbetjet toksike-tokat? Dhe pse janë kompanitë e energjisë bërthamore eksportuar këtë teknologji të rrezikshme për vendet në zhvillim?</p>
			
			<p>Kështu që këtu është kërkesa. <strong>Mund të ju ndihmojë mua që të flas në lidhje me këto fakte të thjeshta?</strong> Unë nuk jam duke kërkuar që ju të bashkohet me një organizatë ose të dhurojnë të holla, por thjesht të shtoni emrin tuaj në listën e individëve të guximshëm të cilët do të flasin në favor të një botë pa atomike bërthamore.</p>
			
			<p>Unë shpresoj se kjo do të bëjë një ndryshim.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>