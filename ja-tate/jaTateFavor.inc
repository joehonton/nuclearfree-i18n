<?php
//=============================================================================
//
// File:         /i18n/jaTateFavor.inc
//
// Language:     PHP
//
// Contents:     ja-x-Yoko = 縦書き日本語		(Japanese tategaki - vertical)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 2, 2013
//
//=============================================================================

require_once( __DIR__ . '/../ja-yoko/jaYokoFavor.inc' );


//-------------------------------------
class jaTateFavor extends jaYokoFavor
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->writing_mode = 'vertical-rl';
	}
}
?>