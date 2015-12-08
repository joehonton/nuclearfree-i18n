<?php
//=============================================================================
//
// File:         /i18n/zhHantZongPledge.inc
//
// Language:     PHP
//
// Contents:     zhHantZong = 简体中文(纵排)  (Traditional Chinese zongpai) vertical		
//
// Author:       Joe Honton © 2013
//
// Initial date: December 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/../zh-hant-heng/zhHantHengPledge.inc' );


//-------------------------------------
class zhHantZongPledge extends zhHantHengPledge
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
			<h1>對不裂變的世界的承諾</h1>
			
			<p>我團結與我的世界公民有為奮勇談論在發電和軍事武器使用核裂變在地球上所規定的危險和所有居民。</p>
			
			<p><strong>我鄭重承諾，勇敢談論核能的危險。</strong>利用核裂變發電的優點被誇大，而真正的長期風險太大繼續。</p>
			
			<ol>
				<li>核電廠產生的電力是不是比其他形式的發電便宜。</li>
				<li>核電廠不能進行100％安全的災難性故障。</li>
				<li>由核裂變產生的同位素廢棄物將保持毒性很長一段時間，我們都沒有地方放了。</li>
				<li>核能是不乾淨的能源：在採礦，選礦和富集鈾礦造成大型生態廢物的土地有害於人類和野生動物。</li>
				<li>濃縮鈾用於電廠和高濃縮鈾核武器均採用相同的設備。</li>
			</ol>
			
			<p><strong>我鄭重承諾，勇敢談論軍使用核武器。</strong>的時機已經成熟，所有國家放棄使用核武器。</p>
			
			<ol start='6'>
				<li>沒有任何道德上正當的理由對任何個人，組織或國家使用核武器。</li>
				<li>的擁有核武器作為一種威懾是一個失敗的政策。</li>
				<li>國家擁有核武器應制定計劃安全地拆除其核武庫。</li>
				<li>國家擁有核能力，應進行談判，其目標是徹底廢除所有核武器。</li>
				<li>沒有人應該追求的新的核武器的發展。</li>
			</ol>
			
			<p>發誓這一天，{$this_date}， 在</p>
			
			<div class='cs_horizontal_tb' style='margin: auto 0;'>
				<p>$personal_name</p>
				<p>$city</p>
				<p>$country</p>
			</div>
ENDHTML;
	}
}
?>