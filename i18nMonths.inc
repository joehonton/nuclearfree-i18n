<?php
//=============================================================================
//
// File:         /i18n/i18nMonths.inc
//
// Language:     PHP
//
// Contents:     Months of the year
//
// Author:       Joe Honton © 2013
//
// Initial date: October 12, 2013
//
//=============================================================================


//-------------------------------------
class i18nMonths
{
	//-------------------------------------------
	// $code is an ISO639 language code like 'pt-BR'
	// $mm is a number from 1 to 12
	public static function nameOfMonth( $code, $mm )
	{
		$mm = (int) $mm;
		if ( $mm < 1 || $mm > 12 )
			return '';
		if ( !array_key_exists($code,self::$list) )
			return $mm;
		$months = self::$list[$code];
		return $months[$mm];
	}

	
	//-------------------------------------------
	public static function localizedDate( $code, DateTime $date_ymd )
	{
		$numberOfMonth = $date_ymd->format('m');
		$dayOfMonth = $date_ymd->format('j');
		$year = $date_ymd->format('Y');
		$nameOfMonth = i18nMonths::nameOfMonth( $code, $numberOfMonth );
		
		if ( $code == 'ja-x-Yoko' || $code == 'zh-Hans-x-Heng' || $code == 'zh-Hant-x-Heng')
			return  sprintf( "%s年%s月%s日", $year, $numberOfMonth, $dayOfMonth );
		else if ( $code == 'ja-x-Tate' || $code == 'zh-Hans-x-Zong' || $code == 'zh-Hant-x-Zong')
			return  sprintf( "%s年<span class='cs_horizontal_tb'>%s</span>月<span class='cs_horizontal_tb'>%s</span>日", $year, $numberOfMonth, $dayOfMonth );
		else if ( $code == 'ko-x-Garo' )
			return  sprintf( "%s년%s월%s일", $year, $numberOfMonth, $dayOfMonth );
		else if ( $code == 'ko-x-Sero' )
			return  sprintf( "%s년<span class='cs_horizontal_tb'>%s</span>월<span class='cs_horizontal_tb'>%s</span>일", $year, $numberOfMonth, $dayOfMonth );

		// more for other languages
		
		else	
			return sprintf( "%s %s %s", $dayOfMonth, $nameOfMonth, $year );
	}
	
	
	//-------------------------------------------
	//$list[0]=NameOfLanguage
	//$list[1]=January
	//...
	//$list[12]=December
	public static $list = array(
		'af'=>array('Afrikaans','Januarie','Februarie','Maart','April','Mei','Junie','Julie','Augustus','September','Oktober','November','Desember'),
		'ar'=>array('Arabic','جانفي','فيفري','مارس','أفريل','ماي','جوان','جويلية','أوت','سبتمبر','أكتوبر','نوفمبر','ديسمبر'),
		'az-Latn'=>array('Azerbaijani','Yanvar','Fevral','Mart','Aprel','May','İyun','İyul','Avqust','Sentyabr','Oktyabr','Noyabr','Dekabr'),
		'az-Cyrl'=>array('Аzербаижани','Јанвар','Феврал','Март','Апрел','Мај','Ијун','Ијул','Август','Сентјабр','Октјабр','Нојабр','Декабр'),
		'az-Arab'=>array('آزئربایژانی','یانوار','فئورال','مارت','آپرئل','مای','ایون','ایول','آوقوست','سئنتیابر','اوکتیابر','نویابر','دئکابر'),
		'be'=>array('Belarusian','студзень','люты','сакавік','красавік','май','чэрвень','ліпень','жнівень','верасень','кастрычнік','лістапад','снежань'),
		'bg'=>array('Bulgarian','януари','февруари','март','април','май','юни','юли','август','септември','октомври','ноември','декември'),
		'bn'=>array('Bengali','জানুয়ারী','ফেব্রুয়ারী','মার্চ','এপ্রিল','মে','জুন','জুলাই','আগস্ট','সেপ্টেম্বর','অক্টোবর','নভেম্বর','ডিসেম্বর'),
		'bs-Cyrl'=>array('Босниан','Сијечањ','Вељача','Ожујак','Травањ','Свибањ','Липањ','Српањ','Коловоз','Рујан','Листопад','Студени','Просинац'),
		'bs-Latn'=>array('Bosnian','Siječanj','Veljača','Ožujak','Travanj','Svibanj','Lipanj','Srpanj','Kolovoz','Rujan','Listopad','Studeni','Prosinac'),
		'ca'=>array('Catalan','gener','febrer','març','abril','maig','juny','juliol','agost','setembre','octubre','novembre','desembre'),
		'ceb'=>array('Cebuano','Enero','Pebrero','Marso','Abril','Mayo','Hunyo','Hulyo','Agosto','Septiyembre','Oktubre','November','December'),
		'cs'=>array('Czech','leden','únor','březen','duben','květen','červen','červenec','srpen','září','říjen','listopad','prosinec'),
		'cy'=>array('Welsh','ionawr','chwefror','mawrth','ebrill','mai','mehefin','gorffennaf','awst','medi','hydref','tachwedd','rhagfyr'),
		'da'=>array('Danish','januar','februar','marts','april','maj','juni','juli','august','september','oktober','november','december'),
		'de'=>array('German','Januar','Februar','März','April','Mai','Juni','Juli','August','September','Oktober','November','Dezember'),
		'el'=>array('Greek','Iανουάριος','Φεβρουάριος','Μάρτιος','Aρίλιος','Μάιος','Iούνιος','Iούλιος','Αύγουστος','Σεπτέμβριος','Oκτώβριος','Νοέμβριος','Δεκέμβριος'),
		'en'=>array('English','January','February','March','April','May','June','July','August','September','October','November','December'),
/*
'January',
'February',
'March',
'April',
'May',
'June',
'July',
'August',
'September',
'October',
'November',
'December'
*/				
		'eo'=>array('Esperanto','Januaro','Februaro', 'Marto', 'Aprilo', 'Majo', 'Junio​​', 'Julio', 'Aŭgusto', 'Septembro', 'Oktobro', 'Novembro', 'Decembro'),
		'es'=>array('Spanish','enero','febrero','marzo','abril','mayo','junio','julio','agosto','septiembre','octubre','noviembre','diciembre'),
		'et'=>array('Estonian','jaanuar','veebruar','märts','aprill','mai','juuni','juuli','august','september','oktoober','november','detsember'),
		'eu'=>array('Basque','urtarril','otsail','martxo','apiril','maiatz','ekain','uztail','abuztu','irail','urri','azaro','abendu'),
		'fa'=>array('Farsi','ژانویه','فوریه','مارس','آوریل','مه','ژوئن','جولای','اوت','سپتامبر','اکتبر','نوامبر','دسامبر'),
		'fi'=>array('Finnish','tammikuu','helmikuu','maaliskuu','huhtikuu','toukokuu','kesäkuu','heinäkuu','elokuu','syyskuu','lokakuu','marraskuu','joulukuu'),
		'fil'=>array('Filipino','Enero','Pebrero','Marso','Abril','Mayo','Hunyo','Hulyo','Agosto','Septiyembre','Oktubre','Nobyembre','Disyembre'),
		'fr'=>array('French','janvier','février','mars','avril','mai','juin','juillet','août','septembre','octobre','novembre','décembre'),
		'ga'=>array('Irish','Eanáir','Feabhra','Márta','Aibreán','Bealtaine','Meitheamh','Iúil','Lúnasa','Meán Fómhair','Deireadh Fómhair','Samhain','Nollaig'),		
		'gl'=>array('Galician','Xaneiro','Febreiro','Marzo','Abril','Maio','Xuño','Xullo','Agosto','Setembro','Outubro','Novembro','Decembro'),
		'gu'=>array('Gujarati','જાન્યુઆરી','ફેબ્રુઆરી','માર્ચ','એપ્રિલ','મે','જૂન','જુલાઇ','ઓગસ્ટ','સપ્ટેમ્બર','ઓકટોબર','નવેમ્બર','ડિસેમ્બર'),
		'ha'=>array('Hausa','Janairu','Fabrairu','Maris','Afrilu','Mayu','Yuni','Yuli','Agusta','Satumba','Oktoba','Nuwamba','Disamba'),
		'he'=>array('Hebrew','ינואר','פברואר','מרץ','אפריל','מאי','יוני','יולי','אוגוסט','ספטמבר','אוקטובר','נובמבר','דצמבר'),
		'hi'=>array('Hindi','जनवरी','फ़रवरी','मार्च','अप्रैल','मई','जून','जुलाई','अगस्त','सितम्बर','अक्टूबर','नवम्बर','दिसम्बर'),
		'hr'=>array('Croatian','siječanj','veljača','ožujak','travanj','svibanj','lipanj','srpanj','kolovoz','rujan','listopad','studeni','prosinac'),
		'hrm'=>array('Hmong','Lub ib hlis','Lub ob hlis','Lub peb hlis','Lub plaub hlis','Lub tsib hlis','Lub rau hli','Lub xya hli','Lub yim hli','Lub cuaj hli','Lub kaum hli','Lub kaum ib hlis','Lub kaum ob hlis'),
		'ht'=>array('Kreyòl','Janvye','Fevriye','Mas','Avril','Me','Jen','Jiyè','Out','Septanm','Oktòb','Novanm','Desanm'),
		'hu'=>array('Hungarian','január','február','március','április','május','június','július','augusztus','szeptember','október','november','december'),
		'hy'=>array('Armenian','Հունվար','Փետրվար','Մարտ','Ապրիլ','Մայիս','Հունիս','Հուլիս','Օգոստոս','Սեպտեմբեր','Հոկտեմբեր','Նոյեմբեր','Դեկտեմբեր'),
		'id'=>array('Indonesian','Januari','Februari','Maret','April','Mei','Juni','Juli','Agustus','September','Oktober','November','Desember'),
		'is'=>array('Icelandic','Janúar','Febrúar','Mars','Apríl','Maí','Júní','Júlí','Ágúst','September','Október','Nóvember','Desember'),
		'it'=>array('Italian','Gennaio','Febbraio','Marzo','Aprile','Maggio','Giugno','Luglio','Agosto','Settembre','Ottobre','Novembre','Dicembre'),
		'ig'=>array('Igbo','Jenụwarị','Febụwarị','Maachị','Eperelu','Mee','Jun','Jụlayị','Ọgọst','Septemba','Ọktoba','Novemba','Disemba'),
		'ja-x-Yoko'=>array('Japanese','1月','2月','3月','4月','5月','6月','7月','8月','9月','10月','11月','12月'),
		'ja-x-Tate'=>array('Japanese','1月','2月','3月','4月','5月','6月','7月','8月','9月','10月','11月','12月'),
		'jv'=>array('Javanese','Januari','Februari','Maret','April','Mei','Juni','Juli','Agustus','September','Oktober','November','Desember'),
		'ka'=>array('Georgian','იანვარი','თებერვალი','მარტი','აპრილი','მაისი','ივნისი','ივლისი','აგვისტო','სექტემბერი','ოქტომბერი','ნოემბერი','დეკემბერი'),
		'ko-x-Garo'=>array('Korean','일월','이월','삼월','사월','오월','6월','7월','8월','9월','10월','11월','12월'),
		'ko-x-Sero'=>array('Korean','일월','이월','삼월','사월','오월','6월','7월','8월','9월','10월','11월','12월'),
		'kn'=>array('Kannada','ಜನವರಿ','ಫೆಬ್ರುವರಿ','ಮಾರ್ಚ್','ಏಪ್ರಿಲ್','ಮೇ','ಜೂನ್','ಜುಲೈ','ಆಗಸ್ಟ್','ಸೆಪ್ಟೆಂಬರ್','ಅಕ್ಟೋಬರ್','ನವೆಂಬರ್','ಡಿಸೆಂಬರ್'),
		'km'=>array('Khmer/Cambodian','មករា','កុម្ភៈ','ខែមីនា','មេសា','ខែឧសភា','ខែមិថុនា','កក្កដា','សីហា','កញ្ញា','តុលា','ខែវិច្ឆិកា','ធ្នូ'),
		'la'=>array('Latin','Ianuarius','Februarius','Martius','Aprilis','Maius','Iunius','Iulius','Augustus','September','October','November','December'),
		'lo'=>array('Lao','ມັງກອນ','ກຸມພາ','ມີນາ','ເມສາ','ເດືອນພຶດສະພາ','ເດືອນມິຖຸນາ','ກໍລະກົດ','ສິງຫາ','ກັນຍາ','ຕຸລາ','ເດືອນພະຈິກ','ເດືອນທັນວາ'),
		'lt'=>array('Lithuanian','Sausis','Vasaris','Kovas','Balandis','Gegužė','Birželis','Liepa','Rugpjūtis','Rugsėjis','Spalis','Lapkritis','Gruodis'),
		'lv'=>array('Latvian','Janvāris','Februāris','Marts','Aprīlis','Maijs','Jūnijs','Jūlijs','Augusts','Septembris','Oktobris','Novembris','Decembris'),
		'mi'=>array('Maori','o Hānuere','o Pēpuere','o Maehe','o Āperira','o Haratua','o Hune','o Hūrae','o Ākuhata','o Hepetema','o Oketopa','o Noema','o Hakihea'),
		'mk'=>array('Macedonian','Јануари','Февруари','Март','Април','Мај','Јуни','Јули','Август','Септември','Октомври','Ноември','Декември'),
		'mn'=>array('Mongolian','Нэгдүгээр сар','Хоёрдугаар сар','Гуравдугаар сар','Дөрөвдүгээр сар','Тавдугаар cap','Зургаадугаар сар','Долоодугаар сар','Наймдугаар сар','Есдүгээр сар','Аравдугаар сар','Арваннэгдүгээр сар','Арванхоёрдугаар сар'),
		'mr'=>array('Marathi','जानेवारी','फेब्रुवारी','मार्च','एप्रिल','मे','जून','जुलै','ऑगस्ट','सप्टेंबर','ऑक्टोबर','नोव्हेंबर','डिसेंबर'),
		'ms'=>array('Malay','Januari','Februari','Mac','April','Mei','Jun','Julai','Ogos','September','Oktober','November','Disember'),
		'mt'=>array('Maltese','Jannar','Frar','Marzu','April','Mejju','Ġunju','Lulju','Awwissu','Settembru','Ottubru','Novembru','Diċembru'),
		'ne'=>array('Nepali','जनवरी','फेब्रुअरी','मार्च','अप्रिल','मे','जुन','जुलाई','अगस्ट','सेप्टेम्बर','अक्टोबर','नोभेम्बर','डिसेम्बर'),
		'nl'=>array('Dutch','Januari','Februari','Maart','April','Mei','Juni','Juli','Augustus','September','Oktober','November','December'),
		'no'=>array('Norwegian','januar','februar','mars','april','mai','juni','juli','august','september','oktober','november','desember'),
		'pa'=>array('Punjabi','ਜਨਵਰੀ','ਫਰਵਰੀ','ਮਾਰਚ','ਅਪ੍ਰੈਲ','ਮਈ,','ਜੂਨ','ਜੁਲਾਈ','ਅਗਸਤ','ਸਤੰਬਰ','ਅਕਤੂਬਰ','ਨਵੰਬਰ','ਦਸੰਬਰ'),
		'pl'=>array('Polish','styczeń','luty','marzec','kwiecień','maj','czerwiec','lipiec','sierpień','wrzesień','październik','listopad','grudzień'),
		'pt'=>array('Portuguese','Janeiro','Fevereiro','Março','Abril','Maio','Junho','Julho','Agosto','Setembro','Outubro','Novembro','Dezembro'),
		'pt-BR'=>array('Brasilian Portuguese','Janeiro','Fevereiro','Março','Abril','Maio','Junho','Julho','Agosto','Setembro','Outubro','Novembro','Dezembro'),
		'ro'=>array('Romanian','Ianuarie','Februarie','Martie','Aprilie','Mai','Iunie','Iulie','August','Septembrie','Octombrie','Noiembrie','Decembrie'),
		'ru'=>array('Russian','Январь','февраль','март','апрель','май','июнь','июль','август','сентябрь','октябрь','ноябрь','декабрь'),
		'sk'=>array('Slovak','január','február','marec','apríl','máj','jún','júl','august','september','október','november','december'),
		'sl'=>array('Slovene','januar','februar','marec','april','maj','junij','julij','avgust','september','oktober','november','december'),
		'so'=>array('Somali','Janaayo','Febraayo','Maarso','Abriil','Maajo','Juun','Luulyo','Agoosto','Sebtembar','Oktoobar','Nofeembar','Diseembar'),
		'sq'=>array('Albanian','Janar','Shkurt','Mars','Prill','Maj','Qershor','Korrik','Gusht','Shtator','Tetor','Nentor','Dhjetor'),
		'sr-Cyrl'=>array('Сербиан','Јануар','Фебруар','Март','Април','Мај','Јун','Јул','Август','Септембар','Октобар','Новембар','Децембар'),
		'sr-Latn'=>array('Serbian','Januar','Februar','Mart','April','Maj','Jun','Jul','Avgust','Septembar','Oktobar','Novembar','Decembar'),
		'sv'=>array('Swedish','Januari','Februari','Mars','April','Maj','Juni','Juli','Augusti','September','Oktober','November','December'),
		'sw'=>array('Swahili','Januari','Februari','Machi','Aprili','Mei','Juni','Julai','Agosti','Septemba','Oktoba','Novemba','Desemba'),
		'ta'=>array('Tamil','ஜனவரி,','பிப்ரவரி,','மார்ச்,','ஏப்ரல்,','மே,','ஜூன்,','ஜூலை,','ஆகஸ்ட்,','செப்டம்பர்,','அக்டோபர்,','நவம்பர்,','டிசம்பர்'),
		'te'=>array('Telugu','జనవరి','ఫిబ్రవరి','మార్చి','ఏప్రిల్','మే','జూన్','జూలై','ఆగష్టు','సెప్టెంబర్','అక్టోబర్','నవంబర్','డిసెంబర్'),
		'th'=>array('Thai','มกราคม','กุมภาพันธ์','มีนาคม','เมษายน','พฤษภาคม','มิถุนายน','กรกฎาคม','สิงหาคม','กันยายน','ตุลาคม','พฤศจิกายน','ธันวาคม'),
		'tr'=>array('Turkish','Ocak','Şubat','Mart','Nisan','Mayıs','Haziran','Temmuz','Ağustos','Eylül','Ekim','Kasım','Aralık'),
		'uk'=>array('Ukranian','Січень','лютий','березень','квітень','травень','червень','липень','серпень','вересень','жовтень','листопад','грудень'),
		'ur'=>array('Urdu','جنوری','فروری','مارچ','اپریل','مئی','جون','جولائی','اگست','ستمبر','اکتوبر','نومبر','دسمبر'),
		'vi'=>array('Vietnamese','Tháng Một','Tháng Hai','Tháng Ba','Tháng Tư','Tháng Năm','Tháng Sáu','Tháng Bảy','Tháng Tám','Tháng Chín','Tháng Mười','Tháng Mười Một','Tháng Mười Hai'),
		'yi'=>array('Yiddish','יאַנואַר','פֿעברואַר','מערץ','אַפּריל','מייַ','יוני','יולי','אויגוסט','סעפּטעמבער','אָקטאָבער','נאָוועמבער','דעצעמבער'),		
		'zh-Hans-x-Heng'=>array('Chinese','一月','二月','三月','四月','五月','六月','七月','八月','九月','十月','十一月','十二月'),
		'zh-Hant-x-Heng'=>array('Chinese','一月','二月','三月','四月','五月','六月','七月','八月','九月','十月','十一月','十二月'),
		'zh-Hans-x-Zong'=>array('Chinese','一月','二月','三月','四月','五月','六月','七月','八月','九月','十月','十一月','十二月'),
		'zh-Hant-x-Zong'=>array('Chinese','一月','二月','三月','四月','五月','六月','七月','八月','九月','十月','十一月','十二月'),
	);
}

