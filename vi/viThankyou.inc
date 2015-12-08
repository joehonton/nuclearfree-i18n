<?php
//=============================================================================
//
// File:         /i18n/viThankyou.inc
//
// Language:     PHP
//
// Contents:     vi = Tiếng Việt (Vietnamese)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/viBasePage.inc' );


//-------------------------------------
class viThankyou extends viBasePage
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
		return "Cảm ơn bạn đã cam kết một thế giới không có sự phân hạch hạt nhân";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Với đủ tiếng nói cách can đảm nói tiếng về sự nguy hiểm của phản ứng phân hạch hạt nhân, chúng ta có thể làm cho một thế giới không có sự phân hạch hạt nhân.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "thế giới, phản ứng phân hạch hạt nhân";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Cảm ơn bạn vì lời hứa của bạn</h1>

		<p>Cảm ơn bạn $personal_name.</p>
		
		<p>Tôi thực sự đánh giá cao có hỗ trợ của bạn vào cuộc tìm kiếm quan trọng này. Bạn đã gia nhập $num_pledges những người khác đã đưa ra những lời tuyên thệ.</p> 
		
		<p>Nhớ để được can đảm - làm chứng khi thời gian là đúng. Cho bạn bè và người quen của bạn biết rằng bạn tin tưởng vào một thế giới không có sự phân hạch hạt nhân.</p>
		
		<p><strong>Tôi hy vọng rằng cùng nhau chúng ta có thể tạo sự khác biệt.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>