<?php
//=============================================================================
//
// File:         /i18n/zhHansZongThankyou.inc
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

require_once( __DIR__ . '/../zh-hans-heng/zhHansHengThankyou.inc' );


//-------------------------------------
class zhHansZongThankyou extends zhHansHengThankyou
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->writing_mode = 'vertical-rl';
	}
}
?>