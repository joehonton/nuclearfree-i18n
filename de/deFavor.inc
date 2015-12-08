<?php
//=============================================================================
//
// File:         /i18n/deFavor.inc
//
// Language:     PHP
//
// Contents:     de = German
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/deBasePage.inc' );


//-------------------------------------
class deFavor extends deBasePage
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
		return 'Ich habe eine Anfrage';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Sie können durch Sprechen mutig über die Gefahren der Kernspaltung zu helfen.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'Kernenergie, Atomenergie, Atomwaffen, Kernspaltung, Erde, kochendes Wasser, Strom';
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'Unsere schönen blauen Marmor!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Feierlich Versprechen';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Schwören das "Nicht mehr Kernspaltung" Eid jetzt!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Sie können durch Sprechen Mutig Hilfe</h1>
			
			<p>Guten Tag!</p>
			
			<p>Ich habe eine Anfrage. <strong>Hilfst du mir in meinem Bestreben, diese eine Welt ohne Kernspaltung zu machen?</strong></p>
			
			<p>Lassen Sie mich erklären, warum ich so stark über diese fühlen.</p>
	
			<p>Als ich aufwuchs, war die Erforschung des Weltraums auf der Höhe seiner vollen Pracht. Die Aufregung, die das Abenteuer begleitet schien von allen geteilt werden. Der Nervenkitzel, dass jede neue Meilenstein begleitet, wetzen unseren Appetit auf mehr. Und die Erwartung, dass wir wirklich wollten, einen Mann auf den Mond zu bringen und bringt ihn sicher zur Erde, hielt uns engagiert selbst mit den kleinen Erfolgen und Misserfolgen des Programms.</p>
			
			<p>Vor dem Erreichen dieses Ziel gab es viele wichtige Errungenschaften. Eines der aufregendsten dieser war, als die Astronauten brach frei von der Erdumlaufbahn. Zum ersten Mal wurden die Menschen verlassen die Sicherheit ihrer Heimatplaneten. Wir waren wie Wagemutige auf das Abenteuer ihres Lebens.</p>
			
			<p>Und dann das Merkwürdigste passiert. Die Astronauten blickte zurück auf die zurückweichenden Erde und sah zum ersten Mal die blaue Murmel, die unsere Heimat war, und sie wurden fast durch das kostbare Schönheit dessen, was sie sah überwältigt. Die fotografischen Bilder, die sie zurückgeschickt wurden, um der ganzen Welt ausgestrahlt, und auch wir waren überwältigt.</p>
			
			<p>Die Sicherheitslücke in diesen Bildern festgehalten haben uns bewusst von uns selbst in einer Weise, die alle politischen Zugehörigkeiten transzendiert. Für einen kurzen Moment in der Zeit, wir vergessen über den Kalten Krieg, wir beiseite unsere Unterschiede, und wir staunten über die Schönheit der Erde. Von diesem neuen Bewusstsein wir wussten, wie zerbrechlich unser Platz im Universum war und wie gefährlich nahe wir zerstören die einzige Heimat, die wir je haben werden konnten.</p>
			
			<p>Wir arbeiten mit einem Gefühl der Dringlichkeit geweckt, unsere Mängel zu beheben. Mit einem Ausbruch von Aktivität, arbeiteten wir, um unsere Probleme zu beheben. Der Internationale Vertrag über Atomwaffen und des Abkommens auf alle oberirdischen Atomwaffentests verbieten waren der Beweis, dass wir über unsere gemeinsamen Werte zu sprechen und eine gemeinsame sinnvolle Ziele. Schließlich mit dem Fall der Berliner Mauer und dem Auftauen der Beziehungen zwischen den wichtigsten Rivalen des Kalten Krieges, begannen wir den ersten ernsthaften Versuch zur Verringerung der globalen Lagerbestände von Atomwaffen gerichtet.</p>
			
			<p>Aber seit dieser Zeit scheinen wir verloren unsere Leidenschaft für eine Welt frei von Atomwaffen, und die jüngsten Bemühungen um die Arbeit fortzusetzen haben, nicht viel echte Fortschritte gemacht. Nach vier Jahrzehnten der glanzlosen Gespräche haben wir nicht einmal in der Lage gewesen, um den aktuellen Stand der Dinge zu halten: die internationalen nuklearen Verträge wurden umgangen oder missachtet, die Alterung globalen Lagerbestände verschlechtern und neue Atomwaffen Forschung geht weiter.</p>
			
			<p><strong>Die Politik der Abschreckung hat eindeutig versagt.</strong> Zu unserer Schande, es wurde von vagen Versprechungen und leere Rhetorik ersetzt worden.</p>
			
			<p>Leider sind Atomwaffen nicht unsere einzige Sorge. Wir wissen jetzt, dass Kernkraftwerke auch eine ernsthafte Bedrohung für unsere kostbare Erde. Wir fangen gerade erst an zu der Erkenntnis wecken, dass Kernkraftwerke nicht 100% sicher gemacht werden.</p>
			
			<p>Die katastrophale Katastrophe in Fukushima sollte nie geschehen, weil die nuklearen Ingenieure für jede mögliche Worst-Case-Szenario vorbereitet hatten: sie hatten Sicherheitsvorschriften in Platz für jeden Ausrüstungsgegenstand Betriebsverfahren für jede mögliche Situation, Notfallpläne für die, wenn die Dinge, wenn falsch; und mehrere automatische Kompensationsmechanismen bei der Reserve Ausrüstung hat nicht funktioniert. All der branchenweit besten Ingenieure wurden sorgfältig und gewissenhaft arbeiten mit Sicherheit als ihre oberste Priorität. Doch noch etwas Schreckliches passiert. Und denken Sie daran, trat dieser 25 Jahre nach Tschernobyl, mit genügend Zeit, um aus früheren Fehlern zu lernen.</p>
			
			<p>In diesen Tagen habe ich eine sehr schwer zu glauben, fast alles, was die Kernenergie Unternehmen mir sagen. Billiger als die Alternativen? Nein. Sauberer als die Alternativen? Nein. Sicherer als die Alternativen? Nein.</p>
			
			<p><strong>All dies nur um Wasser kochen?</strong></p>
	
			<p>Hier ist die einfache Wahrheit: Es gibt nichts Besonderes an Strom durch Atomkraftwerke erzeugt. Öl, Kohle, Gas und Kernenergie verwenden alle die gleiche Mechanik zur Erzeugung von Strom. Es ist ganz einfach:</p>
			
			<ol>
				<li>Eine Wärmequelle kocht Wasser.</li>
				<li>Dampf aus dem kochenden Wasser zwingt Turbinenschaufeln zu drehen.</li>
				<li>Induktionsspulen, die an der sich drehenden Turbine Strom erzeugen, wenn sie gedreht durch ein Magnetfeld.</li>
			</ol>
			
			<p>Die Erzeugung von Strom ist nur elementare Physik und Ingenieurwissenschaften. Warum also die Mühe mit kochendem Wasser durch Spalten Atome gehen? Warum schaffen gefährlichen Atommüll, dass wir nie loswerden? Warum verderben die Umwelt mit Uran Uranbergbau und die giftige Einöde schafft? Und warum Kernkraft Unternehmen exportieren diese gefährliche Technologie in Entwicklungsländer?</p>
			
			<p>Also hier ist die Anfrage. <strong>Können Sie mir helfen, über diese einfachen Tatsachen sprechen?</strong> Ich bitte Sie nicht um eine Organisation beizutreten oder Geld zu spenden, sondern einfach, Ihren Namen auf die Liste der mutigen Menschen, die zu Gunsten sprechen fügt von einer Welt ohne Kernspaltung.</p>
			
			<p>Ich hoffe, dies wird einen Unterschied machen.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>