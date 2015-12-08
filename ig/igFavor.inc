<?php
//=============================================================================
//
// File:         /i18n/igFavor.inc
//
// Language:     PHP
//
// Contents:     ig = Asụsụ Igbo
//
// Author:       Joe Honton © 2014
//
// Initial date: April 27, 2014
//
//=============================================================================

require_once( __DIR__ . '/igBasePage.inc' );


//-------------------------------------
class igFavor extends igBasePage
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
		return "M na-arịọ";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "I nwere ike inyere gị aka site na-ekwu okwu ji obi ike banyere ihe ize ndụ nke nuklia fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuklia akụrụngwa, nuklia ike, nuklia ume, nuklia na ngwá agha, fission, Ụwa, esi mmiri ọkụ eletrik";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "anyị oma acha anụnụ mabul!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "dị oké njọ o kwe nkwa";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Ṅụọ iyi na "ọ dịghị ihe ọzọ nuklia fission" iyi agbara ugbu a!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>I nwere ike inyere gị aka site na-ekwu okwu ji obi ike</h1>
			
			<p>Ndewo,</p>
			
			<p>M na-arịọ. <strong>Ị enyere m aka m ọchịchọ inwetakwu na-eme ka nke a ụwa na-enweghị nuklia fission?</strong></p>
			
			<p>Akwukwo inara ike m ka m mere ka m na-eche otú ahụ uke ike banyere nke a.</p>
	
			<p>Mgbe m na-etolite etolite, ohere nyocha nọ dị elu nke jupụtara n'ebube. Na amaghi ka odi na sonyeere njem yiri ka a ga-akọrọ site na onye ọ bụla. Nwee mkpali na etiene ọhụrụ ọ bụla mmeta, mere ka anyị na-achọ ihe ndị ọzọ. Na atụmanya anyị n'ezie na-aga ka otu nwoke na ọnwa na-alaghachi ya n'enweghị ihe ọ bụla na Ụwa, nọ na-anyị ekesibuana ọbụna obere ọma ma ọdịda nke oru ngo a.</p>
			
			<p>Tupu eru na kacha ihe mgbaru ọsọ, e nwere ọtụtụ ndị dị mkpa rụzuru. Otu n'ime ihe ndị kasị akpali akpali nke a bụ mgbe ndị astronauts mebiri na Ụwa orbit. Ke akpa ini, ụmụ mmadụ na-ahapụ ndị nchekwa nke ụlọ ha n'uwa. Anyị dị ka wagharịa achọ na njem nke a eyouwem.</p>
			
			<p>Mgbe ndị kasị dị ịrịba ama ihe merenụ. Na astronauts ese ekpri Ụwa, ma hụ na nke mbụ oge acha anụnụ mabul ahụ n'ụlọ anyị, ma ha na-fọrọ nke nta ka bụkwanụ site dị oké ọnụ ahịa na ịma mma nke ihe ha hụrụ. Na foto na ha zigara e ikwuputa ụwa, anyị nwekwara ndị ntunanya.</p>
			
			<p>Ịkpa weghaara ndị foto mere ka anyị adịghị onwe anyị n'ụzọ na emewokwa ihe karịrị ihe niile ndoro-ndoro ochichi. N'ihi obere oge na oge na-aga, anyị na-chefuo banyere Agha Nzuzo, anyị na-ewepụta anyị iche, anyị tụrụ ke mma nke Ụwa. Site na nke a ọhụrụ nsụhọ anyị maara otú na-emebi emebi anyị na eluigwe na ụwa, oleekwa otú dị nnọọ ezigbo anyị na-ebibi naanị ụlọ anyị ga-ebi nwere.</p>
			
			<p>Anyị na-akpọte n'ụra na a n'echiche nke ịdị ngwa idozi anyị mehiere. Na ịkụ-arụ ọrụ, anyị na-arụ ọrụ idozi nsogbu anyị. Mba nkwekorita nuklia na ngwá agha mmeba, na nkwekọrịta machibidotụworo nile n'elu-ala ule nke nuklia na ngwá agha ndị àmà na anyị nwere ike ikwu banyere anyị na-akọrọ ụkpụrụ imeta nkịtị nke inweuche ihe mgbaru ọsọ. N'ikpeazụ, na ọdịda nke Berlin Mgbidi, na okpomoku nke mmekọrịta dị n'etiti isi mba nke Agha Nzuzo, anyị malitere akpa mgbalị siri iji na mbenata uwa ulo mgwo agha nke nuklia na ngwá agha.</p>
			
			<p>Ma, ebe ọ bụ na ka oge na-aga anyị na-iyi ka furu efu anyị agụụ maka ụwa na nuklia na ngwá agha, na-adịbeghị anya, mgbalị iji nọgide na-arụ ọrụ ahụ adịghị ka ọtụtụ ezigbo ọganihu. Mgbe iri afọ anọ nke lackluster okwu, anyị na-adịghị ọbụna ike ịnọgide na-enwe ugbu a na steeti omume: mba nuklia nkwekorita e leghara ya anya; nke merela agadi uwa ulo mgwo agha na-njọ; ọhụrụ nuklia na ngwá agha nnyocha aka iso.</p>
			
			<p><strong>Ndị amụma mbibi ka o doro anya na okpu.</strong> Anyị ihe ihere, ọ na-e dochie anya adabaghi ​​nkwa efu ihapu otutu okwu mee.</p>
			
			<p>N'ụzọ dị mwute, nuklia na ngwá agha ọ bụghị anyị na-atụgharị n'uche. Ugbu a anyị maara na nuklia ike na osisi nakwa inwe ihe dị oké njọ n'ihe ize ndụ anyị dị oké ọnụ ahịa nke Ụwa. Anyị na-dị nnọọ ná mmalite ndidemede na mmezu na nuklia ike osisi enweghị ike mee ka 100% ifụre.</p>
			
			<p>Na ọdachi na Fukushima mgbe kwesịrị mere n'ihi nuklia injinia ama kwadebere maka ọ bụla o kwere omume kasị njọ-tichaa: ha nwere nchedo iwu na ebe ọ bụla mpempe ngwa; ọrụ usoro ọ bụla o kwere omume ọnọdụ; nchekwa atụmatụ maka mgbe ihe mebiri; ma otutu akpaka ji tuputa usoro ahụ idobere akụrụngwa ke arụ ọrụ. Nile nke ulo oru ji mma injinia na-arụ ọrụ na-etinye uchu na nlezianya na-echebe ha n'elu mkpa. Ma ka ihe dị egwu mere. Ma, cheta na ihe a mere isua 25 ke Chernobyl, na otutu oge na-amụta site na aga na-emehie ihe.</p>
			
			<p>Ụbọchị ndị a ka m nwere ike oge ikwere na ọ fọrọ nke nta ihe ọ bụla na nuklia ike ụlọ ọrụ gwa m. Dị ọnụ ala karịa karịa uzo ozo? Dị ọcha karịa uzo ozo? Odi mfe karịa uzo ozo? Mba. Mba. Mba.</p>
			
			<p><strong>Kpukpru emi naanị ka obụpde mmiri?</strong></p>
	
			<p>Nke a bụ ndị dị mfe eziokwu: ọ dịghị ihe pụrụ iche banyere ọkụ eletrik na-amụba nuklia ọkụkụ. Mmanụ, unyi, gaasi, na nuklia niile na-eji otu ihe ahụ ndị ọrụ ụgbọ ala nke na-amụba na ọkụ eletrik. Ọ dị mfe:</p>
			
			<ol>
				<li>Okpomọkụ obụpde mmiri.</li>
				<li>Uzuoku si ekpo ọkụ na mmiri akpata tobaim ka igbagburugburu.</li>
				<li>Itinye n'ọkwa waya mmasị ka tobaim ike ọkụ eletrik mgbe agbanwuru ha site na magnetik.</li>
			</ol>
			
			<p>Na-amụba ka eletrik dị mfe luelu na injinịa. N'ihi ya, na-aga nsogbu nke esi mmiri site kewara atọm? Ntak ike ize ndụ nuklia n'efu ka anyị nwere ike mgbe tufuo? Ntak emi kwatara akwata na gburugburu ebe obibi na uranium igwuputa ihe na egwe ọka na-emepụta awu ahihia-ala? Ndien ntak-a na-eji ngwá odudu na ụlọ ọrụ ndị na-ezisa ihe a ize ndụ teknụzụ ka na-emepe emepe obodo?</p>
			
			<p>Ya mere, ebe a bụ arịrịọ. <strong> nwere ike ị na-enyere m aka ikwu okwu banyere ihe ndị a dị mfe eziokwu?</strong> M na-arịọ gị isonyere nzukọ ma ọ bụ inye ego, kama ka ịgbakwunye aha gị na ndepụta nke enyene uko ndị ga-ekwu okwu na ihu ọma nke a ụwa na-enweghị nuklia fission.</p>
			
			<p>Atụrụ m anya na emi na-eme ka otu ndimiiche.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>