<?php
//=============================================================================
//
// File:         /i18n/azCyrlPledge.inc
//
// Language:     PHP
//
// Contents:     az-Cyrl = Азәрбајҹан дили (Azerbaijani)
//               transliterated from Latn using Mousa Moradi's AzConvert v3.3
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/azCyrlBasePage.inc' );


//-------------------------------------
class azCyrlPledge extends azCyrlBasePage
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
		return "Парчаланма олмадан дүнјаја доғру сөz";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Нүвә парчаланма истифадә тәрәфиндән гојулмуш тәһлүкәләри һаггында јүреклиҹе данышмаг вәд бирликдә дүнјанын табечиликдә вәтәндашлары илә бујурун.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "нүвә парчаланма, нүвә енержи, нүвә силаһлары, анды, анд ичмәк, сөz, тәнтәнәли ҝиров, јүреклиҹе данышмаг";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Мән јүреклиҹе данышмаг үчүн сөz верирәм.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Ынди "бир даһа парчаланма" галаҹағына анд ичмәли!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Сиzин верилмиш ады вә сојады";
	}

	//---------------------------------
	function city()
	{
		return "Сиzин мәмләкәти";
	}
	
	//---------------------------------
	function country()
	{
		return "Сиzин миллијјәтиндән";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Сиz ады тәмин әҝәр анды даһа сәмәрәли оларды. Сиz шәклиндә долдурмаг едә биләрсиниzми?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Сиzин анды сиzин доғма вә вәтәндашлығы тәмин даһа мәналы ола биләр, лакин сиz онлары бурахмаг истәјирсиниzсә, јалныz "мән сөz верирәм" дүјмәсинә бир даһа басын оларды.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Парчаланма олмадан дүнјаја доғру сөz</h1>
			
			<p>Мән $personal_name, електрик нәсил вә һәрби силаһ нүвә парчаланмасы истифадә едәрәк јер үzүндә тәтбиг тәһлүкәләр вә онун бүтүн сакинләри һаггында јүреклиҹе данышмаг вәд дүнјанын мәним табечиликдә вәтәндашлары илә бирләшдирмәк.</p>
			
			<p><strong>Мән тәнтәнәли нүвә енержи тәһлүкәләри һаггында јүреклиҹе данышмаг ҝиров.</strong> Електрик нәсил нүвә парчаланма истифадә маһијјәти шиширдилмиш вә әсл уzун мүддәтли рискләр давам етмәк үчүн чох бөјүк олунур.</p>
			
			<ol>
				<li>Нүвә електрик стансијасы илә јарадылан електрик електрик енержисинин диҝәр формалары даһа уҹуz дејил.</li>
				<li>Нүвә стансијалары фәлакәтли уғурсуzлуг 100% тәһлүкәсиz едилә билмәz.</li>
				<li>Нүвә парчаланма јаратдығы иzотоп туллантыларын чох уzун мүддәт zәһәрли галаҹаг вә биz ону гојмаг үчүн јер јохдур.</li>
				<li>Нүвә енержи тәмиz енержи дејил: уран филиzи мәдән, фреzе, вә zәнҝинләшдирилмәси инсанлар вә һејванлар үчүн zәрәрли олан бөјүк еколожи туллантыларын-торпаглары јарадыр.</li>
				<li>Електрик стансијаларынын вә нүвә силаһ үчүн јүксәк zәнҝинләшдирилмиш уран үчүн zәнҝинләшдирилмиш уран һәмин аваданлығын илә едилир.</li>
			</ol>
			
			<p><strong>Мән тәнтәнәли нүвә силаһ истифадә һаггында јүреклиҹе данышмаг ҝиров.</strong> Бүтүн халглар нүвә силаһ истифадә имтина үчүн вахт ҝәлиб.</p>
			
			<ol start='6'>
				<li>Бир фәрд, тәшкилат вә ја дөвләт нүвә силаһ истифадә етмәк үчүн һеч бир мәнәви гануни бир сәбәб јохдур.</li>
				<li>Бир манеә кими нүвә силаһ саһиблик уғурсуz сијасәтдир.</li>
				<li>Нүвә силаһ милләтләрин тәһлүкәсиz онларын арсеналыны сөкүк үчүн планлар һаzырламалыдыр.</li>
				<li>Нүвә имканлары илә милләтләрин онун мәгсәди бүтүн нүвә силаһларынын там ләғв едир данышыгларда мәшғул олмалыдыр.</li>
				<li>Һеч бир јени нүвә силаһ инкишаф давам етмәлидир.</li>
			</ol>
			
			<p>Бу ҝүн, $this_date үчүн анд ичди, илдә<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>