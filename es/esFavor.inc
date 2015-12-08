<?php
//=============================================================================
//
// File:         /i18n/esFavor.inc
//
// Language:     PHP
//
// Contents:     es = Spanish
//
// Author:       Joe Honton © 2013
//
// Initial date: September 15, 2013
//
//=============================================================================

require_once( __DIR__ . '/esBasePage.inc' );


//-------------------------------------
class esFavor extends esBasePage
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
		return 'Tengo un favor que pedirte';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Usted puede ayudar a hablar acerca de los peligros de la fisión nuclear.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'libre de armas nucleares,plantas de energía nuclear,energía nuclear,armas nucleares,mundo sin fisión nuclear';
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return 'Nuestro Hermoso Mármol Azul!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Asuma el compromiso';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return '¡Asuma el compromiso libre de armas nucleares ahora!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Usted Puede Ayudar al Hablar</h1>
			
			<p>¡Hola!</p>
			
			<p>Tengo un favor que pedirte. <strong>¿Va a ayudarme en mi búsqueda para hacer de este un mundo sin fisión nuclear?</strong></p>
			
			<p>Permítanme explicar por qué me siento tan fuertemente sobre esto.</p>
	
			<p>Cuando yo era niño, exploración espacial estaba en la cúspide de su gloria. La emoción que acompañó la aventura parecía ser compartido por todos. La emoción que acompaña a cada nuevo paso, ir abriendo el apetito para más. Y la previsión de que realmente íbamos a poner un hombre en la Luna y regresarlo a salvo a la Tierra, nos mantuvo ocupados, incluso con los pequeños éxitos y fracasos del programa.</p>
			
			<p>Antes de llegar a ese objetivo final, hubo muchos logros importantes. Uno de los más emocionantes de ellos fue cuando los astronautas se liberó de la órbita terrestre. Por primera vez, los humanos estaban dejando la seguridad de su planeta de origen. Éramos como amantes de la adrenalina en el último paseo de la alegría.</p>
			
			<p>Y entonces sucedió algo extraordinario. Los astronautas miraron hacia atrás en la Tierra se aleja, y vieron por primera vez el mármol azul que estaba en casa, y estaban casi abrumados por la belleza preciosa de lo que vieron. Las imágenes fotográficas que son enviadas de vuelta se transmitieron al mundo, y nosotros también estaban impresionados.</p>
			
			<p>La vulnerabilidad capturada en esas fotografías nos hizo conscientes de nosotros mismos de una manera que trasciende todas las filiaciones políticas. Por un breve momento en el tiempo, nos olvidamos de la Guerra Fría, dejamos a un lado nuestras diferencias, y nos maravillamos de la belleza de la Tierra. A partir de esta nueva conciencia sabíamos cuán frágil es nuestro lugar en el universo, y cuán peligrosamente cerca que estábamos destruyendo el único hogar que jamás tendremos.</p>
			
			<p>Nos despertamos con un sentido de urgencia para corregir nuestros defectos. Con una explosión de actividad, trabajamos para solucionar nuestros problemas. El tratado internacional sobre la proliferación de armas nucleares, y el acuerdo para prohibir todas las pruebas sobre el suelo de las armas nucleares eran una prueba de que podemos hablar de nuestros valores compartidos y alcanzar metas razonables comunes. Finalmente, con la caída del muro de Berlín y el deshielo de las relaciones entre los principales rivales de la Guerra Fría, que comenzó el primer esfuerzo serio destinado a la reducción de la reserva mundial de las armas nucleares.</p>
			
			<p>Pero desde entonces, parece que hemos perdido nuestro fervor por un mundo libre de armas nucleares y los esfuerzos recientes para continuar ese trabajo no han avanzado mucho más real. Después de cuatro décadas de conversaciones sin brillo, ni siquiera hemos sido capaces de mantener el statu quo: los tratados internacionales en materia nuclear se han eludido o ignorado, las reservas globales de envejecimiento se están deteriorando, y nueva investigación de armas nucleares continúa.</p>
			
			<p><strong>La política de disuasión ha fracasado claramente.</strong> Para nuestra vergüenza, se ha sustituido por la mano-agitar y la retórica vacía.</p>
			
			<p>Por desgracia, las armas nucleares no son nuestra única preocupación. Ahora sabemos que las centrales nucleares también representan una seria amenaza a nuestra preciosa Tierra. Estamos empezando a despertar a la conciencia de que las centrales nucleares no se pueden hacer 100% seguro.</p>
			
			<p>El catastrófico desastre de Fukushima nunca debería haber ocurrido porque los ingenieros nucleares habían preparado para cada posible escenario del peor caso: tenían las reglas de seguridad en el lugar para cada pieza de equipo, los procedimientos de operación para todas las situaciones posibles, los planes de contingencia para cuando las cosas cuando mal; y múltiples mecanismos a prueba de fallos en caso de que las copias de seguridad no funcionaron. Todos los mejores ingenieros de la industria estaban trabajando con diligencia y en conciencia con la seguridad como su principal prioridad. Sin embargo, todavía sucedió algo terrible. Y recuerde, esto ocurrió 25 años después de Chernobyl, con el tiempo suficiente para aprender de los errores anteriores.</p>
			
			<p>Estos días tengo un tiempo muy difícil creer casi cualquier cosa que las compañías de energía nuclear me dicen. Más barato que las alternativas? Más limpio que las alternativas? Más seguro que las alternativas? No. No. No.</p>
			
			<p><strong>Todo esto sólo para hervir agua?</strong></p>
	
			<p>Esta es la simple verdad: no hay nada especial sobre la electricidad generada por las centrales nucleares. Petróleo, carbón, gas y nuclear utilizan los mismos mecanismos para la generación de electricidad. Es muy sencillo:</p>
			
			<ol>
				<li>Una fuente de calor hierve el agua.</li>
				<li>El vapor del agua hirviendo obliga aspas de las turbinas giren.</li>
				<li>Bobinas inductoras unidos a la turbina de hilatura crean electricidad cuando se hace girar a través de un campo magnético.</li>
			</ol>
			
			<p>La generación de electricidad es sólo la física elemental y la ingeniería. ¿Por qué tomarse la molestia de agua hirviendo por la división de átomos? ¿Por qué crear residuos nucleares peligrosos que nunca podemos eliminar? ¿Por qué arruinar el medio ambiente con la minería y tratamiento de uranio que crea desiertos tóxicos? ¿Y por qué las empresas de energía nuclear exportando esta tecnología peligrosa para los países en desarrollo?</p>
			
			<p>Así que aquí está el favor. <strong>¿Me pueden ayudar a hablar de estos simples hechos?</strong> No estoy pidiendo que se unan a una organización o donar dinero, sino simplemente para añadir su nombre a la lista de personas valientes que hablarán a favor de un mundo libre de armas nucleares.</p>
			
			<p>Espero que esto hará una diferencia.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>