<?php
//=============================================================================
//
// File:         /i18n/iso639.inc
//
// Language:     PHP
//
// Contents:     ISO 639 Languages
//
// Author:       Joe Honton © 2013
//
// Initial date: October 12, 2013
//
//=============================================================================

//-------------------------------------
class iso639
{
	//===========================================
	// The key is the ISO 639 language code,
	// the value is the DNS subdomain
	//===========================================
	public static $language_subdomain_map = array(
		'is' => 'is',
		'no' => 'no',
		'sv' => 'sv',
		'fi' => 'fi',
		'da' => 'da',
							
		'et' => 'et',
		'lv' => 'lv',
		'lt' => 'lt',
					
		'ga' => 'ga',
		'gl' => 'gl',
		'cy' => 'cy',
					
		'nl' => 'nl',
		'de' => 'de',
		'en' => 'en',
		'eo' => 'eo',
					
		'ht' => 'ht',
		'fr' => 'fr',
		'ca' => 'ca',
		'eu' => 'eu',
		'es' => 'es',
		'pt-BR' => 'pt-br',
		'pt' => 'pt',
		'it' => 'it',
		'mt' => 'mt',
		'la' => 'la',
					
		'pl' => 'pl',
		'cs' => 'cs',
		'sk' => 'sk',
		'hu' => 'hu',
		'sl' => 'sl',

		'sq' => 'sq',
		'el' => 'el',
		'tr' => 'tr',
		
		'hr' => 'hr',
		'bs-Latn' => 'bs-latn',
		'bs-Cyrl' => 'bs-cyrl',
		'bs' 	  => 'bs-cyrl',
		'sr-Latn' => 'sr-latn',
		'sr-Cyrl' => 'sr-cyrl',
		'sr' 	  => 'sr-cyrl',
		'mk' => 'mk',
		
		'ro' => 'ro',
		'bg' => 'bg',
		'be' => 'be',
		'uk' => 'uk',
		'ru' => 'ru',
		'mn' => 'mn',
		
		'yi' => 'yi',
		'he' => 'he',
		
		'ka' => 'ka',
		'hy' => 'hy',
		'az-Cyrl' => 'az-cyrl',
		'az-Arab' => 'az-arab',
		'az-Latn' => 'az-latn',
		'az' 	  => 'az-latn',
		'fa' => 'fa',
		'ur' => 'ur',
		'ar' => 'ar',

		'so' => 'so',
		'ha' => 'ha',
		'ig' => 'ig',
		//'yo' => 'yo',
		'sw' => 'sw',
		//'zu' => 'zu',
		'af' => 'af',
	
		'ne' => 'ne',
		'pa' => 'pa',
		'hi' => 'hi',
		'gu' => 'gu',
		'mr' => 'mr',
		'te' => 'te',
		'kn' => 'kn',
		'ta' => 'ta',
		'bn' => 'bn',
	
		'zh-Hant-x-Zong' => 'zh-hant-zong',
		'zh-Hant-x-Heng' => 'zh-hant-heng',
		'zh-Hant' 		 => 'zh-hant-heng',		// must come after 'zh-Hant-x-Heng'
		'zh-Hans-x-Zong' => 'zh-hans-zong',
		'zh-Hans-x-Heng' => 'zh-hans-heng',
		'zh-Hans' 		 => 'zh-hans-heng',		// must come after 'zh-Hans-x-Heng'
		'zh' 			 => 'zh-hans-heng',		// must come after 'zh-Hans' and 'zh-Hant'
		'ko-x-Sero' 	 => 'ko-sero',
		'ko-x-Garo' 	 => 'ko-garo',
		'ko' 			 => 'ko-garo',			// must come after 'ko-x-Garo'
		'ja-x-Tate' 	 => 'ja-tate',
		'ja-x-Yoko' 	 => 'ja-yoko',
		'ja' 			 => 'ja-yoko',			// must come after 'ka-x-Yoko'
		
		'hrm' => 'hrm',
		'th' => 'th',
		'lo' => 'lo',
		'km' => 'km',
		'vi' => 'vi',

		'fil' => 'fil',
		'ceb' => 'ceb',
		'ms' => 'ms',
		'id' => 'id',
		'jv' => 'jv',
		'mi' => 'mi',
		
	// more supported by Chrome browser:
	//
	// am 	አማርኛ				(Amharic)		Ethiopia [25M]
	//    	Bihari 								(group of east Indian languages: Bhojpuri, Magahi, Maithili,Bajjika)
	// br 	Brezhoneg			(Breton)		[Celtic 200K]
	// co 	corsu 				(Corsican)		[Italy-France ~28K]
	// fo 	føroyskt 			(Faroese)  		[Nordic 66K speakers]
	// gn	Avañe'ẽ				(Guarani) 		[Paraguay, Argentina 5M]
	// haw  Ōlelo Hawaiʻi 		(Hawaiian)
	// ia   Interlingua
	// kk-Cyrl Қазақ 			(Kazakh)		(10M)
	// kk-Arab قازاق ٴتىلى‎ 		(Kazakh)		(1M)
	// kk-Latn Qazaq 			(Kazakh)	
	// ky-Cyrl Кыргызча			(Kyrgyz)		(3M)
	// ky-Arab قىرعىز تىلى		(Kyrgyz)
	// ku-Arab	کوردی			(Kurdish)		(20M Iraq, Iran)
	// ku-Latn	Kurdî			(Kurdish)		(    Turkey, Syria, Aermenia)
	// ln 		Ngala			(Lingala)		(10M Bantu/Congo)
	//			limba moldovenească	(Moldovan)	Romanian language as spoken in Republic of Moldova
	//			лимба молдовеняскэ 	(Moldovan)	Romanian language as writtin in Transnistria
	// ml		മലയാളം			(Malayam)		(38M southernmost India)
	// nb		norsk-Bokmål	(Book tongue Norwegian)	(85%)
	// nn		norsk-Nyorsk	(Neo Norwegian)			(15%)
	// oc		lenga d'òc		(Occitan)		(800K southern Frane, Italy, Spain
	// or		ଓଡ଼ିଆ 				(Oriya)			(33M eastern India)
	// om		Afaan Oromo 	(Oromo)			(30M Ethiopia, Kenya, Somalia)
	// ps		پښتو 			(Pashto)		(40M Afghanistan)
	// qu		Qhichwa simi	(Quechua)		(9M Peru, Bolivia)
	// rm		Rumantsch		(Romansh)		(60K Switzerland)
	// sn		chiShona		(Shona)			(8M Zimbabwe, Mozambique, Zambia, Boatswana)
	// sd-Arab	سنڌي 			(Shindhi)		(25M Pakistan,India)
	// sd-Deva	सिन्धी 				(Shindhi)		(    Pakistan,India)
	// si		සිංහල 			(Sinhala)		(17M Sri Lanka)
	// st		Sesotho			(Sotho)			(6M South Africa, Lesotho)
	// apd						(Sudanese Arabic/Khartoum Arabic)	(17M Sudna, Eritrea,Libya,Saudi Arabia)
	// tg-Cyrl	тоҷикӣ			(Tajik)			(4M Tajikistan, Uzbekistan)
	// tg-Arab	تاجیکی‎			(Tajik)
	// tg-Latn	Tadjik			(Tajik)
	// tt-Cyrl	татар теле		(Tatar)			(5M southwestern Russia)
	// tt-Arab	تاتار تيلی		(Tatar)			(Arabic is used in China)
	// tt-Latn	tatar tele		(Tatar)			(used unofficially)
	// ti		ትግርኛ			(Tigrinya)		(4M Eritrea, Ethiopia)
	// to		lea fakatonga	(Tonga)			(140K Polynesia)
	// tk-Latn	türkmençe		(Turkmen)		(7M Turkmenistan, Iran, Afghanistan)
	// tk-Cyrl	Түркмен дили	(Turkmen)		(widely used, but unofficial)
	// tk-Arab	تورکمن ﺗﻴﻠی ,تورکمنچه	(Turkmen)(used before 1929 only)
	// ak		Twi/Fante		(Akan)			(11M Ghana)
	// ug		ئۇيغۇرچە		(Uyghur)		(8M Norwestern China)
	// uz-Cyrl	Ўзбек			(Uzbek)			(25M Uzbekistan, Kyrgyzstan)
	// uz-Latn	Oʻzbek			(Uzbek)			(official script together with Cyrl)
	// uz-Arab	اوزبیک			(Uzbek)			(Uzbek written in Uyghur - used in China)
	// fy		Westfries		(Frisian)		(470K Friesland-Netherlands)
	// xh		isiXhosa		(Xhosa)			(8M South Africa, Lesotho)
	);

	//---------------------------------
	//^ The LanguageExists function is used by i18nPage::ContentLanguageNegotiation() which passes in
	//  an ISO639 language code.
	//> $iso639_language, like 'pt' or 'pt-BR'
	//< returns true if the language exists, false if it doesn't
	public static function LanguageExists( $iso639_language )
	{
		if (array_key_exists( $iso639_language, self::$language_subdomain_map ))
			return true;
		else
			return false;
	}
		
	//---------------------------------
	//^ The GetSubdomainFromLanguage function is used by i18nPage::ContentLanguageNegotiation() which passes in
	//  an ISO639 language code.
	//> $iso639_language, like 'pt' or 'pt-BR'
	//< returns the DNS subdomain, like 'pt' or 'pt-br', or returns 'en' if the language does not exist
	public static function GetSubdomainFromLanguage( $iso639_language )
	{
		if (array_key_exists( $iso639_language, self::$language_subdomain_map ))
			return self::$language_subdomain_map[$iso639_language];
		else
			return 'en';
	}
		
	//---------------------------------
	//^ The GetLanguageFromSubdomain function is used by i18nPage::Factory() which passes in
	//  the first part of the three-part DNS name.
	//> $subdomain, all lowercase, like 'pt' or 'pt-br' or 'ja-yoko' or 'zh-hans-heng'
	//< returns the ISO639 language code, like 'pt' or 'pt-BR' or 'ja' or 'zh-Hans'.
	//  returns 'en' if the language does not exist
	public static function GetLanguageFromSubdomain( $subdomain )
	{
		foreach( self::$language_subdomain_map as $iso639_language => $mapped_subdomain )
		{
			// Since the map may contain more than one key pointing to the same value
			// their order is significant. This algorithm will return the first entry found,
			// which should be the best form of the ISO639 code.
			if ( $mapped_subdomain == $subdomain )
				return $iso639_language;
		}
		return 'en';	// fallback
	}

	
	//===========================================
	// key = subdomain
	// [0] filename prefix and class prefix
	// [1] abbreviation for use on tiny buttons
	// [2] native name of the language
	// [3] English equivalent for the name of the language
	// [4] language group separator (true|false)
	//===========================================
	public static $subdomain_information_map = array(
		'is'		=> array('is',		'ís',		'Íslenska',			'Icelandic'),	
		'no'		=> array('no',		'no',		'Norsk',			'Norwegian'),	
		'sv'		=> array('sv',		'sv',		'Svenska',			'Swedish'),	
		'fi'		=> array('fi',		'fi',		'Suomi',			'Finnish'),	
		'da'		=> array('da',		'da',		'Dansk',			'Danish',	 	true),	
							
		'et'		=> array('et',		'et',		'Eesti',			'Estonian'),	
		'lv'		=> array('lv',		'lv',		'Latviešu',			'Latvian'),	
		'lt'		=> array('lt',		'lt',		'Lietuvių',			'Lithuanian',	 true),	
					
		'ga'		=> array('ga',		'ga',		'Gaeilge',			'Irish'),	
		'gl'		=> array('gl',		'gl',		'Galego',			'Galician'),	
		'cy'		=> array('cy',		'cy',		'Cymraeg',			'Welsh',	 	true),	
					
		'nl'		=> array('nl',		'nl',		'Nederlands',		'Dutch'),	
		'de'		=> array('de',		'de',		'Deutsch',			'German'),	
		'en'		=> array('en',		'en',		'English',			''),	
		'eo'		=> array('eo',		'eo',		'Esperanto',		'',	 			true),	
		
		'ht'		=> array('ht',		'ht',		'Kreyòl',			'Haitian Creole'),
		'fr'		=> array('fr',		'fr',		'Français',			'French'),	
		'ca'		=> array('ca',		'ca',		'Català',			'Catalan'),	
		'eu'		=> array('eu',		'eu',		'Euskara',			'Basque'),	
		'es'		=> array('es',		'es',		'Español',			'Spanish'),	
		'pt'		=> array('pt',		'pt',		'Português',		'Portuguese'),	
		'pt-br'		=> array('ptBr',	'br',		'Brasileiro',		'Brasilian'),	
		'it'		=> array('it',		'it',		'Italiano',			'Italian'),	
		'mt'		=> array('mt',		'mt',		'Malti',			'Maltese'),	
		'la'		=> array('la',		'la',		'Latin',			'Latin',		 true),	
		
		'pl'		=> array('pl',		'pl',		'Polski',			'Polish'),	
		'cs'		=> array('cs',		'čš',		'Čeština',			'Czech'),	
		'sk'		=> array('sk',		'sk',		'Slovenčina',		'Slovak'),	
		'hu'		=> array('hu',		'hu',		'Magyar',			'Hungarian'),	
		'sl'		=> array('sl',		'sl',		'Slovenščina',		'Slovene',	 	true),	

		'sq'		=> array('sq',		'sq',		'Shqip',			'Albanian'),	
		'el'		=> array('el',		'ελ',		'Ελληνικά',			'Greek'),	
		'tr'		=> array('tr',		'tü',		'Türkçe',			'Turkish',	 	true),	
		
		'hr'		=> array('hr',		'hr',		'Hrvatski',			'Croatian'),	
		'bs-cyrl'	=> array('bsCyrl',	'бо',		'босански',			'Bosnian'),	
		'bs-latn'	=> array('bsLatn',	'bs',		'Bosanski',			'Bosnian'),	
		'sr-cyrl'	=> array('srCyrl',	'ср',		'Српски',			'Serbian'),	
		'sr-latn'	=> array('srLatn',	'sr',		'Srpski',			'Serbian'),	
		'mk'		=> array('mk',		'мк',		'Македонски',		'Macedonian',	true),	
		
		'ro'		=> array('ro',		'ro',		'Română',			'Romanian'),	
		'bg'		=> array('bg',		'бл',		'български',		'Bulgarian'),	
		'be'		=> array('be',		'бе',		'беларуская',		'Belarusian'),	
		'uk'		=> array('uk',		'ук',		'Українська',		'Ukrainian'),	
		'ru'		=> array('ru',		'ру',		'Русский',			'Russian'),	
		'mn'		=> array('mn',		'мн',		'монгол',			'Mongolian',	true),
		
		'yi'		=> array('yi',		'ייִדיש',	'ייִדיש',			'Yiddish'),	
		'he'		=> array('he',		'עִבְרִית',	'עִבְרִית',			'Hebrew',	 	true),	
		
		'ka'		=> array('ka',		'ka',		'ქართული',			'Georgian'),	
		'hy'		=> array('hy',		'hy',		'Հայերեն ',			'Armenian'),	
		'az-latn'	=> array('azLatn',	'az',		'Azərbaycanca',		'Azerbaijani'),	
		'az-cyrl'	=> array('azCyrl',	'Аз',		'Азәрбајҹан',		'Azerbaijani'),
		'az-arab'	=> array('azArab',	'آذربایجان',	'آذربایجان',	'Azerbaijani'),
		'fa'		=> array('fa',		'فارسی',	'فارسی',			'Farsi'),	
		'ur'		=> array('ur',		'اُردُو',		'اُردُو',				'Urdu'),	
		'ar'		=> array('ar',		'العربية',		'العربية',		'Arabic',	 	true),	
	
		'so'		=> array('so',		'so',		'Af-Soomaali',		'Somali'),
		'ha'		=> array('ha',		'ha',		'Harshen Hausa',	'Hausa'),
		'ig'		=> array('ig',		'ig',		'Asụsụ Igbo',		'Igbo'),		// HERE
		//'yo'		=> array('yo',		'yo',		'èdè Yorùbá',		'Yoruba'),
		'sw'		=> array('sw',		'sw',		'Kiswahili',		'Swahili'),	
		//'zu'		=> array('zu',		'zu',		'isiZulu',			'Zulu'),
		'af'		=> array('af',		'af',		'Afrikaans',		'',	 			true),	
		
		'ne'		=> array('ne',		'नेपाली',		'नेपाली',				'Nepali'),
		'pa'		=> array('pa',		'ਪੰਜਾਬੀ',		'ਪੰਜਾਬੀ',				'Punjabi'),
		'hi'		=> array('hi',		'हिन्दी',		'हिन्दी',				'Hindi'),	
		'gu'		=> array('gu',		'ગુજરાતી',		'ગુજરાતી ',				'Gujarati'),	
		'mr'		=> array('mr',		'मराठी',		'मराठी ',				'Marathi'),	
		'te'		=> array('te',		'తెలుగు',		'తెలుగు',				'Telugu'),	
		'kn'		=> array('kn',		'ಕನ್ನಡ',		'ಕನ್ನಡ ',				'Kannada'),	
		'ta'		=> array('ta',		'தமிழ்',		'தமிழ்',				'Tamil'),	
		'bn'		=> array('bn',		'বাংলা',		'বাংলা',				'Bengali',		true),	

		'zh-hans-heng'	=> array('zhHansHeng',	'简体●横',	'简体中文(横排)',		'Chinese ⇉'),			// (Simplified Chinese hengpai) horizontal
		'zh-hant-heng'	=> array('zhHantHeng',	'繁體●橫',	'繁體中文(橫排)',			'Chinese ⇉'),			// (Traditional Chinese hengpai) horizontal		
		'zh-hans-zong'	=> array('zhHansZong',	'简体●纵',	'简体中文(纵排)',		'Chinese ⇊'),			// (Simplified Chinese zongpai) vertical
		'zh-hant-zong'	=> array('zhHantZong',	'繁體●縱',	'繁體中文(縱排)',			'Chinese ⇊'),			// (Traditional Chinese zongpai) vertical
		'ko-garo'		=> array('koGaro',		'한국어●가',	'한국어(가로쓰기)',		'Korean ⇉'),			// (Korean garosseugi) horizontal
		'ko-sero'		=> array('koSero',		'한국어●세',	'한국어(세로쓰기)',		'Korean ⇊'),			// (Korean serosseugi) vertical
		'ja-yoko'		=> array('jaYoko',		'日本●横',	'日本語(横書き)',			'Japanese ⇉'),			// (Japanese yokogaki) horizontal
		'ja-tate'		=> array('jaTate',		'日本●縦',	'日本語(縦書き)',			'Japanese ⇊',	true),	// (Japanese tategaki) vertical

		'hrm'		=> array('hrm',		'hrm',		'Hmong',			''),	
		'th'		=> array('th',		'ไทย',		'ไทย',				'Thai'),	
		'lo'		=> array('lo',		'າລາວ',		'ພາສາລາວ',			'Phasa Lao'),	
		'km'		=> array('km',		'ខ្ម',		'ភាសាខ្មែរ ',			'Khmer'),	
		'vi'		=> array('vi',		'vi',		'Tiếng Việt',		'Vietnamese', 	true),	
	
		'fil'		=> array('fil',		'fl',		'Filipino',			''),	
		'ceb'		=> array('ceb',		'ce',		'Binisaya',			'Cebuano'),	
		'ms'		=> array('ms',		'ms',		'Bahasa Melayu',	'Malay'),	
		'id'		=> array('id',		'id',		'Bahasa Indonesia',	''),	
		'jv'		=> array('jv',		'jv',		'Basa Jawa',		'Javanese'),
		'mi'		=> array('mi',		'mā',		'Te reo māori',		'Maori'),
	);

	//---------------------------------
	//^ The ClassPrefix function returns the filename prefix and class prefix
	//  for use by the Factory in constructing the filename and instantiating the class.
	public static function ClassPrefix( $subdomain )
	{
		if (array_key_exists( $subdomain, self::$subdomain_information_map ))
			return self::$subdomain_information_map[$subdomain][0];
		else
			return '';
	}

	//---------------------------------
	//^ The Button function returns the short abbreviation used for buttons
	public static function Button( $subdomain )
	{
		if (array_key_exists( $subdomain, self::$subdomain_information_map ))
			return self::$subdomain_information_map[$subdomain][1];
		else
			return '';
	}

	//---------------------------------
	//^ The Native function returns the language name in native parlance
	public static function Native( $subdomain )
	{
		if (array_key_exists( $subdomain, self::$subdomain_information_map ))
			return self::$subdomain_information_map[$subdomain][2];
		else
			return '';
	}

	//---------------------------------
	//^ The English function returns the language name, as it is known in English
	public static function English( $subdomain )
	{
		if (array_key_exists( $subdomain, self::$subdomain_information_map ))
			return self::$subdomain_information_map[$subdomain][3];
		else
			return '';
	}

	//---------------------------------
	//^ The Separator function returns a language group separator character
	public static function GroupSeparator( $subdomain )
	{
		if (array_key_exists( $subdomain, self::$subdomain_information_map ))
		{
			if (isset(self::$subdomain_information_map[$subdomain][4]))
				return true;
			else
				return false;
		}
		else
			return false;
	}
}

?>