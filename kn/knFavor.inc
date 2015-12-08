<?php
//=============================================================================
//
// File:         /i18n/knFavor.inc
//
// Language:     PHP
//
// Contents:     kn = ಕನ್ನಡ  (Kannada)
//
// Author:       Joe Honton © 2014
//
// Initial date: January 12, 2014
//
//=============================================================================

require_once( __DIR__ . '/knBasePage.inc' );


//-------------------------------------
class knFavor extends knBasePage
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
		return "ನಾನು ವಿನಂತಿಯನ್ನು";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "ನೀವು ಪರಮಾಣು ವಿದಳನ ಅಪಾಯಗಳ ಬಗ್ಗೆ ಧೈರ್ಯವಾಗಿ ಮಾತನಾಡುವ ಮೂಲಕ ಸಹಾಯ ಮಾಡಬಹುದು.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "ಪರಮಾಣು ಸೌಲಭ್ಯಗಳ, ಪರಮಾಣು ಶಕ್ತಿ, ಪರಮಾಣು ಶಸ್ತ್ರಾಸ್ತ್ರಗಳ, ವಿದಳನ, ಭೂಮಿಯ, ಕುದಿಯುವ ನೀರು, ವಿದ್ಯುತ್";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "ನಮ್ಮ ಸುಂದರ ನೀಲಿ ಅಮೃತಶಿಲೆ!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "ಶ್ರದ್ಧೆಯಿಂದ ಭರವಸೆ";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'ಈಗ “ಯಾವುದೇ ಪರಮಾಣು ವಿದಳನ” ಪ್ರತಿಜ್ಞೆ!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>ನೀವು ಧೈರ್ಯವಾಗಿ ಮಾತನಾಡುವ ಮೂಲಕ ಸಹಾಯ ಮಾಡಬಹುದು</h1>
			
			<p>ಹಲೋ</p>
			
			<p>ನಾನು ವಿನಂತಿಯನ್ನು ಹೊಂದಿವೆ. <strong>ನೀವು ಪರಮಾಣು ವಿದಳನ ಇಲ್ಲದೆ ಈ ಜಗತ್ತಿನಲ್ಲಿ ಮಾಡಲು ನನ್ನ ಅನ್ವೇಷಣೆಯಲ್ಲಿ ನನಗೆ ಸಹಾಯ?</strong></p>
			
			<p>ನಾನು ಈ ಬಗ್ಗೆ ತುಂಬಾ ಬಲವಾಗಿ ಅಭಿಪ್ರಾಯ ಏಕೆ ವಿವರಿಸಲು ನನಗೆ ಅನುಮತಿ.</p>
	
			<p>ನಾನು ಬೆಳೆಯುತ್ತಿದ್ದಾಗ, ಬಾಹ್ಯಾಕಾಶ ಪರಿಶೋಧನೆ ಅದರ ಪೂರ್ಣ ವೈಭವ ಎತ್ತರದಲ್ಲಿ. ಸಾಹಸ ಜೊತೆಗೆ ಆ ಉತ್ಸಾಹ ಎಲ್ಲರೂ ಹಂಚಿಕೆಯ ಕಾಣುತ್ತದೆ. ಪ್ರತಿ ಹೊಸ ಮೈಲಿಗಲ್ಲು ಜೊತೆಗೂಡಿ ಥ್ರಿಲ್, ಹೆಚ್ಚು ನಮ್ಮ ಹಸಿವು ಮಸೆ. ಮತ್ತು ನಾವು ನಿಜವಾಗಿಯೂ ಚಂದ್ರನ ಮೇಲೆ ಮಾನವ ಪುಟ್ ಮತ್ತು ಭೂಮಿಗೆ ಸುರಕ್ಷಿತವಾಗಿ ಅವರನ್ನು ಮರಳಿ ಹೋಗಿ ಎಂದು ನಿರೀಕ್ಷೆಯಲ್ಲಿ, ಯೋಜನೆಯ ಸಣ್ಣ ಯಶಸ್ಸು ಮತ್ತು ವಿಫಲತೆಗಳು ತೊಡಗಿಸುತ್ತದೆ ನಮಗೆ ಇದ್ದರು.</p>
			
			<p>ಎಂದು ಅಂತಿಮ ಗುರಿ ತಲುಪುವ ಮೊದಲು, ಅನೇಕ ಪ್ರಮುಖ ಸಾಧನೆಗಳು ಇದ್ದವು. ಗಗನಯಾತ್ರಿಗಳು ಭೂಮಿಯ ಕಕ್ಷೆಯಿಂದ ಉಚಿತ ನಿಂತಾಗ ಈ ಅತ್ಯಂತ ಆಹ್ಲಾದಕರವಾದ ಒಂದು. ಮೊದಲ ಬಾರಿಗೆ, ಮಾನವರು ತಮ್ಮ ಮನೆಗೆ ಗ್ರಹದ ಸುರಕ್ಷತೆ ತೊರೆಯುತ್ತಿರುವ. ನಾವು ಜೀವಿತಾವಧಿಯಲ್ಲಿ ಸಾಹಸ ಮೇಲೆ ಥ್ರಿಲ್ ಹುಡುಕುವವರ ಇಷ್ಟಪಡುತ್ತಿದ್ದರು.</p>
			
			<p>ತದನಂತರ ಅತ್ಯಂತ ಗಮನಾರ್ಹ ವಿಷಯವೆಂದರೆ ಸಂಭವಿಸಿತು. ಗಗನಯಾತ್ರಿಗಳು ಕುಗ್ಗುತ್ತಿರುವ ಭೂಮಿಯ ಹಿಂದೆ glanced, ಮತ್ತು ಮೊದಲ ಬಾರಿಗೆ ನಮ್ಮ ಮನೆ ಎಂದು ಬ್ಲೂ ಮಾರ್ಬಲ್ ಫಾರ್ ಕಂಡಿತು, ಮತ್ತು ಅವರು ಸುಮಾರು ಅವರು ಅವಲೋಕಿಸಿದರು ಏನು ಅಮೂಲ್ಯ ಸೌಂದರ್ಯ ಜರುಗಿದ್ದರಿಂದಾಗಿ ಮಾಡಲಾಯಿತು. ಅವರು ಕಳುಹಿಸಲಾಯಿತು ಛಾಯಾಚಿತ್ರಗಳು ಜಗತ್ತಿಗೆ ಪ್ರಸಾರ, ಮತ್ತು ನಾವು ತುಂಬಾ ವಿಸ್ಮಯ ಮಾಡಲಾಯಿತು.</p>
			
			<p>ಆ ಛಾಯಾಚಿತ್ರಗಳು ಸೆರೆಹಿಡಿಯಲಾಗಿದೆ ದುರ್ಬಲತೆಯನ್ನು ಎಲ್ಲಾ ರಾಜಕೀಯ ಮೀರಿಸಿತ್ತು ರೀತಿಯಲ್ಲಿ ನಾವೇ ನಮಗೆ ಜಾಗೃತ ಮಾಡಿದ. ಸಮಯದಲ್ಲಿ ಒಂದು ಸಂಕ್ಷಿಪ್ತ ಕ್ಷಣ, ನಾವು ನಮ್ಮ ವ್ಯತ್ಯಾಸಗಳನ್ನು ಬದಿಗಿಟ್ಟು, ಶೀತಲ ಸಮರದ ಮರೆತು, ಮತ್ತು ನಾವು ಭೂಮಿಯ ಸೌಂದರ್ಯ ಬಗೆಗೆ. ಈ ಹೊಸ ಚೇತನದಿಂದ ನಾವು ವಿಶ್ವದಲ್ಲಿ ನಮ್ಮ ಸ್ಥಾನದ ಆಗಿತ್ತು ಎಂಬುದನ್ನು ಸೂಕ್ಷ್ಮವಾಗಿ ಗೊತ್ತಿತ್ತು, ಮತ್ತು ನಾವು ಇದುವರೆಗೆ ಹೊಂದಿರುತ್ತದೆ ಕೇವಲ ಮನೆ ನಾಶ ಹೇಗೆ ಬಹಳ ನಿಕಟ.</p>
			
			<p>ನಾವು ನಮ್ಮ ನ್ಯೂನತೆಗಳನ್ನು ಸರಿಪಡಿಸಲು ತುರ್ತು ಒಂದು ಅರ್ಥದಲ್ಲಿ ಜಾಗೃತ. ಚಟುವಟಿಕೆಯ ಬರ್ಸ್ಟ್, ನಾವು ನಮ್ಮ ಸಮಸ್ಯೆಗಳ ಪರಿಹಾರಕ್ಕೆ ಕೆಲಸ. ಅಣ್ವಸ್ತ್ರಗಳ ಪ್ರಸರಣ ಮೇಲೆ ಅಂತರರಾಷ್ಟ್ರೀಯ ಒಪ್ಪಂದದ ಮತ್ತು ಪರಮಾಣು ಶಸ್ತ್ರಾಸ್ತ್ರಗಳ ಎಲ್ಲಾ ನೆಲದ ಮೇಲಿನ ಪರೀಕ್ಷೆಯ ನಿಷೇದ ಒಪ್ಪಂದದ ನಾವು ನಮ್ಮ ಹಂಚಿಕೊಂಡ ಮೌಲ್ಯಗಳ ಬಗ್ಗೆ ಮಾತನಾಡಲು ಮತ್ತು ಸಾಮಾನ್ಯ ಸಂವೇದನಾಶೀಲ ಗುರಿಗಳನ್ನು ಸಾಧಿಸಲು ಎಂದು ಪುರಾವೆ ಇದ್ದರು. ಅಂತಿಮವಾಗಿ, ಬರ್ಲಿನ್ ಗೋಡೆಯ ಪತನದ, ಮತ್ತು ಶೀತಲ ಸಮರದ ಪ್ರಮುಖ ಎದುರಾಳಿಗಳ ನಡುವೆ ಸಂಬಂಧಗಳ ಕರಗಿ ನೀರಾಗುವ ಜೊತೆಗೆ, ನಾವು ಅಣ್ವಸ್ತ್ರಗಳ ಜಾಗತಿಕ ದಾಸ್ತಾನುಗಳನ್ನು ತಗ್ಗಿಸುವ ಗುರಿ ಮೊದಲ ಗಂಭೀರ ಪ್ರಯತ್ನವನ್ನು ಆರಂಭಿಸಿದರು.</p>
			
			<p>ಆದರೆ ಆ ನಂತರ ನಾವು ಅಣ್ವಸ್ತ್ರಗಳ ಮುಕ್ತವಾದ ವಿಶ್ವದ ನಮ್ಮ ಬೇಗೆ ಕಳೆದುಕೊಂಡರು, ಮತ್ತು ಕೆಲಸ ಮುಂದುವರಿಸಲು ಇತ್ತೀಚಿನ ಪ್ರಯತ್ನಗಳು ಹೆಚ್ಚು ನಿಜವಾದ ಪ್ರಗತಿ ಮಾಡಿಲ್ಲ ತೋರುತ್ತದೆ. ನೀರಸ ಮಾತುಕತೆ ನಾಲ್ಕು ದಶಕಗಳ ನಂತರ, ನಾವು ಸಹ ವ್ಯವಹಾರಗಳ ಪ್ರಸ್ತುತ ರಾಜ್ಯದ ನಿರ್ವಹಿಸಲು ಸಾಧ್ಯವಾಗಿಲ್ಲ: ವಯಸ್ಸಾದ ಜಾಗತಿಕ ದಾಸ್ತಾನುಗಳು ಕೆಡುತ್ತಿದ್ದ; ಅಂತಾರಾಷ್ಟ್ರೀಯ ಪರಮಾಣು ಒಪ್ಪಂದಗಳಿಗೆ ಕಡೆಗಣಿಸಲಾಗುತ್ತದೆ ಮತ್ತು ಹೊಸ ಅಣ್ವಸ್ತ್ರ ಸಂಶೋಧನೆ ಮುಂದುವರಿದಿದೆ.</p>
			
			<p><strong>ನಿರೋಧ ನೀತಿಯ ಸ್ಪಷ್ಟವಾಗಿ ವಿಫಲವಾಗಿದೆ.</strong> ನಮ್ಮ ಅವಮಾನ, ಇದು ಅಸ್ಪಷ್ಟ ಭರವಸೆಗಳನ್ನು ಮತ್ತು ಖಾಲಿ ವಾಕ್ಚಾತುರ್ಯ ಬದಲಾಯಿಸಲ್ಪಟ್ಟಿದೆ.</p>
			
			<p>ದುಃಖಕರವೆಂದರೆ, ಪರಮಾಣು ಶಸ್ತ್ರಾಸ್ತ್ರಗಳ ನಮ್ಮ ಮಾತ್ರ ಕಾಳಜಿ ಅಲ್ಲ. ನಾವು ಈಗ ಅಣು ಸ್ಥಾವರಗಳು ನಮ್ಮ ಅಮೂಲ್ಯ ಭೂಮಿಗೆ ಗಂಭೀರ ಅಪಾಯವಾಗಿ ತಿಳಿದಿದೆ. ನಾವು ಅಣು ಸ್ಥಾವರಗಳು 100% ಸುರಕ್ಷಿತ ಸಾಧ್ಯವಿಲ್ಲ ಎಂಬುದನ್ನು ತಿಳಿದುಕೊಂಡರು ಜಾಗೃತಗೊಳಿಸುವ ಆರಂಭಿಸಿದ್ದಾರೆ.</p>
			
			<p>ಫೂಕುಶಿಮಾ ನಲ್ಲಿ ದುರಂತದ ಅಣು ಇಂಜಿನಿಯರ್ಗಳು ಸಾಧ್ಯವಿರುವ ಕೆಟ್ಟ ಸಂದರ್ಭಗಳಲ್ಲಿ ಸಿದ್ದಪಡಿಸಿದ್ದ ಏಕೆಂದರೆ ಸಂಭವಿಸಿದ ಮಾಡಬೇಕು ಎಂದಿಗೂ: ಪ್ರತಿಯೊಂದು ಸಂಭವನೀಯ ಪರಿಸ್ಥಿತಿ ನಿರ್ವಹಣಾ ವಿಧಾನಗಳು; ವಸ್ತುಗಳ ತಪ್ಪು ಹೋದಾಗ ಫಾರ್ ಆಕಸ್ಮಿಕ ಯೋಜನೆಗಳನ್ನು; ಅವರು ಉಪಕರಣ ಪ್ರತಿ ತುಣುಕು ಸ್ಥಳದಲ್ಲಿ ಸುರಕ್ಷತಾ ನಿಯಮಗಳನ್ನು ಮತ್ತು ಸಂದರ್ಭದಲ್ಲಿ ಅನೇಕ ಸ್ವಯಂಚಾಲಿತ ಸರಿದೂಗಿಸುವ ಯಾಂತ್ರಿಕ ಮೀಸಲು ಉಪಕರಣಗಳನ್ನು ಕೆಲಸ ಮಾಡಲಿಲ್ಲ. ಉದ್ಯಮ ಅತ್ಯುತ್ತಮ ಎಂಜಿನಿಯರ್ಗಳು ಎಲ್ಲಾ ಮೊದಲ ಪ್ರಾಮುಖ್ಯತೆ ಸುರಕ್ಷತೆ ಉದ್ಯೋಗಶೀಲನಾಗಿ ಮತ್ತು ಆತ್ಮಸಾಕ್ಷಿಯಾಗಿ ಕೆಲಸ. ಇನ್ನೂ ಇನ್ನೂ ಭಯಾನಕ ಏನೋ ನಡೆದಿದೆ. ಮತ್ತು ನೆನಪಿಡಿ, ಈ ಹಿಂದಿನ ತಪ್ಪುಗಳಿಂದ ಕಲಿಯಲು ಸಾಕಷ್ಟು ಸಮಯ, 25 ವರ್ಷಗಳ ಚೆರ್ನೋಬಿಲ್ ನಂತರ ಸಂಭವಿಸಿದೆ.</p>
			
			<p>ಈ ದಿನಗಳಲ್ಲಿ ನಾನು ಒಂದು ಹಾರ್ಡ್ ಸಮಯ ಪರಮಾಣು ಶಕ್ತಿ ಕಂಪನಿಗಳು ಹೇಳಿ ಎಂದು ಬಹುತೇಕ ಏನು ನಂಬುವ. ಪರ್ಯಾಯ ಅಗ್ಗ? ಪರ್ಯಾಯ ಹೆಚ್ಚು ಕ್ಲೀನರ್? ಪರ್ಯಾಯ ಹೆಚ್ಚು ಸುರಕ್ಷಿತ? ಇಲ್ಲ. ಇಲ್ಲ. ಇಲ್ಲ.</p>
			
			<p><strong>ಈ ಎಲ್ಲಾ ಕೇವಲ ನೀರಿನ ಕುದಿ?</strong></p>
	
			<p>ಇಲ್ಲಿ ಸರಳ ಸತ್ಯ: ಅಣು ಸ್ಥಾವರಗಳು ವಿದ್ಯುತ್ ಬಗ್ಗೆ ವಿಶೇಷ ಏನೂ ಇಲ್ಲ. ತೈಲ, ಕಲ್ಲಿದ್ದಲು, ಅನಿಲ, ಮತ್ತು ಪರಮಾಣು ಎಲ್ಲಾ ವಿದ್ಯುತ್ ಉತ್ಪಾದನೆಗೆ ಅದೇ ಯಂತ್ರ ಬಳಸಲು. ಇದು ಸರಳ:</p>
			
			<ol>
				<li>ಒಂದು ಶಾಖದ ಮೂಲ ನೀರಿನ ಕುದಿಯುವ.</li>
				<li>ಸ್ಪಿನ್ ಕುದಿಯುವ ನೀರಿನ ಪಡೆಗಳು ಜಲಚಕ್ರ ಭ್ರಮಣೆಯಿಂದ ಪಡೆಯಲಾದ ಹಬೆ.</li>
				<li>ಒಂದು ಕಾಂತೀಯ ಕ್ಷೇತ್ರದ ಮೂಲಕ ಸುತ್ತುವ ಮಾಡಿದಾಗ ನೂಲುವ ಟರ್ಬೈನ್ ಲಗತ್ತಿಸಲಾದ ಇಂಡಕ್ಷನ್ ಸುರುಳಿಗಳನ್ನು ವಿದ್ಯುತ್ ರಚಿಸಲು.</li>
			</ol>
			
			<p>ವಿದ್ಯುತ್ ಉತ್ಪಾದಿಸುವ ಕೇವಲ ಧಾತುರೂಪದ ಭೌತವಿಜ್ಞಾನ ಮತ್ತು ಯಂತ್ರ ಹೊಂದಿದೆ. ಹಾಗಿರುವಾಗ ಪರಮಾಣುಗಳ ಬೇರೆಯಾದ ಕುದಿಯುವ ನೀರಿನ ತೊಂದರೆ ಹೋಗಿ? ಏಕೆ ನಾವು ತೊಡೆದುಹಾಕಲು ಎಂದಿಗೂ ಅಪಾಯಕಾರಿ ಪರಮಾಣು ತ್ಯಾಜ್ಯ ರಚಿಸಲು? ಏಕೆ ವಿಷಕಾರಿ ತ್ಯಾಜ್ಯ-ಭೂಮಿಯನ್ನು ಸೃಷ್ಟಿಸುವ ಯುರೇನಿಯಂ ಗಣಿಗಾರಿಕೆ ಮತ್ತು ಗಿರಣಿ ಪರಿಸರ ಹಾಳು? ಮತ್ತು ಏಕೆ ಅಭಿವೃದ್ಧಿಶೀಲ ದೇಶಗಳಲ್ಲಿ ಈ ಅಪಾಯಕಾರಿ ತಂತ್ರಜ್ಞಾನ ರಫ್ತು ಅಣುಶಕ್ತಿ ಕಂಪೆನಿಗಳು?</p>
			
			<p>ಇಲ್ಲಿ ಕೋರಿಕೆ. <strong>ನೀವು ನನಗೆ ಈ ಸರಳ ಸತ್ಯ ಬಗ್ಗೆ ಮಾತನಾಡಲು ಸಹಾಯ ಮಾಡಬಹುದು?</strong> ನಾನು ಸಂಸ್ಥೆಯ ಸೇರಲು ಅಥವಾ ಹಣವನ್ನು ದಾನ ನೀವು ಕೇಳುತ್ತಿದೆ ನಾನು, ಆದರೆ ಕೇವಲ ಪರಮಾಣು ವಿದಳನ ಇಲ್ಲದೆ ಒಂದು ವಿಶ್ವದ ಪರವಾಗಿ ಮಾತನಾಡಲು ಯಾರು ಧೈರ್ಯ ವ್ಯಕ್ತಿಗಳ ಪಟ್ಟಿಗೆ ನಿಮ್ಮ ಹೆಸರು ಸೇರಿಸಲು.</p>
			
			<p>ನಾನು ಈ ಒಂದು ವ್ಯತ್ಯಾಸವನ್ನು ಮಾಡುತ್ತದೆ ಭಾವಿಸುತ್ತೇವೆ.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>