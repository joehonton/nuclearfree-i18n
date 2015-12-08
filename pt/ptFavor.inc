<?php
//=============================================================================
//
// File:         /i18n/ptFavor.inc
//
// Language:     PHP
//
// Contents:     pt = Portuguese
//
// Author:       Joe Honton © 2013
//
// Initial date: September 21, 2013
//
//=============================================================================

require_once( __DIR__ . '/ptBasePage.inc' );


//-------------------------------------
class ptFavor extends ptBasePage
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
		return 'Eu tenho um favor a pedir-lhe';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Você pode ajudar a falar sobre os perigos da fissão nuclear.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'desnuclearizada,desnuclearização,fissão nuclear,armas nucleares,energia nuclear,usinas nucleares';
	}
	
	//---------------------------------
	function blueMarble()
	{
		return 'Nosso Mármore Azul Bonito!';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Juro a Promessa';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Juro a Promessa Desnuclearizada Ora!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Você pode Ajudar Falando por Fora</h1>
			
			<p>Alô!</p>
			
			<p>Eu tenho um favor para lhe pedir. <strong>Você vai me ajudar na minha busca para fazer deste um mundo desnuclearização?</strong></p>
			
			<p>Permita-me explicar por que eu me sinto tão fortemente sobre isso.</p>
	
			<p>Quando eu estava crescendo, a exploração espacial estava no auge de sua glória. A emoção que acompanhou a aventura parecia ser compartilhada por todos. A emoção que acompanhou cada nova etapa, aguçar nosso apetite para mais. E a expectativa de que realmente estavam indo para colocar um homem na Lua e retorná-lo em segurança para a Terra, nos manteve envolvidos, mesmo com os pequenos sucessos e fracassos do programa.</p>
			
			<p>Antes de chegar a esse objetivo final, houve muitas conquistas importantes. Um dos mais emocionante delas foi quando os astronautas se libertou da órbita da Terra. Pela primeira vez, os seres humanos estavam deixando a segurança de seu planeta natal. Éramos como caçadores de emoção sobre a melhor aventura.</p>
			
			<p>E então a coisa mais notável aconteceu. Os astronautas olhou de volta para a Terra retrocedendo, e viu pela primeira vez o mármore azul, que foi a nossa casa, e eles quase foram esmagados pelo precioso beleza do que eles viram. As imagens fotográficas que eles sejam devolvidos foram transmitidas para o mundo, e nós também ficaram impressionados.</p>
			
			<p>A vulnerabilidade capturado naquelas fotografias nos fez conscientes de nós mesmos, de uma forma que transcende todas as lealdades políticas. Por um breve momento no tempo, nós esquecemos sobre a Guerra Fria, deixamos de lado nossas diferenças, e ficou maravilhado com a beleza da Terra. A partir desta nova consciência sabíamos o quão frágil o nosso lugar no universo era, e como perigosamente perto estávamos a destruir o único lar que nunca vai ter.</p>
			
			<p>Nós acordou com um senso de urgência para corrigir nossas imperfeições. Com uma explosão de atividade, nós trabalhamos para corrigir os nossos problemas. O tratado internacional sobre a proliferação de armas nucleares, eo acordo para banir todos os testes acima do solo de armas nucleares eram a prova de que podemos falar sobre nossos valores compartilhados e atingir metas sensatas comuns. Eventualmente, com a queda do Muro de Berlim, eo descongelamento das relações entre os principais rivais da Guerra Fria, começamos o primeiro esforço sério que visa reduzir o estoque mundial de armas nucleares.</p>
			
			<p>Mas desde aquela época, parece que perdemos o nosso fervor por um mundo livre de armas nucleares, e os esforços recentes para continuar esse trabalho não fizeram progressos muito real. Depois de quatro décadas de negociações sem brilho, não temos sequer sido capaz de manter o estado atual das coisas: os tratados nucleares internacionais foram contornados ou ignorados, os estoques mundiais de envelhecimento estão se deteriorando, e uma nova pesquisa de armas nucleares continua.</p>
			
			<p><strong>A política de dissuasão claramente falhou.</strong> Para nossa vergonha, ele foi substituído por promessas vagas e retórica vazia.</p>
			
			<p>Infelizmente, as armas nucleares não são a nossa única preocupação. Sabemos agora que as usinas nucleares também representam uma séria ameaça à nossa preciosa Terra. Estamos apenas começando a despertar para a percepção de que as usinas nucleares não pode ser 100% seguro.</p>
			
			<p>O desastre catastrófico em Fukushima nunca deveria ter acontecido, porque os engenheiros nucleares tinha preparado para cada possível cenário de pior caso: eles tinham regras de segurança em vigor para todos os equipamentos, procedimentos operacionais para cada situação possível, planos de contingência para quando as coisas quando errada; e múltiplos mecanismos à prova de falhas, caso os cópias de segurança não funcionou. Todos os melhores engenheiros do setor estavam trabalhando diligentemente e conscientemente com a segurança como sua principal prioridade. No entanto, ainda que algo terrível aconteceu. E lembre-se, isso ocorreu 25 anos após Chernobyl, com tempo suficiente para aprender com os erros anteriores.</p>
			
			<p>Estes dias eu tenho um tempo muito difícil acreditar que quase qualquer coisa que as empresas de energia nuclear me dizer. Mais barato do que as alternativas? Mais limpo do que as alternativas? Mais seguro do que as alternativas? Não. Não. Não.</p>
			
			<p><strong>Tudo isso apenas para ferver a água?</strong></p>
	
			<p>Aqui está a verdade simples: não há nada de especial sobre a eletricidade gerada por usinas nucleares. Petróleo, carvão, gás e nuclear usam os mesmos mecanismos para a geração de eletricidade. É simples:</p>
			
			<ol>
				<li>A fonte de calor ferve a água.</li>
				<li>O vapor da água fervente força lâminas de turbina a girar.</li>
				<li>Bobinas de indução ligadas à turbina girando criar electricidade quando rodado através de um campo magnético.</li>
			</ol>
			
			<p>Geração de energia elétrica é apenas física e engenharia elementar. Então, por que ir para o trabalho de água fervente por dividir átomos? Por que criar lixo nuclear perigoso que nunca consegue se livrar? Por que estragar o ambiente com a mineração de urânio e moagem, que cria desertos tóxicos? E por que as empresas de energia nuclear exportar essa tecnologia perigosa para os países em desenvolvimento?</p>
			
			<p>Então aqui está a favor. <strong>Você pode me ajudar a falar sobre estes fatos simples?</strong> Eu não estou pedindo para você se juntar a uma organização ou a doar dinheiro, mas simplesmente adicionar o seu nome à lista de indivíduos corajosos que falará em favor de um mundo desnuclearizada.</p>
			
			<p>Espero que isso vai fazer a diferença.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>