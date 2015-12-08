<?php
//=============================================================================
//
// File:         /i18n/zhHantHengThankyou.inc
//
// Language:     PHP
//
// Contents:     zhHantHeng = 繁體中文(橫排)  (Traditional Chinese hengpai) horizontal		
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/zhHantHengBasePage.inc' );


//-------------------------------------
class zhHantHengThankyou extends zhHantHengBasePage
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
		return "謝謝你承諾一個沒有核裂變";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "有了足夠的聲音，奮勇講關於核裂變的危險，我們可以使這個世界上沒有核裂變。";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "世界核，裂變";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>謝謝您的承諾</h1>

		<p>謝謝 $personal_name</p>
		
		<p>我真的很感激在這個重要的任務有您的支持。您已加入{$num_pledges}其他人誰也採取了誓言。</p> 
		
		<p>記得要勇敢 - 作證時，時間是正確的。讓你的朋友和熟人知道，你相信世界上沒有核裂變。</p>
		
		<p><strong>我希望我們能夠一起發揮作用。</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>