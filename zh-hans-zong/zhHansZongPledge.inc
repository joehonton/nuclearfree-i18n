<?php
//=============================================================================
//
// File:         /i18n/zhHansZongPledge.inc
//
// Language:     PHP
//
// Contents:     zhHansZong = 简体中文(横排)  (Simplified Chinese zongpai) vertical
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../zh-hans-heng/zhHansHengPledge.inc' );


//-------------------------------------
class zhHansZongPledge extends zhHansHengPledge
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->writing_mode = 'vertical-rl';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>诺言变成一个没有核裂变的世界</h1>
			
			<p>我团结与我的世界公民有为奋勇谈论在发电和军事武器使用核裂变在地球上所规定的危险和所有居民。</p>
			
			<p><strong>我郑重承诺，勇敢谈论核能的危险。</strong>利用核裂变发电的优点被夸大，而真正的长期风险太大继续。</p>
			
			<ol>
				<li>核电厂产生的电力是不是比其他形式的发电便宜。</li>
				<li>核电厂不能进行100％安全的灾难性故障。</li>
				<li>由核裂变产生的同位素废弃物将保持毒性很长一段时间，我们都没有地方放了。</li>
				<li>核能是不干净的能源：在采矿，选矿和富集铀矿造成大型生态废物的土地有害于人类和野生动物。</li>
				<li>浓缩铀用于电厂和高浓缩铀核武器均采用相同的设备。</li>
			</ol>
			
			<p><strong>我郑重承诺，勇敢谈论军使用核武器。</strong>的时机已经成熟，所有国家放弃使用核武器。</p>
			
			<ol start='6'>
				<li>没有任何道德上正当的理由对任何个人，组织或国家使用核武器。</li>
				<li>的拥有核武器作为一种威慑是一个失败的政策。</li>
				<li>国家拥有核武器应制定计划安全地拆除其核武库。</li>
				<li>国家拥有核能力，应进行谈判，其目标是彻底废除所有核武器。</li>
				<li>没有人应该追求的新的核武器的发展。</li>
			</ol>
			
			<p>发誓这一天，的 {$this_date}，在</p>
			
			<div class='cs_horizontal_tb' style='margin: auto 0;'>
				<p>$personal_name</p>
				<p>$city</p>
				<p>$country</p>
			</div>
ENDHTML;
	}
}
?>