<?php
//=============================================================================
//
// File:         /i18n/cyFavor.inc
//
// Language:     PHP
//
// Contents:     cy = Cymraeg (Welsh)
//
// Author:       Joe Honton © 2013
//
// Initial date: October 1, 2013
//
//=============================================================================

require_once( __DIR__ . '/cyBasePage.inc' );


//-------------------------------------
class cyFavor extends cyBasePage
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
		return "Mae gen i gais";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Gallwch helpu drwy siarad wrol am beryglon ymholltiad niwclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "cyfleusterau niwclear, ynni niwclear, arfau niwclear, ymholltiad, y Ddaear, dŵr berwedig, trydan";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "Ein marmor glas hardd!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Addewid Difrifol";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Tyngu y "dim mwy ymholltiad" llw nawr!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Gallwch helpu trwy siarad wrol</h1>
			
			<p>Helo,</p>
			
			<p>Mae gen i gais. <strong>A wnewch chi fy helpu yn fy ymgais i wneud y byd heb ymholltiad niwclear?</strong></p>
			
			<p>Caniatáu i mi i egluro pam yr wyf yn teimlo mor gryf am hyn.</p>
	
			<p>Pan oeddwn yn tyfu i fyny, gofod archwilio oedd ar anterth ei ogoniant llawn. Mae'r cyffro a ddaeth gyda'r antur yn ymddangos i gael ei rannu gan bawb. Mae'r wefr a ddaeth gyda'r pob carreg filltir newydd, hogi ein archwaeth am fwy. A rhagweld ein bod yn wir yn mynd i roi dyn ar y lleuad ac yn dychwelyd iddo yn ddiogel i'r Ddaear, a gedwir i ni ymgysylltu â hyd yn oed y mân lwyddiannau a methiannau'r rhaglen.</p>
			
			<p>Cyn cyrraedd y nod yn y pen draw, roedd llawer o lwyddiannau pwysig. Un o'r rhai mwyaf cyffrous o'r rhain oedd pan oedd y gofodwyr dorrodd rhydd o orbit Ddaear. Am y tro cyntaf, pobl yn gadael y diogelwch eu planed cartref. Roedden ni fel ceiswyr gwefr ar antur ei fywyd.</p>
			
			<p>Ac yna y peth mwyaf rhyfeddol a ddigwyddodd. Mae'r gofodwyr bwrw golwg yn ôl ar y Ddaear cilio, a gweld am y tro cyntaf y marmor glas a oedd yn ein cartref, ac maent yn cael eu llethu bron gan harddwch gwerthfawr o'r hyn y maent yn edrychais. Mae'r delweddau ffotograffig eu bod yn eu hanfon yn ôl eu darlledu i'r byd, ac rydym hefyd yn cael eu taro gyda pharchedig ofn.</p>
			
			<p>Agored i niwed ddal mewn ffotograffau hynny yn gwneud i ni yn ymwybodol o ein hunain mewn ffordd sy'n goresgyn yr holl deyrngarwch gwleidyddol. Am ennyd fer mewn amser, rydym yn anghofio am y Rhyfel Oer, rydym yn neilltuo ein gwahaniaethau, ac yr ydym yn rhyfeddu at harddwch y Ddaear. O hyn ymwybyddiaeth newydd yr ydym yn gwybod yn union pa mor fregus ein lle yn y bydysawd oedd, a pha mor beryglus yn agos byddem yn dinistrio yr unig gartref cawn byth.</p>
			
			<p>Rydym yn deffro gydag ymdeimlad o frys i osod ein diffygion. Gyda byrstio o weithgaredd, buom yn gweithio i ddatrys ein problemau. Mae'r cytundeb rhyngwladol ar arfau niwclear amlhau, a'r cytundeb i wahardd holl brofion uwchben y ddaear o arfau niwclear yn brawf y gallem siarad am ein gwerthoedd a rennir a chyflawni nodau synhwyrol cyffredin. Yn y pen draw, gyda'r cwymp Wal Berlin, a dadmer y berthynas rhwng y prif gystadleuwyr y Rhyfel Oer, dechreuwyd yr ymdrech difrifol cyntaf gyda'r nod o leihau'r cyflenwad byd-eang o arfau niwclear.</p>
			
			<p>Ond nid ers yr adeg honno ymddengys ein bod wedi colli ein brwdfrydedd ar gyfer byd rhydd o arfau niwclear, ac ymdrechion diweddar i barhau â'r gwaith hwnnw wedi gwneud cynnydd llawer o go iawn. Ar ôl pedair degawd o sgyrsiau ddifflach, nid ydym wedi bod hyd yn oed yn gallu cynnal y sefyllfa sydd ohoni: y cytuniadau niwclear rhyngwladol wedi cael eu hosgoi neu eu hanwybyddu, y cyflenwadau byd-eang heneiddio yn dirywio, ac ymchwil arfau niwclear newydd yn parhau.</p>
			
			<p><strong>Mae'r polisi o ataliaeth yn amlwg wedi methu.</strong> Mwyn ein cywilydd, mae wedi cael ei ddisodli gan addewidion amwys a rhethreg wag.</p>
			
			<p>Yn anffodus, nid yw arfau niwclear yn ein hunig bryder. Rydym bellach yn gwybod bod planhigion ynni niwclear hefyd yn fygythiad difrifol i'n Ddaear gwerthfawr. Rydym ond yn dechrau deffro i sylweddoli na all gorsafoedd ynni niwclear yn cael eu gwneud o 100% yn ddiogel.</p>
			
			<p>Dylai'r trychineb trychinebus yn Fukushima erioed wedi digwydd oherwydd bod y peirianwyr niwclear wedi paratoi ar gyfer pob senario achos gwaethaf posibl: roedd ganddynt reolau diogelwch yn eu lle ar gyfer pob darn o offer; gweithdrefnau gweithredu ar gyfer pob sefyllfa bosibl; cynlluniau wrth gefn ar gyfer pan fydd pethau'n pan anghywir; a mecanweithiau gwneud iawn awtomatig lluosog rhag ofn nad yw'r offer wrth gefn yn gweithio. Mae pob un o'r peirianwyr gorau y diwydiant yn gweithio'n ddiwyd a chydwybodol gyda diogelwch fel eu prif flaenoriaeth. Eto i gyd yn dal rhywbeth ofnadwy wedi digwydd. A chofiwch, digwyddodd hyn 25 mlynedd ar ôl Chernobyl, gyda digon o amser i ddysgu oddi wrth gamgymeriadau blaenorol.</p>
			
			<p>Y dyddiau hyn, yr wyf yn cael amser caled iawn gredu bron unrhyw beth y mae'r cwmnïau ynni niwclear ddweud wrthyf. Rhatach na'r dewisiadau eraill? Lanach na'r dewisiadau eraill? Mwy diogel na'r dewisiadau eraill? Nifer. Nifer. Nifer.</p>
			
			<p><strong>Mae hyn i gyd yn unig i ferwi dŵr?</strong></p>
	
			<p>Dyma y gwir syml: nid oes unrhyw beth arbennig am drydan a gynhyrchir gan orsafoedd ynni niwclear. Olew, glo, nwy a niwclear i gyd yn defnyddio yr un mecaneg ar gyfer cynhyrchu trydan. Mae'n syml:</p>
			
			<ol>
				<li>A berwi ffynhonnell gwres dŵr.</li>
				<li>Stêm o'r dŵr berwedig yn gorfodi llafnau'r tyrbin i droelli.</li>
				<li>Coiliau sefydlu ynghlwm wrth y tyrbin nyddu greu trydan pan maent yn troi drwy gae magnetig.</li>
			</ol>
			
			<p>Mae cynhyrchu trydan yn unig ffiseg elfennol a pheirianneg. Felly pam mynd i'r drafferth o ddŵr berwedig drwy hollti atomau? Pam creu gwastraff niwclear peryglus y gallwn byth yn cael gwared o? Pam difetha'r amgylchedd â chloddio wraniwm a melino sy'n creu tiroedd gwenwynig A pham mae cwmnïau ynni niwclear allforio dechnoleg peryglus hwn i wledydd sy'n datblygu?</p>
			
			<p>Felly dyma yw'r cais. <strong>Allwch chi fy helpu i siarad am y ffeithiau syml?</strong> Nid wyf yn gofyn i chi ymuno â sefydliad neu i roi arian, ond dim ond er mwyn ychwanegu eich enw at y rhestr o unigolion dewr a fydd yn siarad o blaid byd heb ymholltiad niwclear.</p>
			
			<p>Rwy'n gobeithio y bydd hyn yn gwneud gwahaniaeth.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>