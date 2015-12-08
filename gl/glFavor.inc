<?php
//=============================================================================
//
// File:         /i18n/glFavor.inc
//
// Language:     PHP
//
// Contents:     gl = Galego (Galician)
//
// Author:       Joe Honton © 2013
//
// Initial date: September 30, 2013
//
//=============================================================================

require_once( __DIR__ . '/glBasePage.inc' );


//-------------------------------------
class glFavor extends glBasePage
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
		return "Eu teño unha proposta";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Vostede pode axudar a falar con coraxe sobre os perigos da fisión nuclear.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "enerxía nuclear, armas nucleares, fisión, Terra, auga fervente, electricidade";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "noso fermoso mármore azul!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Solemnemente Prometer";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Xuro que o "Non Máis Fisión" xuramento agora!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Vostede pode axudar a falar con coraxe</h1>
			
			<p>Ola,</p>
			
			<p>Teño unha proposta. <strong>Vai me axudar na miña busca para facer deste un mundo sen fisión nuclear?</strong></p>
			
			<p>Permita-me explicar por que eu me sinto tan fortemente sobre iso.</p>
	
			<p>Cando estaba crecendo, a exploración espacial estaba no auxe da súa gloria. A emoción que acompañou a aventura parecía ser compartida por todos. A emoción que acompañou cada nova etapa, aguçar noso apetito para máis. E a esperanza de que realmente estaban indo a poñer un home na Lúa e retorna-lo en seguridade para a Terra, nos mantivo implicados, mesmo cos pequenos éxitos e fracasos do programa.</p>
			
			<p>Antes de chegar a ese obxectivo final, houbo moitos logros importantes. Un dos máis emocionante delas foi cando os astronautas se liberou da órbita da Terra. Por primeira vez, os seres humanos foron deixando a seguridade do seu planeta natal. Eramos como cazadores de emoción na aventura dunha vida.</p>
			
			<p>E entón a cousa máis notable aconteceu. Os astronautas mirou de volta á Terra retrocedendo, e viu por primeira vez o mármore azul, que foi a nosa casa, e case foron esmagados polo precioso beleza do que viron. As imaxes fotográficas que sexan devoltos foron transmitidas ao mundo, e nós tamén quedaron impresionados.</p>
			
			<p>A vulnerabilidade capturado naquelas fotografías nos fixo conscientes de nós mesmos, de forma que transcende as lealdades políticas. Por un breve momento no tempo, nós esquecemos sobre a Guerra Fría, deixamos de lado as nosas diferenzas, e quedou marabillado coa beleza da Terra. Desde esta nova conciencia sabiamos o quão fráxil o noso lugar no universo era, e como perigosamente preto estabamos a destruír o único fogar que nunca vai ter.</p>
			
			<p>Nós acordou con un sentido de urxencia para resolver as nosas imperfeccións. Cunha explosión de actividade, traballamos para corrixir os nosos problemas. O tratado internacional sobre a proliferación de armas nucleares, eo acordo para proscribir todas as probas o nivel do chan de armas nucleares eran a proba de que podemos falar sobre os nosos valores compartidos e acadar metas cordas comúns. Finalmente, coa caída do Muro de Berlín, eo descongelamento das relacións entre os principais rivais da Guerra Fría, comezamos o primeiro esforzo serio que ten como obxectivo reducir o stock mundial de armas nucleares.</p>
			
			<p>Pero desde aquela época, parece que perdemos o noso fervor por un mundo libre de armas nucleares, e os esforzos recentes para continuar este traballo non fixeron progresos moi real. Despois de catro décadas de negociacións sen brillo, non temos sequera foi capaz de manter o actual estado de cousas: os tratados nucleares internacionais foron contornados ou ignorados, os stocks mundiais de envellecemento están deteriorando, e unha nova investigación de armas nucleares continúa.</p>
			
			<p><strong>A política de disuasión claramente fallou.</strong> Para a nosa vergoña, el foi substituído por promesas vagas e retórica baleira.</p>
			
			<p>Por desgraza, as armas nucleares non son a nosa única preocupación. Sabemos agora que as centrais nucleares tamén representan unha seria ameaza á nosa preciosa Terra. Estamos só comezando a espertar para a percepción de que as centrais nucleares non pode ser 100% seguro.</p>
			
			<p>O desastre catastrófico en Fukushima nunca debería acontecer, xa que os enxeñeiros nucleares preparara para cada posible escenario de peor caso: eles tiñan normas de seguridade en vigor para todos os equipos, procedementos operativos para cada situación posible, plans de continxencia para cando as cousas cando incorrecta; e varios mecanismos automáticos de compensación en caso de que o equipo reserva non funcionou. Todos os mellores enxeñeiros do sector estaban traballando dilixente e conscientemente coa seguridade como a súa principal prioridade. Con todo, aínda que algo terrible sucedeu. E lembre, iso ocorreu 25 anos tras Chernóbil, con tempo suficiente para aprender dos erros anteriores.</p>
			
			<p>Estes días eu teño un tempo moi difícil crer que case calquera cousa que as empresas de enerxía nuclear me dicir. Máis barato que as alternativas? Máis limpo do que as alternativas? Máis seguro que as alternativas? Não. Não. Não.</p>
			
			<p><strong>Todo isto só para ferver a auga?</strong></p>
	
			<p>Aquí está a verdade simple: non hai nada de especial sobre a electricidade xerada por centrais nucleares. Petróleo, carbón, gas e nuclear usan os mesmos mecanismos para a xeración de electricidade. É sinxelo:</p>
			
			<ol>
				<li>A fonte de calor ferve a auga.</li>
				<li>O vapor de auga fervendo forza láminas de turbina a xirar.</li>
				<li>Bobinas de indución asociadas á turbina xirando crear electricidade cando rodou a través dun campo magnético.</li>
			</ol>
			
			<p>Xeración de enerxía eléctrica é só física e enxeñaría elemental. Entón, por que ir para o traballo de auga fervente por dividir átomos? Por que crear lixo nuclear perigoso que nunca consegue se librar? Por que romper o ambiente coa minería de uranio e moenda, que crea desertos tóxicos? E por que as empresas de enerxía nuclear exportar esa tecnoloxía perigoso para os países en desenvolvemento?</p>
			
			<p>Entón aquí está a solicitude. <strong>me pode axudar a falar estes feitos simple?</strong> Non estou pedindo para ti unirse a unha organización ou a doar cartos, senón simplemente engadir o seu nome á lista de individuos valentes que falará en favor da un mundo sen fisión nuclear.</p>
			
			<p>Espero que isto vai facer a diferenza.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>