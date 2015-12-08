<?php
//=============================================================================
//
// File:         /i18n/zhHansHengThankyou.inc
//
// Language:     PHP
//
// Contents:     zhHansHeng = 繁體中文(橫排)  (Traditional Chinese hengpai) horizontal		
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/zhHansHengBasePage.inc' );


//-------------------------------------
class zhHansHengThankyou extends zhHansHengBasePage
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
		return "谢谢你承诺天下无核裂变";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "有了足够的声音，奋勇讲关于核裂变的危险，我们可以使这个世界上没有核裂变。";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "世界上，核裂变";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>谢谢您的承诺</h1>

		<p>谢谢 {$personal_name}。</p>
		
		<p>我真的很感激在这个重要的任务有您的支持。您已加入{$num_pledges}其他人谁也采取了誓言。</p> 
		
		<p>记得要勇敢 - 作证时，时间是正确的。让你的朋友和熟人知道，你相信天下无核裂变。</p>
		
		<p><strong>我希望我们能够一起发挥作用。</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>