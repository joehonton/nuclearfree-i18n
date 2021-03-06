<?php
//=============================================================================
//
// File:         /i18n/heFavor.inc
//
// Language:     PHP
//
// Contents:     he = Hebrew
//
// Author:       Joe Honton © 2013
//
// Initial date: September 28, 2013
//
//=============================================================================

require_once( __DIR__ . '/heBasePage.inc' );


//-------------------------------------
class heFavor extends heBasePage
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
		return "יש לי בקשה";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "אתה יכול לעזור על ידי דיבור באומץ על הסכנות של ביקוע גרעיני.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "אנרגיה גרעינית, אנרגיה גרעינית, נשק גרעיני, ביקוע, אדמה, מים רותחים, חשמל";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "השיש הכחול היפה שלנו!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "מבטיח חגיגית";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'נשבע את השבועה "לא יותר הביקוע" עכשיו!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>אתה יכול לעזור על ידי דיבור באומץ</h1>
			
			<p>הָלוֹ!</p>
			
			<p>יש לי בקשה. <strong>האם תעזור לי במסע שלי כדי להפוך את העולם הזה בלי ביקוע גרעיני?</strong></p>
			
			<p>הרשה לי להסביר למה אני מרגיש כל כך חזק על זה.</p>
	
			<p>כשגדלתי, חקר החלל היה בשיא תהילתו המלאה.ההתרגשות שליוותה את ההרפתקה נראה הייתה משותפת לכולם.הריגוש שליווה את כל אבן דרך חדשה, לגרות את התיאבון שלנו לעוד.והציפייה שאנחנו באמת הולכים לשים אדם על הירח ולהחזירו בשלום לכדור הארץ, החזיקה אותנו עוסקות באפילו את ההצלחות וכישלונות הקטנים של התכנית.</p>
			
			<p>לפני שהגיע כי מטרה סופית, היו הישגים רבים וחשובים. אחת מלהיב ביותר של אלה היה כאשר האסטרונאוטים השתחררו ממסלול סביב כדור הארץ. בפעם הראשונה, בני אדם עוזבים את הבטיחות של כוכב הבית שלהם. היינו כמו מחפשי ריגושים על ההרפתקה של פעם בחיים.</p>
			
			<p>ואז הדבר הכי המדהים שקרה. האסטרונאוטים העיף מבט לאחור בכדור הארץ מתרחקת, וראו בפעם הראשונה שיש הכחול שהיה בבית שלנו, והם כמעט היו המומים מיופיו היקר ממה שהם חזו. את צילומים שהם נשלחו חזרה שודרו לעולם, וגם אנחנו היינו המום.</p>
			
			<p>הפגיעות שנתפסו בתמונות האלה גרמו לנו מודעת לעצמנו באופן שהתעלה מעל כל הנאמנויות הפוליטיות. לרגע קצר בזמן, ששכחנו את המלחמה הקרה, אנו מניחים בצד את ההבדלים בינינו, ואנחנו התפעלנו מיפיו של כדור הארץ. מתודעה חדשה זו שידענו בדיוק כמה שבירה היה מקומנו ביקום, וכיצד לסגור בצורה מסוכנת היינו הורס את הבית היחיד שאי פעם יהיה לנו.</p>
			
			<p>אנחנו מתעוררים עם תחושת הדחיפות כדי לתקן את החסרונות שלנו. בפרץ של פעילות, שעבדנו כדי לתקן את הבעיות שלנו.האמנה הבינלאומית על הפצת נשק גרעיני, וההסכם לאסור כל הבדיקות מעל פני הקרקע של נשק גרעיני היו הוכחה לכך שאנחנו יכולים לדבר על הערכים המשותפים שלנו ולהשיג את מטרות הגיוניות נפוצות. סופו של דבר, עם נפילת חומת ברלין, והפשרת יחסים בין היריבים העיקריים של המלחמה הקרה, התחלנו המאמץ הרציני הראשון שמטרתה צמצום המאגר העולמי של נשק גרעיני.</p>
			
			<p>אבל מאז שפעם שאנחנו כנראה איבדו את הלהט שלנו לעולם חופשי מכלי נשק גרעיניים, והמאמצים האחרונים כדי להמשיך את העבודה שלא עשה התקדמות הרבה אמת. לאחר ארבעה עשורים של שיחות ירודים, יש לנו אפילו לא היה מסוגלים לשמור על המצב הנוכחי של עניינים: ההסכמים הגרעיניים הבינלאומיים כבר עקפו או התעלמו; את המאגרים הגלובליים ההזדקנות, הולכים ומתדרדרים, והמחקר חדש ממשיך נשק גרעיני.</p>
			
			<p><strong>המדיניות של הרתעה ברורה נכשלה.</strong> לבושתנו, הוא הוחלף על ידי הבטחות מעורפלות ורטוריקה ריקה.</p>
			
			<p>למרבה הצער, נשק גרעיני הוא לא הדאגה היחידה שלנו. כיום אנו יודעים שתחנות כוח גרעיניות גם להוות איום רציני לכדור הארץ היקר שלנו. אנחנו רק מתחילים להתעורר להכרה כי תחנות כוח גרעיניות אינם יכולות להיות עשויות 100% בטוחים.</p>
			
			<p>אסון קטסטרופלי בפוקושימה לא היה צריך לקרות, כי מהנדסי הגרעין היו מוכנים לכל אפשרות תרחיש הגרוע ביותר: היה להם כללי בטיחות במקום במשך כל פיסת ציוד, נהלים עבודה לכל מצב אפשרי, תוכניות מגירה לעת דברים כאשר שגוי;ומנגנוני פיצוי אוטומטיים מרובים במקרה את ציוד המילואים לא עבדו. כל המהנדסים הטובים ביותר בתעשייה עבדו בחריצות ובמסירות עם בטיחות בראש סדר העדיפויות שלהם. עם זאת, עדיין קרה משהו נורא. וזיכרו, זו התרחשה 25 שנים לאחר צ'רנוביל, עם מספיק זמן כדי ללמוד מטעויות קודמות.</p>
			
			<p>בימים אלה יש לי מאוד מתקשה להאמין כמעט לכל דבר שחברות האנרגיה הגרעינית יגידו לי. זול יותר מהחלופות? נקי יותר מהחלופות? בטוח יותר מהחלופות? לא, לא לא.</p>
			
			<p><strong>כל זה רק כדי להרתיח מים?</strong></p>
	
			<p>הנה האמת הפשוטה: אין שום דבר מיוחד בחשמל שנוצר על ידי תחנות כוח גרעיניות. נפט, פחם, גז וגרעיני כל להשתמש באותן המכניקה לייצור חשמל. זה פשוט:</p>
			
			<ol>
				<li>מים רותחי מקור חום.</li>
				<li>אדים מהמים הרותחים מאלץ את להבי טורבינה להסתחרר.</li>
				<li>סלילי השראה המחוברים לטורבינת ספינינג ליצור חשמל בעת לסובב באמצעות שדה מגנטי.</li>
			</ol>
			
			<p>ייצור חשמל הוא רק בפיסיקה והנדסה בסיסיות. אז למה לטרוח עם מים רותחים ידי אטומים פיצול? למה ליצור פסולת גרעינית מסוכנת שלעולם לא תוכל להיפטר? למה לקלקל עם סביבת כריית אורניום וטחינה שיוצרת שממה רעילה?ומדוע חברות כוח גרעיניות מייצאים טכנולוגיה מסוכנת זו למדינות מתפתחות?</p>
			
			<p>אז הנה היא את הבקשה. <strong>האם אתה יכול לעזור לי לדבר על עובדות הפשוטות הללו?</strong> אני לא מבקש ממך להצטרף לארגון או לתרום כסף, אלא פשוט להוסיף את שמך לרשימה של אנשים אמיצים שידברו לטובת על עולם ללא ביקוע גרעיני.</p>
			
			<p>אני מקווה שזה יעשה את הבדל.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>