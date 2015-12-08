<?php
//=============================================================================
//
// File:         /i18n/hrmThankyou.inc
//
// Language:     PHP
//
// Contents:     hrm = Hmong
//
// Author:       Joe Honton © 2013
//
// Initial date: October 13, 2013
//
//=============================================================================

require_once( __DIR__ . '/hrmBasePage.inc' );


//-------------------------------------
class hrmThankyou extends hrmBasePage
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
		return "Ua tsaug rau koj cia siab ib lub ntiaj teb no yog tsis muaj nuclear fission";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Nrog txaus suab hais lus nrog muaj peev xwm txog txoj kev txhawj xeeb ntawm nuclear fission, peb yuav ua tau rau lub ntiaj teb no ib yam uas tsis muaj nuclear fission.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "lub ntiaj teb no, nuclear, fission";
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $num_pledges, $this_date )
	{
return <<<ENDHTML
		<h1>Ua tsaug rau koj cog lus</h1>

		<p>Ua tsaug rau koj $personal_name.</p>
		
		<p>Kuv yeej txaus siab rau koj kev txhawb nqa muaj no tseem ceeb heev rau lub hom phiaj. Koj $num_pledges lwm cov neeg uas muaj npaum li cas lub cog lus.</p> 
		
		<p>Nco ntsoov muaj peev xwm - hais tau thaum lub sij hawm yog txoj cai. Cia koj cov phooj ywg paub hais tias koj ntseeg tau tias lub ntiaj teb no nyob rau hauv ib yam uas tsis muaj nuclear fission.</p>
		
		<p><strong>Kuv vam thiab cia siab hais tias ua ke peb yuav ua tau rau ib qhov txawv.</strong></p>
		
		<p>Joseph Honton<br />
		$this_date</p>
ENDHTML;
	}
}
?>