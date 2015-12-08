<?php
//=============================================================================
//
// File:         /i18n/miFavor.inc
//
// Language:     PHP
//
// Contents:     mi = 'te reo Māori'  (Maori)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/miBasePage.inc' );


//-------------------------------------
class miFavor extends miBasePage
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
		return "I ahau i te tono";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Ka taea e koe te āwhina i korero te itoito e pā ana ki te mau fifi o te whakangotangota.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "karihi whakaurunga, te mana karihi, te pūngao karihi, patu karihi, wehenga, te whenua, te wai kohua, hiko";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "to tatou mapere puru ataahua!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "fakamātoato fafau";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Oati mai i te "whakangotangota kore ake" oati inaianei!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Ka taea e koe te āwhina mā te korero tahi kia maia</h1>
			
			<p>Kia ora!</p>
			
			<p>He tono i ahau. <strong>E te tauturu ia koe i ahau i roto i toku feinga ki te hanga tenei a te ao, kahore whakangotangota?</strong></p>
			
			<p>Tukua ahau ki te whakamārama he aha ahau ite na kaha e pā ana ki tenei.</p>
	
			<p>A, no te tupu e ahau ki runga, ko te hōpara ātea i te tiketike o tona kororia tonu. Ko te oaoa e haere tahi i te mōrearea ki te whakaaro kia tiri i te katoa. Ko te fiefia i haere tahi ia makamaile hou, whakakoia to tatou mau hiaai no te atu. Na te anaanatae e tino matou i haere ki te hoatu he tangata i runga i te marama me te hoki mai ki a ia he wehi ki te whenua, i puritia e matou aro ki te ara angitu iti manuïa ore o te kaupapa.</p>
			
			<p>I mua i te taenga e fâ hopea roa, i reira i tokomaha nui whakatutukitanga. Ko tētahi o te rahi tino o enei ko ia ia i roto i te ao i te ohuraa kaipōkai-ātea. Hoki i te wā tuatahi, i mahue te tangata i te haumaru o to ratou ao te kāinga. Ko matou rite fekumi fiefia i runga i te mahinga mōrearea o te ora.</p>
			
			<p>Na ka tupu te mea tino faahiahia. Hi'o te kaipōkai-ātea hoki i te whenua i tukuna atu, a ka kite hoki i te wa tuatahi i te mapere puru e ko to matou te whare, a ka i ratou tata i ngaro ai i te ataahua o te utu nui ki ta ratou titiro. Ko te whakapakoko whakaahua i tonoa e ratou hoki i päpäho ki te ao, a ka i matou rawa miharo.</p>
			
			<p>Te mau i roto i te whakaraeraetanga aua whakaahua i hanga mohio tatou o tatou i roto i te ara e upooti'a tōrangapū katoa. Hoki te iti i roto i te wa, wareware matou e pā ana ki te mātao War, whakaturia matou peka tatou rerekētanga, ka miharo matou ki te ataahua o te whenua. Mai i tenei mahara hou i mohio matou tika pehea he pakarukaru to tatou wahi i roto i te ao, ko, me pehea tau ati rahi tata ana matou ki te whakangaro i te te kāinga anake ake tatou e whai.</p>
			
			<p>Faaara matou ki te aronga kōhukihuki tā ki te whakatika i to tatou mau paruparu. Ki te tipu o ngā mahi, i mahi matou ki te whakatika i to tatou mau fifi. Ko te tiriti te ao i runga i patu karihi tini, me te whakaaetanga ki te whakakorehia katoa whakamātautau-whenua ki runga ake o te patu karihi i tohu e taea e matou te korero e pā ana ki to tatou ngā uara, me te whakatutuki i ngā whāinga noa tika. I te pae hopea, ki te hinga o te Berlin Wall, me te tērā o whanaunga i waenganui i te tumuaki tāwhai o te Makariri Pakanga, ka timata matou i te kaha nui tuatahi ki te whakaiti i te erangi te ao o te patu karihi.</p>
			
			<p>Otiia mai i taua wa ki te titiro tatou kua ngaro tatou puai no te he ao noa i te patu karihi, me te kaha tata ki te haere tonu taua mahi e kore i hanga nui te ahunga whakamua tūturu. I muri i ngā tekau tau e wha o te kōrero ngoikore, e kore i ara i matou e taea ki te mau tonu i te āhua o nāianei o ngā take: kua nga tiriti karihi o te ao waiho; e tino taumaha te witi o te ao toulekeleká; a ka haere tonu te rangahau patu karihi hou.</p>
			
			<p><strong>Kua mārama i taka te kaupapa here o te mataku.</strong> Ki to tatou whakama, kua reira kua whakakapia e te mau fafauraa te nuinga ki a kōrero kau.</p>
			
			<p>Aroha, e kore e ta tatou mana'ona'oraa anake patu karihi. Matou e mohio inaianei e tū hoki tipu kaha karihi he takore ki to tatou whenua utu nui. Kua timata tatou ki te ara ki te iteraa e kore e taea te hanga karihi tipu kaha haumaru 100%.</p>
			
			<p>Ko te hurihanga i Fukushima kore e kua tupu no te mea i rite te enetia karihi mo nga tauira e kino rawa-take taea: i ratou i roto i te ture te haumaru wahi mo nga wahi o te taputapu: te whakahaere i ngā tukanga mō te āhuatanga taea katoa; mahere talifaki ka haere he mea; me te kihai pūhanga aunoa maha i roto i te take e mahi i te taputapu rahui. I mahi marie, a maite katoa o pai enetia te ahumahi a ki te haumaru rite ki runga i to ratou matua. Heoi tonu te mea e wehingia ana tupu. Na ka mahara, puta tenei 25 tau i muri i Chernobyl, ki te wa rahi ki te ako i te hape o mua.</p>
			
			<p>Enei ra i ahau he wa tino pakeke tata tetahi mea e te kamupene pūngao karihi korero ki ahau whakapono. Iti ake i te mīti? Waea atu te mīti? Haumaru atu i te mīti? Kahore. Kahore. Kahore.</p>
			
			<p><strong>Noa iho ki kohuatia ai katoa o tenei wai?</strong></p>
	
			<p>Ko te pono māmā: kahore he mea motuhake e pā ana ki te hiko i hanga e te karihi tipu kaha. Te hinu, waro, hau, me te karihi katoa whakamahi i te taua rehe mō te hiko. E mea ohie roa:</p>
			
			<ol>
				<li>Huri te wai ki te mamaoa te pūtake wera.</li>
				<li>Mamaoa i te kohua ope wai matatahi mīhini huri hiko ki te miro.</li>
				<li>Te aratakina piri ki te mīhini huri hiko pōtaka te hanga hiko ka e koané mo roto i te autō.</li>
			</ol>
			
			<p>Hiko he noa iho ahupūngao timatanga me te pūkahatanga. Na he aha haere ki te raruraru o te wai kohua i te wāwāhi ngota? He aha te hanga ururua karihi kino e kore e taea te huna ia tatou o? He aha pahuatia te taiao ki te uranium keri me te mira e hangaia e paitini ururua-whenua? A he aha karihi kamupene te mana kaweake hangarau kino tenei ki te whenua te whakawhanake?</p>
			
			<p>Na ko te tono i konei. <strong>Ka taea e te tauturu ia koe ki ahau kōrero mō enei meka māmā?</strong> E kore ahau e tono koe e ahau ki te uru atu te whakahaere ranei ki te koha moni, engari noa ki te tāpiri i tō ingoa ki te rārangi o ngā tāngata toa te tangata e korero i roto i manakohia o he ao, kahore whakangotangota.</p>
			
			<p>Te ti'aturi nei e ahau, ka meinga he rerekëtanga tenei.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>