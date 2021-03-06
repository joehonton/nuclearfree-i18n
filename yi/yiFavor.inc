<?php
//=============================================================================
//
// File:         /i18n/yiFavor.inc
//
// Language:     PHP
//
// Contents:     yi = Yiddish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/yiBasePage.inc' );


//-------------------------------------
class yiFavor extends yiBasePage
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
		return "איך האב אַ בקשה";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "איר קענען העלפן דורך גערעדט קעריידזשאַסלי וועגן די דיינדזשערז פון יאָדער פישאַן";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "יאָדער מאַכט, יאָדער ענערגיע, יאָדער וועפּאַנז, פישאַן, ערד, בוילינג וואַסער, עלעקטרע";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "אונדזער שיין בלוי מירמלשטיין!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "סאָלעמנלי צוזאָג";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'שווערן די "ניט מער פישאַן" שבועה איצט!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>איר קענען העלפן דורך גערעדט קעריידזשאַסלי</h1>
			
			<p>העלא,</p>
			
			<p>איך האב אַ בקשה. <strong>וועט איר העלפן מיר אין מיין זוכן צו מאַכן דעם אַ וועלט אָן יאָדער פישאַן?</strong></p>
			
			<p>דערלויבן מיר צו דערקלערן וואָס איך פילן אַזוי שטארק וועגן דעם.</p>
	
			<p>ווען איך איז גראָוינג אַרויף, פּלאַץ עקספּלעריישאַן איז געווען בייַ די הייך פון זייַן פול כבוד. די יקסייטמאַנט וואָס באגלייט די פּאַסירונג געווען צו זייַן שערד דורך אַלעמען. דער ציטער אַז באגלייט יעדער נייַ מיילסטאָון, וועט אונדזער אַפּאַטייץ פֿאַר מער. און די אַנטיסאַפּיישאַן אַז מיר טאַקע געווען געגאנגען צו שטעלן אַ מענטש אויף די לבנה און צוריקקומען אים בעשאָלעם צו ערד, געהאלטן אונדז פאַרקנאַסט מיט אַפֿילו די מינערווערטיק סאַקסעסאַז און פייליערז פון דער פּראָגראַם.</p>
			
			<p>איידער ריטשינג אַז לעצט ציל, עס זענען געווען פילע וויכטיק דערגרייכונגען. איינער פון די מערסט יגזילערייטינג פון די איז געווען ווען די אַסטראַנאָץ רייסט פֿרייַ פון ערד אָרביט. פֿאַר דער ערשטער צייַט, יומאַנז האבן געלאזן די זיכערקייַט פון זייער היים פּלאַנעט. מיר זענען ווי ציטער סיקערז אויף די פּאַסירונג פון אַ לעבן.</p>
			
			<p>און דעמאָלט דער רובֿ מערקווירדיק זאַך געטראפן. די אַסטראַנאָץ גלאַנסט צוריק אין די ריסידינג ערד, און געזען פֿאַר די ערשטער מאָל די בלוי מירמלשטיין וואָס איז געווען אונדזער היים, און זיי האבן קימאַט אָוווערכוועלמד דורך די טייַער שיינקייט פון וואָס זיי בעהעלד. די פאָוטאַגראַפיק בילדער אַז זיי געשיקט צוריק האבן בראָדקאַסט צו דער וועלט, און מיר אויך געווען אַסטראַק.</p>
			
			<p>די וואַלנעראַביליטי קאַפּטשערד אין יענע פאָוטאַגראַפס געמאכט אונדז באַוווסטזיניק פון זיך אין אַ וועג וואָס טראַנסענדיד אַלע פּאָליטיש אַלידזשיאַנסיז. פֿאַר אַ קורץ מאָמענט אין צייַט, מיר פארגעסן וועגן די קעלט מלחמה, מיר שטעלן באַזונדער אונדזער דיפעראַנסיז, און מיר מאַרוואַלד בייַ די שיינקייט פון ערד. פון דעם נייַ באוווסטזיין מיר געוואוסט פּונקט ווי שוואַך אונדזער אָרט אין דער אַלוועלט איז געווען, און ווי פּעראַלאַסלי נאָענט מיר זענען געווען צו דיסטרויינג דער בלויז היים מיר וועלן אלץ האָבן.</p>
			
			<p>מיר אַווייקאַנד מיט אַ חוש פון ערדזשאַנסי צו פאַרריכטן אונדזער שאָרטקאָמינגס. מיט אַ פּלאַצן פון טעטיקייט, מיר געארבעט צו פאַרריכטן אונדזער פּראָבלעמס. די אינטערנאַציאָנאַלע טריטי אויף יאָדער וועפּאַנז פּראָוליפעריישאַן, און די העסקעם צו פאַרבאָט אַלע אויבן-ערד טעסטינג פון יאָדער וועפּאַנז זענען דערווייַז אַז מיר קען רעדן וועגן אונדזער שערד וואַלועס און דערגרייכן פּראָסט פיליק צילן. יווענטשאַוואַלי, מיט די פאַל פון די בערלין וואנט, און די טאָינג פון באַציונגען צווישן די הויפּט רייוואַלז פון די קעלט מלחמה, מיר אנגעהויבן דער ערשטער ערנסט מי אַימעד בייַ רידוסינג די גלאבאלע סטאַקפּייל פון יאָדער וועפּאַנז.</p>
			
			<p>אבער זינט אַז צייַט מיר ויסקומען צו האָבן פאַרלאָרן אונדזער ברען פֿאַר אַ וועלט פֿרייַ פון יאָדער וועפּאַנז, און פריש השתדלות צו פאָרזעצן אַז ווערק האָבן ניט געמאכט פיל פאַקטיש פּראָגרעס. נאָך פיר דעקאַדעס פון לאַקלאַסטער טאָקס, מיר האָבן נישט אַפֿילו געווען ביכולת צו טייַנען די קראַנט שטאַט פון ענינים: די אינטערנאַציאָנאַלע יאָדער טריטיז האָבן שוין סערקאַמווענטיד אָדער איגנאָרירט; די יידזשינג גלאבאלע סטאַקפּיילז זענען דיטיריערייטינג; און נייַ יאָדער וועפּאַנז פאָרשונג האלט.</p>
			
			<p><strong>די פּאָליטיק פון דיטעראַנס האט קלאר ניט אַנדערש.</strong> צו אונדזער שאַנד, עס האט שוין ריפּלייסט דורך ווייג הבטחות און ליידיק מליצות.</p>
			
			<p>סאַדלי, יאָדער וועפּאַנז זענען נישט אונדזער נאָר דייַגע. מיר איצט וויסן אַז יאָדער מאַכט געוויקסן אויך פּאָזע אַ ערנסט סאַקאָנע צו אונדזער טייַער ערד. מיר זענען נאָר אָנהייב צו דערוועקן צו די מעקייַעם אַז יאָדער מאַכט געוויקסן קענען ניט זייַן געמאכט 100% זיכער.</p>
			
			<p>די קאַטאַסטראַפיק ומגליק בייַ פוקושימאַ קיינמאָל זאָל האָבן געטראפן ווייַל די יאָדער ענדזשאַנירז האט צוגעגרייט פֿאַר יעדער מעגלעך ערגסטע-פאַל סצענאַר: זיי האט זיכערקייַט כּללים אין פּלאַץ פֿאַר יעדער שטיק פון עקוויפּמענט; אַפּערייטינג פּראָוסידזשערז פֿאַר יעדער מעגלעך סיטואַציע; קאַנטינדזשאַנסי פּלאַנז פֿאַר ווען דאס ווען פאַלש; און קייפל אָטאַמאַטיק קאַמפּאַנסייטינג מעקאַניזאַמז אין פאַל די רעזערוו עקוויפּמענט האט נישט אַרבעטן. אַלע פון די אינדוסטריע 'ס בעסטער ענדזשאַנירז זענען ארבעטן פלייסיק און קאַנטשיענטשאַסלי מיט זיכערקייַט ווי זייער שפּיץ בילכערקייַט. נאָך נאָך עפּעס שרעקלעך געטראפן. און געדענקען, דאָס פארגעקומען 25 יאר נאָך טשערנאָביל, מיט גענוגיק צייַט צו לערנען פון פֿריִערדיקע מיסטייקס.</p>
			
			<p>די טעג איך האָבן אַ זייער שווער צייַט גלויביק כּמעט עפּעס אַז די יאָדער ענערגיע קאָמפּאַניעס זאָגן מיר. טשיפּער ווי די אַלטערנאַטיוועס? קלינער ווי די אַלטערנאַטיוועס? סאַפער ווי די אַלטערנאַטיוועס? נומ נומ נומ</p>
			
			<p><strong>אַלע פון דעם נאָר צו קאָכן וואַסער?</strong></p>
	
			<p>דאָ איז די פּשוט אמת: עס איז גאָרנישט ספּעציעל וועגן עלעקטרע דזשענערייטאַד דורך יאָדער מאַכט געוויקסן. אָיל, קוילן, גאַז און יאָדער אַלע נוצן די זעלבע מאַקאַניקס פֿאַר דזשענערייטינג עלעקטרע. עס ס פּשוט:</p>
			
			<ol>
				<li>א היץ מקור בוילז וואַסער.</li>
				<li>פּאַרע פון די בוילינג וואַסער פאָרסעס טורבינע בלאַדעס צו ומדריי.</li>
				<li>ינדאַקשאַן קוילז אַטאַטשט צו די ספּיננינג טורבינע שאַפֿן עלעקטרע ווען ראָוטייטיד דורך אַ מאַגנעטיק פעלד.</li>
			</ol>
			
			<p>דזשענערייטינג עלעקטרע איז נאָר עלאַמענאַל פיזיק און אינזשעניריע. אזוי וואָס גיין צו די צרה פון בוילינג וואַסער דורך ספּליטינג אַטאָמס? פארוואס שאַפֿן געפערלעך יאָדער וויסט אַז מיר קענען קיינמאָל באַקומען באַפרייַען פון? פארוואס צעלאָזן די סוויווע מיט יערייניאַם מיינינג און מילינג אַז קריייץ טאַקסיק וואַסטעלאַנדס? און וואָס זענען יאָדער מאַכט קאָמפּאַניעס עקספּאָרטינג דעם געפערלעך טעכנאָלאָגיע צו דעוועלאָפּינג לענדער?</p>
			
			<p>אזוי דאָ איז די בעטן. <strong>קענען איר העלפן מיר צו רעדן וועגן די פּשוט פאקטן?</strong> איך בין נישט אַסקינג איר צו פאַרבינדן אַ אָרגאַניזאַציע אָדער צו שענקען געלט, אָבער פשוט צו לייגן דיין נאָמען צו די רשימה פון בראַווע מענטשן וואס וועט רעדן אין טויווע פון אַ וועלט אָן יאָדער פישאַן.</p>
			
			<p>איך האָפֿן דאָס וועט מאַכן אַ חילוק.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>