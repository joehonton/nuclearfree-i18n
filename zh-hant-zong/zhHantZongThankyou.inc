<?php
//=============================================================================
//
// File:         /i18n/zhHantZongThankyou.inc
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

require_once( __DIR__ . '/../zh-hant-heng/zhHantHengThankyou.inc' );


//-------------------------------------
class zhHantZongThankyou extends zhHantHengThankyou
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->writing_mode = 'vertical-rl';
	}
}
?>