<?php
//=============================================================================
//
// File:         /i18n/zhHantHengFavor.inc
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
class zhHantHengFavor extends zhHantHengBasePage
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
		return "我有一個請求";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "你可以勇敢地談論核裂變的危險幫助。";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "核設施，核電，核能，核武器，裂變，地球，開水，電";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "我們美麗的藍色大理石！";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "鄭重承諾";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return '現在發誓「沒有更多的裂變」的誓言！';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>你可以通過講奮勇幫助</h1>
			
			<p>你好!</p>
			
			<p>我有一個請求。<strong>你能幫我在我的追求，使這個世界上沒有核裂變？</strong></p>
			
			<p>請允許我解釋為什麼我覺得這樣深有感觸。</p>
	
			<p>當我長大的時候，太空探索是在其盛開的高度。 伴隨著冒險的興奮似乎被大家共享。伴隨每一個新的里程碑的快感，激起我的胃口了。和期待，我們真的打算把一個人送上月球並安全返回他到地球，使我們即使有未成年項目的成功和失敗訂婚。</p>
			
			<p>在達到這一最終目標，有許多重要的成果。其中最令人振奮的，這些是當宇航員掙脫了地球軌道。這是第一次，人類在離開他們的家庭行星的安全。我們喜歡尋求刺激的人在一生的冒險。</p>
			
			<p>然後最了不起的事情發生了。宇航員回頭在後退地球，看到第一次的藍色大理石，這是我們的家，他們幾乎被什麼他們看見了珍貴之美不堪重負。他們發回的照片圖像被廣播到全世界，而我們也都驚奇。</p>
			
			<p>在這些照片中拍攝到的漏洞，使我們意識到我們自己的方式，超越了所有政治。對於時間的匆匆過客，我們忘記了冷戰，我們放下歧見，我們欽佩地球之美。從這個新的意識，我們知道我們在宇宙中的位置正好是多麼脆弱，以及如何危險地接近我們要摧毀我們永遠不會有唯一的家。</p>
			
			<p>我們有一種緊迫感驚醒來解決我們的缺點。隨著爆發出來的運動的，我們的工作來解決我們的問題。對核武器擴散的國際條約，協定，禁止一切核武器地上的測試都證明，我們可以談論我們共同的價值觀，共同明智的目標。最終，隨著柏林牆的倒塌和冷戰的主要對手之間關係的解凍，我們開始了第一次認真的努力旨在減少全球核武器儲備。</p>
			
			<p>但自那時以來，我們似乎已經失去了我們的熱情為無核武器的世界，和最近的努力繼續這項工作沒有取得什麼真正的進展。經過四十年的低迷會談，我們甚至還沒有能夠維持目前的狀況：國際核條約已經被規避或忽視;老化的全球庫存正在惡化，以及新的核武器研究仍在繼續。</p>
			
			<p><strong>威懾的政策已明顯落後。</strong>來我們的恥辱，它已取代含糊的承諾和空話。</p>
			
			<p>可悲的是，核武器不是我們唯一關心的。我們現在知道，核電站也構成了嚴重威脅我們寶貴的地球。我們才剛剛開始覺醒到核電廠不能進行100％安全的實現。</p>
			
			<p>在「福島」的災難根本就不應該發生，因為核工程師們準備了一切可能的最壞的情況：他們在的地方有安全規則，每一件裝備，每一個可能的情況下運行的程序，因為當事情出錯時的應急計劃以及在多種情況下自動補償機制，儲備設備不工作。所有行業最好的工程師都勤勤懇懇安全作為他們的首選工作。然而，仍然有一些可怕的事情發生。請記住，這種情況發生後25年「切爾諾貝利」，有充足的時間從以前的錯誤中吸取教訓。</p>
			
			<p>這些天，我有一個非常很難相信幾乎所有的東西，核能源公司告訴我。較便宜的替代品？較清潔的替代品？比其它的方法更安全？不是。不是。不是。</p>
			
			<p><strong>所有這只是燒開水？</strong></p>
	
			<p>下面是一個簡單的事實：沒有什麼特別的核電廠產生的電力。油，煤，天然氣和核都使用相同的機制，用於產生電力。這很簡單：</p>
			
			<ol>
				<li>熱源煮水。</li>
				<li>從沸水力渦輪機葉片的蒸汽旋轉。</li>
				<li>附著在紡絲渦輪感應線圈產生電力時，通過磁場的旋轉。</li>
			</ol>
			
			<p>發電僅僅是元素物理和工程。那麼，為什麼利用原子核裂變去開水的麻煩？為什麼要建立危險的核廢料，我們永遠無法擺脫？為什麼選擇鈾礦採冶，創造有毒廢物的土地破壞環境？為什麼在核電企業出口這種危險的技術向發展中國家？</p>
			
			<p>因此，這裡的請求。<strong>你能不能幫我說說這些簡單的事實呢？</strong>我不要求你加入某個組織或捐錢，而僅僅是為了您的姓名添加到勇敢的人誰將會贊成發言名單沒有核裂變的世界。</p>
			
			<p>我希望這將有所作為。</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>