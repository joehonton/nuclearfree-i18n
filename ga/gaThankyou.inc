<?php
//=============================================================================
//
// File:         /i18n/gaThankyou.inc
//
// Language:     PHP
//
// Contents:     ga = Gaeilge (Irish)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/gaBasePage.inc' );


//-------------------------------------
class gaThankyou extends gaBasePage
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
		return "Go raibh maith agat as cion le saol gan eamhnú núicléach";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Le go leor guthanna labhairt misniúil faoi na contúirtí a scoilteadh núicléach, is féidir linn a dhéanamh ar an domhan gan scoilteadh núicléach.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "domhan, núicléach, eamhnú";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Go raibh maith agat as do gealltanas</h1>

		<p>Go raibh maith agat $personal_name.</p>
		
		<p>I ndáiríre buíoch go bhfuil do chuid tacaíochta ar an rompu tábhachtach. Tá tú tar éis dul isteach $num_pledges daoine eile a bhfuil glactha ag an mionn.</p> 
		
		<p>Cuimhnigh a bheith cróga - fianaise a thabhairt nuair a bhíonn an t-am ceart. Lig do chairde agus do lucht aitheantais a fhios go gcreideann tú i saol gan scoilteadh núicléach.</p>
		
		<p><strong>Tá súil agam go chéile is féidir linn difríocht a dhéanamh.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>