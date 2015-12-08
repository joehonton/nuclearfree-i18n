<?php
//=============================================================================
//
// File:         /i18n/roPledge.inc
//
// Language:     PHP
//
// Contents:     ro = Română (Romanian)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 19, 2013
//
//=============================================================================

require_once( __DIR__ . '/roBasePage.inc' );


//-------------------------------------
class roPledge extends roBasePage
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
		return "O promisiune către o lume fără fisiune";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Alăturați-vă împreună cu multi cetateni ai lumii în promisiunea de a vorbi cu curaj despre pericolele impuse de utilizarea a fisiunii nucleare.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "fisiunea nucleară, energie nucleară, armele nucleare, vorbesc cu curaj, promit, promit solemn, jur, jurământul";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Promit să vorbesc cu curaj.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jur "nu mai fisiune" jurământ acum!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "prenumele și numele de familie";
	}

	//---------------------------------
	function city()
	{
		return "Orașul tău sau orașul natal";
	}
	
	//---------------------------------
	function country()
	{
		return "naționalitatea";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Jurământul ar fi mult mai eficient dacă ați furnizat numele tău. Ați putea să vă rugăm să completați formularul?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Jurământul ar fi mai semnificativ dacă ați furnizat orașul tău și de naționalitate, dar dacă vrei să le omite, trebuie doar să apăsați "Promit" buton încă o dată.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>O promisiune către o lume fără fisiune</h1>
			
			<p>Eu, $personal_name, se unesc cu colegii mei cetățeni ai lumii în promisiunea de a vorbi cu curaj despre pericolele impuse asupra Pământului și tuturor locuitorilor săi prin utilizarea a fisiunii nucleare în producerea de electricitate și de arme militare.</p>
			
			<p><strong>Promit solemn de a vorbi cu curaj despre pericolele energiei nucleare</strong> Avantajele utilizării fisiunii nucleare în producerea de electricitate sunt exagerate, iar adevăratele riscuri pe termen lung sunt prea mari pentru a continua..</p>
			
			<ol>
				<li>Electricitatea generată de centralele nucleare nu este mai ieftin decât alte forme de producere a energiei electrice.</li>
				<li>Centralele nucleare nu pot fi 100% sigur de eșec catastrofal.</li>
				<li>Deșeurile izotopică creat de fisiune nucleară va rămâne toxic pentru un timp foarte lung, și nu avem nici un loc să-l pună.</li>
				<li>Energia nucleară nu este energie curată: minerit, frezare, și îmbogățirea minereului de uraniu creează mari de deșeuri terenuri ecologice, care sunt dăunătoare pentru oameni și animale.</li>
				<li>Uraniu îmbogățit pentru centralele electrice și uraniu puternic îmbogățit pentru arme nucleare sunt realizate cu același echipament.</li>
			</ol>
			
			<p><strong>Promit solemn de a vorbi cu curaj despre utilizarea militară a armelor nucleare.</strong> A venit timpul pentru toate națiunile să renunțe la folosirea armelor nucleare.</p>
			
			<ol start='6'>
				<li>Nu există nici un motiv legitim pentru orice punct de vedere moral, organizație individuală sau de stat de a folosi arme nucleare.</li>
				<li>Deținerea de arme nucleare, ca un factor de descurajare este o politică a eșuat.</li>
				<li>Națiuni cu arme nucleare ar trebui să elaboreze planuri de dezmembrare în condiții de siguranță arsenalul lor.</li>
				<li>Națiuni cu capacități nucleare ar trebui să se angajeze în negocieri al căror scop este eliminarea completă a tuturor armelor nucleare.</li>
				<li>Nimeni nu ar trebui să urmărească dezvoltarea de noi arme nucleare.</li>
			</ol>
			
			<p>Jurat la această zi, $this_date, în<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>