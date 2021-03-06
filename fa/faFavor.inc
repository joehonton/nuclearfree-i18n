<?php
//=============================================================================
//
// File:         /i18n/faFavor.inc
//
// Language:     PHP
//
// Contents:     fa = فارسی (Farsi)
//
// Author:       Joe Honton © 2013
//
// Initial date: November 23, 2013
//
//=============================================================================

require_once( __DIR__ . '/faBasePage.inc' );


//-------------------------------------
class faFavor extends faBasePage
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
		return "من یک درخواست";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "شما می توانید با صحبت کردن شجاعانه در مورد خطرات ناشی از شکافت هسته ای کمک کند.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "تاسیسات هسته ای، انرژی هسته ای، سلاح های هسته ای، شکافت، کره زمین، آب جوش، برق";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "سنگ مرمر آبی زیبای ما!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "موقرانه قول";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'قسم می خورم "شکافت نه بیشتر" سوگند در حال حاضر!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>شما می توانید با صحبت کردن با شجاعت کمک</h1>
			
			<p>خوش آمدید،</p>
			
			<p>من یک درخواست.<strong>آیا شما به من کمک کند در تلاش من برای ساخت این جهان بدون شکافت هسته ای؟</strong></p>
			
			<p>اجازه دهید تا توضیح دهد که چرا من احساس می کنم به شدت در مورد این.</p>
	
			<p>وقتی که من در حال رشد بود، اکتشافات فضایی در اوج شکوه و عظمت کامل آن بود. هیجان که به همراه ماجراجویی به نظر می رسید با همه به اشتراک گذاشته می شود. هیجان که هر مرحله جدید همراه است، برانگیختن احساس ما برای اطلاعات بیشتر. و پیش بینی است که ما واقعا قرار بود برای قرار دادن انسان در ماه و بازگشت با خیال راحت به زمین نگه داشته ما را درگیر با حتی موفقیت های کوچک و شکست پروژه می باشد.</p>
			
			<p>قبل از رسیدن به این هدف نهایی، بسیاری از دستاوردهای مهم وجود دارد. یکی از هیجان انگیز ترین از این بود که فضانوردان شکست از مدار زمین. برای اولین بار، انسان خروج از ایمنی از زمین را. ما مثل پناهجویان هیجان در ماجراجویی از طول عمر بوده است.</p>
			
			<p>و پس از آن چیزی که قابل توجه ترین اتفاق افتاده است. فضانوردان پشت در عقب کره زمین انداخت، و برای اولین بار از سنگ مرمر آبی است که خانه ما بود را دیدم، و آنها به زیبایی گرانبها از آنچه که آنها دیدند تحت الشعاع شد.تصاویر عکاسی که آنها را به عقب فرستاده شده به جهان پخش شد، و ما هم خوف زده بود.</p>
			
			<p>این آسیب پذیری اسیر در این عکس ها در راه است که تمام سیاست فراتر ما را به خودمان خودآگاه ساخته شده است. برای لحظه ای کوتاه در زمان، ما در مورد از جنگ سرد را فراموش، ما را کنار بگذارند تفاوت های ما، و ما در زیبایی از کره زمین شگفت زده شدند. از این آگاهی را جدید ما می دانستیم که چقدر شکننده جایگاه ما در جهان بود، و چگونه ها شدیدا نزدیک به از بین بردن تنها به خانه ما همیشه می خواهد بود.</p>
			
			<p>ما با یک احساس فوریت بیدار به رفع کاستی های ما. با پشت سر هم از فعالیت های ما کار می کرد برای رفع مشکلات ما. این پیمان بین المللی در تکثیر سلاح های هسته ای، و مورد را برای منع کلیه تست بالای سطح زمین از سلاح های هسته ای ثابت می کند که ما می توانیم در مورد ارزش های مشترک ما صحبت و رسیدن به اهداف معقول مشترک بودند. در نهایت، با سقوط دیوار برلین، و آب شدن روابط بین رقبای اصلی از جنگ سرد، ما اولین تلاش جدی با هدف کاهش ذخایر جهانی از سلاح های هسته ای آغاز شد.</p>
			
			<p>اما از آن زمان ما به نظر می رسد شور و حرارت ما برای جهانی عاری از سلاح های هسته ای از دست داده اند، و تلاش های اخیر برای ادامه که کار پیشرفت بسیار واقعی ساخته شده است. پس از چهار دهه از مذاکرات بدون زرق و برق، ما حتی قادر به حفظ وضعیت فعلی امور نبوده است؛ پیری ذخایر جهانی رو به وخامت است. معاهدات هسته ای بین المللی دور شده یا نادیده گرفته شده و تحقیقات سلاح های هسته ای جدید همچنان ادامه دارد.</p>
			
			<p><strong>سیاست بازدارندگی به وضوح شکست خورده است.</strong> به ننگ ما، از آن شده است با وعده های مبهم و لفاظی خالی جایگزین شده است.</p>
			
			<p>متاسفانه، سلاح های هسته ای، تنها نگرانی ما نیست. ما اکنون می دانیم که نیروگاه های هسته ای نیز تهدیدی جدی برای با ارزش زمین را در برخواهد داشت. ما تازه شروع به بیدار به تحقق است که نیروگاه های هسته ای نمی تواند 100٪ امن است.</p>
			
			<p>فاجعه در فوکوشیما هرگز نباید اتفاق افتاده است زیرا مهندسان هسته ای برای هر امکان وجود بدترین شرایط آماده کرده بود: آنها قوانین ایمنی در محل برای هر قطعه از تجهیزات به حال، روش های عملیاتی برای هر وضعیت ممکن است؛ طرح های احتمالی برای وقتی که چیزهایی که اشتباه است و چند مکانیسم جبران خودکار در مورد تجهیزات ذخیره کار نمی کند. همه از بهترین مهندسین صنعت پشتکار و وجدان کار می کردند با ایمنی به عنوان اولویت خود را. با این حال هنوز هم اتفاق بدی رخ داده است. و به یاد داشته باشید، 25 سال پس از چرنوبیل از این رخ داده است، با زمان کافی برای از اشتباهات گذشته یاد بگیرند.</p>
			
			<p>این روزها من زمان بسیار سخت است باور تقریبا هر چیزی را که شرکت های انرژی هسته ای به من بگویید داشته باشد. ارزان تر از جایگزین؟ تمیز کننده نسبت به جایگزین؟ امن تر از جایگزین؟ نه. نه. نه.</p>
			
			<p><strong>همه از این فقط برای جوشاندن آب؟</strong></p>
	
			<p>در اینجا حقیقت ساده این است: هیچ چیز ویژه ای در مورد برق تولید شده توسط نیروگاه های هسته ای وجود دارد. نفت، زغال سنگ، گاز، و هسته ای همه استفاده از مکانیک مشابه برای تولید برق. این ساده است:</p>
			
			<ol>
				<li>منبع حرارت آب جوش.</li>
				<li>بخار از جوش نیروهای آب تیغه های توربین به چرخش.</li>
				<li>کویل القایی متصل به توربین در حال چرخش ایجاد برق هنگامی که از طریق یک میدان مغناطیسی چرخش.</li>
			</ol>
			
			<p>تولید برق فقط فیزیک عنصری و مهندسی می باشد. پس چرا به مشکل آب جوش به وسیله تقسیم اتم؟ چرا ایجاد زباله های هسته ای خطرناک است که ما هرگز نمی تواند خلاص شدن از شر؟ چرا از بین بردن محیط زیست با استخراج اورانیوم از معدن و آسیاب که سمی زباله اراضی ایجاد؟ و چرا شرکت های انرژی هسته ای صادرات این تکنولوژی خطرناک برای کشورهای در حال توسعه هستند؟</p>
			
			<p>بنابراین در اینجا به درخواست است. <strong>آیا می توانید به من کمک کنی در مورد این حقایق ساده صحبت کنید؟</strong> من از شما می خواهم برای پیوستن به یک سازمان و یا برای اهدای پول، اما به سادگی به اضافه کردن نام خود را به فهرست افراد شجاع که در حمایت از جهان بدون شکافت هسته ای صحبت می کنند.</p>
			
			<p>من امیدوارم که این خواهد متفاوت باشد.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>