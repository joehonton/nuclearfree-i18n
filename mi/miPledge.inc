<?php
//=============================================================================
//
// File:         /i18n/miPledge.inc
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
class miPledge extends miBasePage
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
		return "He kupu whakaari ki te ao, kahore whakangotangota";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Hono tahi ki te hoa tangata o te ao i roto i te fafau ki te korero te itoito e pā ana ki te fifi i utaina e te whakamahi o te whakangotangota.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "whakangotangota, pūngao karihi, patu karihi, korero te itoito, i whakaaria mai, tino taunaha, oati, oati";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Fafau e ahau ki te korero ki a te itoito";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Oati mai i te "whakangotangota kore ake" oati inaianei!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "ingoa hoatu me te whānau ingoa";
	}

	//---------------------------------
	function city()
	{
		return "pa ranei kainga";
	}
	
	//---------------------------------
	function country()
	{
		return "iwi tūturu";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "E whai hua ake ana i te oati, ki te ngā koe tou ingoa. Te ke lava o whakakiia i roto i te puka?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'E kia tau oati atu ki te whai tikanga ngā koe tou whenua, me te iwi tūturu, engari ki te hiahia koutou ki te waihotia ai ratou, noa iho pēhi i te "fafau atu nei au" kotahi atu pātene.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>He kupu whakaari ki te ao, kahore whakangotangota</h1>
			
			<p>Ahau, $personal_name, whakakotahi ki toku hoa tangata o te ao i roto i te fafau ki te korero te itoito e pā ana ki te fifi utaina ki runga ki te whenua, me ona tangata katoa i te whakamahi o te whakangotangota i roto i te whakatupuranga o te hiko me te i roto i te patu whawhai.</p>
			
			<p><strong>Ahau taunaha te kauwhau ki a korero te itoito e pā ana ki te mau fifi o te pūngao karihi.</strong> E te tiaturi i te hua o te whakamahi i whakangotangota i roto i te whakatupuranga o te hiko, a he nui rawa ki te haere tonu te tūponotanga mō te wā roa-pono.</p>
			
			<ol>
				<li>E kore he iti atu i te tahi atu momo o te hiko whakatupuranga hiko i hanga e te karihi tipu kaha.</li>
				<li>E kore e taea te hanga haumaru 100% i te kore aituā nui kaha karihi.</li>
				<li>Ko te ururua ngota i hanga e te whakangotangota ka noho paitini mo te wa tino roa, a kahore matou e wahi ki te hoatu i te reira.</li>
				<li>E kore ko te pūngao ma pūngao karihi: te maina, mira, me te whakarangatira o te uranium ore hanga nui hauropi ururua-whenua e kino ana ki te tangata me te kararehe.</li>
				<li>Kua hanga e hua uranium mō te tipu kaha, me te tino hua uranium mō te patu karihi ki te taputapu taua.</li>
			</ol>
			
			<p><strong>Ahau taunaha te kauwhau ki a korero te itoito e pā ana ki o patu karihi te whakamahi hōia.</strong> Kua tae mai te wa mo te ki a nga iwi katoa whakarerea te whakamahi o te patu karihi.</p>
			
			<ol start='6'>
				<li>Kahore he take morare tika mo tetahi takitahi, whakahaere, kāwanatanga ranei ki te whakamahi i patu karihi.</li>
				<li>Ko te kaupapa here i taka i te kainga o te patu karihi rite ki te haamăta'ui.</li>
				<li>Me whakawhanake iwi ki te patu karihi mahere mō te humarie tuuraki ratou i täoro ki.</li>
				<li>Iwi ki te kaha karihi kia whai wāhi i roto i ngā whiriwhiringa nei whāinga ko te whakakāhoretanga oti o patu karihi katoa.</li>
				<li>Kia whai i te whanaketanga o te patu karihi hou kahore tetahi.</li>
			</ol>
			
			<p>Oati ki tenei ra, $this_date, i roto i<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>