<?php
//=============================================================================
//
// File:         /i18n/koGaroThankyou.inc
//
// Language:     PHP
//
// Contents:     ko-x-Garo = 한국어(가로쓰기)  (Korean garosseugi) horizontal
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/koGaroBasePage.inc' );


//-------------------------------------
class koGaroThankyou extends koGaroBasePage
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
		return "핵분열이없는 세상을 투입 해 주셔서 감사합니다";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "충분한 목소리가 핵분열의 위험성에 대해 용기있게 말하기, 우리는 핵 핵분열하지 않고이 세상 만들 수 있습니다.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "세계, 핵분열";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>약속 주셔서 감사합니다</h1>

		<p>당신에게 $personal_name 감사합니다.</p>
		
		<p>난 정말이 중요한 탐구에 당신의 지원을 필요 주셔서 감사합니다. 당신은 선서를 한 $num_pledges 다른 사람에 합류했다.</p> 
		
		<p>용기로 기억 - 시간이되면 증언. 당신의 친구 및 지인 당신이 핵분열없는 세상을 믿는 것을 알려주십시오.</p>
		
		<p><strong>내가 함께 우리가 차이를 만들 수 있기를 바랍니다.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>