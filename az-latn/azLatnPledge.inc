<?php
//=============================================================================
//
// File:         /i18n/azLatnPledge.inc
//
// Language:     PHP
//
// Contents:     az-Latn = Azərbaycanca (Azerbaijani) using Google Translate
//
// Author:       Joe Honton © 2013
//
// Initial date: November 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/azLatnBasePage.inc' );


//-------------------------------------
class azLatnPledge extends azLatnBasePage
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
		return "Parçalanma olmadan dünyaya doğru söz";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Nüvə parçalanma istifadə tərəfindən qoyulmuş təhlükələri haqqında yüreklice danışmaq vəd birlikdə dünyanın tabeçilikdə vətəndaşları ilə buyurun.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nüvə parçalanma, nüvə enerji, nüvə silahları, andı, and içmək, söz, təntənəli girov, yüreklice danışmaq";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Mən yüreklice danışmaq üçün söz verirəm.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Indi "bir daha parçalanma" qalacağına and içməli!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "Sizin verilmiş adı və soyadı";
	}

	//---------------------------------
	function city()
	{
		return "Sizin məmləkəti";
	}
	
	//---------------------------------
	function country()
	{
		return "Sizin milliyyətindən";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Siz adı təmin əgər andı daha səmərəli olardı. Siz şəklində doldurmaq edə bilərsinizmi?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Sizin andı sizin doğma və vətəndaşlığı təmin daha mənalı ola bilər, lakin siz onları buraxmaq istəyirsinizsə, yalnız "mən söz verirəm" düyməsinə bir daha basın olardı.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Parçalanma olmadan dünyaya doğru söz</h1>
			
			<p>Mən, $personal_name, elektrik nəsil və hərbi silah nüvə parçalanması istifadə edərək yer üzündə tətbiq təhlükələr və onun bütün sakinləri haqqında yüreklice danışmaq vəd dünyanın mənim tabeçilikdə vətəndaşları ilə birləşdirmək.</p>
			
			<p><strong>Mən təntənəli nüvə enerji təhlükələri haqqında yüreklice danışmaq girov.</strong> Elektrik nəsil nüvə parçalanma istifadə mahiyyəti şişirdilmiş və əsl uzun müddətli risklər davam etmək üçün çox böyük olunur.</p>
			
			<ol>
				<li>Nüvə elektrik stansiyası ilə yaradılan elektrik elektrik enerjisinin digər formaları daha ucuz deyil.</li>
				<li>Nüvə stansiyaları fəlakətli uğursuzluq 100% təhlükəsiz edilə bilməz.</li>
				<li>Nüvə parçalanma yaratdığı izotop tullantıların çox uzun müddət zəhərli qalacaq və biz onu qoymaq üçün yer yoxdur.</li>
				<li>Nüvə enerji təmiz enerji deyil: uran filizi mədən, freze, və zənginləşdirilməsi insanlar və heyvanlar üçün zərərli olan böyük ekoloji tullantıların-torpaqları yaradır.</li>
				<li>Elektrik stansiyalarının və nüvə silah üçün yüksək zənginləşdirilmiş uran üçün zənginləşdirilmiş uran həmin avadanlığın ilə edilir.</li>
			</ol>
			
			<p><strong>Mən təntənəli nüvə silah istifadə haqqında yüreklice danışmaq girov.</strong> Bütün xalqlar nüvə silah istifadə imtina üçün vaxt gəlib.</p>
			
			<ol start='6'>
				<li>Bir fərd, təşkilat və ya dövlət nüvə silah istifadə etmək üçün heç bir mənəvi qanuni bir səbəb yoxdur.</li>
				<li>Bir maneə kimi nüvə silah sahiblik uğursuz siyasətdir.</li>
				<li>Nüvə silah millətlərin təhlükəsiz onların arsenalını sökük üçün planlar hazırlamalıdır.</li>
				<li>Nüvə imkanları ilə millətlərin onun məqsədi bütün nüvə silahlarının tam ləğv edir danışıqlarda məşğul olmalıdır.</li>
				<li>Heç bir yeni nüvə silah inkişaf davam etməlidir.</li>
			</ol>
			
			<p>Bu gün, $this_date üçün and içdi, ildə<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>