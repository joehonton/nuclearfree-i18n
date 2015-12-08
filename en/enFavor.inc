<?php
//=============================================================================
//
// File:         /i18n/enFavor.inc
//
// Language:     PHP
//
// Contents:     en = English
//
// Author:       Joe Honton © 2013
//
// Initial date: September 10, 2013
//
//=============================================================================

require_once( __DIR__ . '/enBasePage.inc' );


//-------------------------------------
class enFavor extends enBasePage
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
		return 'I have a favor to ask you';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'You can help by speaking out about the dangers of nuclear fission.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'nuclear free,nuclear power plants,nuclear energy,nuclear weapons,nuclear fission';
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'Our Beautiful Blue Marble!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Take the Pledge';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Take the Nuclear Free Pledge Now!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>You Can Help by Speaking Up</h1>
			
			<p>Hello,</p>
			
			<p>I have a favor to ask you. <strong>Will you help me in my quest to make this a nuclear free world?</strong></p>
			
			<p>Permit me to explain why I feel so strongly about this.</p>
	
			<p>When I was growing up, space exploration was at the height of its full glory. The excitement that accompanied the adventure seemed to be shared by everyone. The thrill that accompanied each new milestone, whet our appetites for more. And the anticipation that we really were going to put a man on the moon and return him safely to Earth, kept us engaged with even the minor successes and failures of the program.</p>
			
			<p>Before reaching that ultimate goal, there were many important achievements. One of the most exhilarating of these was when the astronauts broke free from Earth orbit. For the first time, humans were leaving the safety of their home planet. We were like thrill seekers on the ultimate joy ride.</p>
			
			<p>And then the most remarkable thing happened. The astronauts glanced back at the receding Earth, and saw for the first time the blue marble that was home, and they were nearly overwhelmed by the precious beauty of what they beheld. The photographic images that they sent back were broadcast to the world, and we too were awestruck.</p>
			
			<p>The vulnerability captured in those photographs made us conscious of ourselves in a way that transcended all political allegiances. For a brief moment in time, we forgot about the Cold War, we set aside our differences, and we marveled at the beauty of Earth. From this new consciousness we knew just how fragile our place in the universe was, and how perilously close we were to destroying the only home we will ever have.</p>
			
			<p>We awakened with a sense of urgency to fix our shortcomings. With a burst of activity, we worked to fix our problems. The international treaty on nuclear weapons proliferation, and the agreement to ban all above-ground testing of nuclear weapons were proof that we could talk about our shared values and achieve common sensible goals. Eventually, with the fall of the Berlin Wall, and the thawing of relations between the principal rivals of the Cold War, we began the first serious effort aimed at reducing the global stockpile of nuclear weapons.</p>
			
			<p>But since that time we seem to have lost our fervor for a world free from nuclear weapons, and recent efforts to continue that work have not made much real progress. After four decades of lackluster talks, we haven't even been able to maintain the status quo: the international nuclear treaties have been circumvented or ignored; the aging global stockpiles are deteriorating; and new nuclear weapons research continues.</p>
			
			<p><strong>The policy of deterrence has clearly failed.</strong> To our shame, it has been replaced by hand-waving and empty rhetoric.</p>
			
			<p>Sadly, nuclear weapons aren't our only concern. We now know that nuclear power plants also pose a serious threat to our precious Earth. We are just beginning to awaken to the realization that nuclear power plants cannot be made 100% safe.</p>
			
			<p>The catastrophic disaster at Fukushima never should have happened because the nuclear engineers had prepared for every possible worst-case scenario: they had safety rules in place for every piece of equipment; operating procedures for every possible situation; contingency plans for when things went wrong; and multiple fail-safe mechanisms in case the backups didn't work. All of the industry's best engineers were working diligently and conscientiously, with safety as their top priority. Yet still something terrible happened. And remember, this occurred 25 years after Chernobyl, with ample time to learn from previous mistakes.</p>
			
			<p>These days I have a very hard time believing almost anything that the nuclear energy companies tell me. Cheaper than the alternatives? Cleaner than the alternatives? Safer than the alternatives? No. No. No.</p>
			
			<p><strong>All of this just to boil water?</strong></p>
	
			<p>Here is the simple truth: there is nothing special about electricity generated by nuclear power plants. Oil, coal, gas and nuclear all use the same mechanics for generating electricity. It's simple:</p>
			
			<ol>
				<li>A heat source boils water.</li>
				<li>Steam from the boiling water forces turbine blades to spin.</li>
				<li>Induction coils attached to the spinning turbine create electricity when rotated through a magnetic field.</li>
			</ol>
			
			<p>Generating electricity is just elemental physics and engineering. So why go to the trouble of boiling water by splitting atoms? Why create dangerous nuclear waste that we can never get rid of? Why spoil the environment with uranium mining and milling that creates toxic wastelands? And why are nuclear power companies exporting this dangerous technology to developing countries?</p>
			
			<p>So here is the favor. <strong>Can you help me to talk about these simple facts?</strong> I'm not asking you to join an organization or to donate money, but simply to add your name to the list of courageous individuals who will speak in favor of a nuclear free world.</p>
			
			<p>I hope this will make a difference.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>