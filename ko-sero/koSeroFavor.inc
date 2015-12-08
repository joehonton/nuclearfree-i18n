<?php
//=============================================================================
//
// File:         /i18n/koSeroFavor.inc
//
// Language:     PHP
//
// Contents:     ko-x-Sero = 한국어(세로쓰기)  (Korean serosseugi) vertical
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/../ko-garo/koGaroFavor.inc' );


//-------------------------------------
class koSeroFavor extends koGaroFavor
{
	//---------------------------------
	function __construct( $language, $pagename )
	{
		parent::__construct( $language, $pagename );
		$this->writing_mode = 'vertical-rl';
	}
}
?>