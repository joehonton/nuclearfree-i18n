<?php
//=============================================================================
//
// File:         /i18n/enInformation.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: November 10, 2013
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enInformation extends enBasePage
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
		return 'Information you can use';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Stay informed . . . speak courageously . . . your voice can make a difference.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'news, email, sign in, sign up, register, social network, referral';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function yesButton()
	{
		return 'Yes';
	}
	
	//---------------------------------
	function yesButtonAlt()
	{
		return 'Keep me informed of the progress we are making.';
	}
	
	//---------------------------------
	function weAgreeButton()
	{
		return 'We agree';
	}
	
	//---------------------------------
	function weAgreeButtonAlt()
	{
		return 'Add our names to the Nuclear Free Pledge.';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function yourName()
	{
		return 'Your name';
	}

	//---------------------------------
	function yourEmailAddress()
	{
		return 'Your email address';
	}

	//---------------------------------
	function familyMemberName()
	{
		return 'Family member name';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'Please provide your given name and family name';
	}
	
	//---------------------------------
	function missingEmailAddress()
	{
		return "Please check the email address you provided. Is it correct?";
	}
	
	//---------------------------------
	function missingFamilyMemberName()
	{
		return "Please provide a family member's name.";
	}
	
	//=============================================================================
	// Table column headers
	//=============================================================================
	
	//---------------------------------
	function columnPledgeName()
	{
		return "Person's name";
	}

	//---------------------------------
	function columnCity()
	{
		return 'City';
	}
	
	//---------------------------------
	function columnCountry()
	{
		return 'Nationality';
	}

	//---------------------------------
	function columnLanguage()
	{
		return 'Language';
	}
	
	//---------------------------------
	function columnDate()
	{
		return 'Date';
	}
	
	//=============================================================================
	// Form completion messages
	//=============================================================================
	
	//---------------------------------
	function thankyouEmail( $email )
	{
		return "I've added $email to my email list. Thanks for staying informed.";
	}
	
	//---------------------------------
	function thankyouEmailDup( $email )
	{
		return "I've already added $email to my email list, but thanks anyway for making sure.";
	}
	
	//---------------------------------
	function thankyouFamilyMembers()
	{
		return "Thank you for asking your family members to join the pledge. Each new voice adds strength to our effort.";
	}
			
	//=============================================================================
	// Social network
	//=============================================================================
	
	//---------------------------------
	function twitterIntent()
	{
		return "Envision a world without fission. More ";
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function emailSignup()
	{
return <<<ENDHTML
		<h1>Start making a difference now</h1>
		<h2>Stay informed</h2>
		<p>You can stay informed of our progress towards a world without fission through occasional emails.</p>
ENDHTML;
	}
	
	//---------------------------------
	function sharing( $patronid )
	{
return <<<ENDHTML
		<h2>Share your pledge</h2>
		<p>Share this website URL, with this unique identifier $patronid, and I will let you know who else is following your leadership by joining the nuclear-free campaign.</p>
ENDHTML;
	}
	
	//---------------------------------
	function speakingCourageously( $form )
	{
return <<<ENDHTML
		<h2>Speak courageously</h2>
		<p>Here are some more ways for you to share your belief in a nuclear-free world.</p>
		<ol>
			<li>Ask your family members to join you by adding their names to the pledge.
$form
			</li>
			<li>Share your thoughts about nuclear fisson on forums where you are a respected member.</li>
			<li>Add a postscript to your email signature — "I've signed the Nuclear Free Pledge".</li>
			<li>Everyone likes to hear a well-told story. Post your story here . . .</li>
		</ol>
ENDHTML;
	}
	
	//---------------------------------
	function yourEffortsAreWorking()
	{
return <<<ENDHTML
		<h2>Your efforts are working</h2>
		
		<p>Thanks to your efforts, these courageous citizens have also taken the pledge. If you know them, thank them personally for speaking up. If you know other people who believe in a nuclear-free world, send them an invitation to join us too.</p>
ENDHTML;
	}
}
?>

