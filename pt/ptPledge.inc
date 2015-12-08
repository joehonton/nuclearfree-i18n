<?php
//=============================================================================
//
// File:         /i18n/ptPledge.inc
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
class ptPledge extends ptBasePage
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
		return 'Leve o Juramento';
	}
	
	//---------------------------------
	function metaDescription()
	{
		return 'Junte-se cidadãos do mundo em comprometendo-se a falar corajosamente sobre os perigos impostos pelo uso da fissão nuclear.';
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return 'juro a promessa,desnuclearizada,desnuclearização,fissão nuclear';
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return 'Comprometo-me a falar para fora.';
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Juro a Promessa Desnuclearizada Ora!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return 'Seu nome eo nome de família';
	}

	//---------------------------------
	function city()
	{
		return 'Sua cidade ou cidade natal';
	}
	
	//---------------------------------
	function country()
	{
		return 'Sua nacionalidade';
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return 'A promessa seria mais eficaz se você tiver fornecido o seu nome. Poderia, por favor preencha o formulário?';
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Sua promessa seria mais significativo se você forneceu sua cidade natal e nacionalidade, mas se você quiser omiti-los, basta pressionar o "Comprometo-me", mais uma vez botão.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $w_personal_name, $w_date, $w_city, $w_country )
	{
return <<<ENDHTML
			<h1>Desnuclearizada Juramento</h1>
			
			<p>Eu, $w_personal_name, junte-se cidadãos do mundo em comprometendo-se a falar corajosamente sobre os perigos impostos sobre a Terra e todos os seus habitantes através do uso da fissão nuclear na geração de eletricidade e em armas militares.</p>
			
			<p><strong>Comprometo-me a falar para fora sobre a energia nuclear.</strong> Os méritos do uso da fissão nuclear na geração de eletricidade são exageradas, e os verdadeiros riscos a longo prazo são grandes demais para continuar.</p>
			
			<ol>
				<li>Eletricidade gerada por usinas nucleares não é mais barato do que outras formas de geração de eletricidade.</li>
				<li>As usinas nucleares não pode ser feito 100% seguro contra falha catastrófica.</li>
				<li>Os resíduos isotópica criado por fissão nuclear continuará a ser tóxico para um tempo muito longo, e não temos lugar para colocá-lo.</li>
				<li>A energia nuclear não é uma energia limpa: a mineração, usinagem e enriquecimento do minério de urânio cria grandes desertos ecológicos que são prejudiciais aos seres humanos e animais selvagens.</li>
				<li>Urânio enriquecido para usinas de energia e de urânio altamente enriquecido para armas nucleares são feitas com o mesmo equipamento.</li>
			</ol>
			
			<p><strong>Comprometo-me a falar sobre o uso militar da fissão nuclear.</strong> Chegou a hora de todas as nações a renunciar ao uso de armas nucleares.</p>
			
			<ol start='6'>
				<li>Não há nenhuma razão moralmente legítimo para qualquer indivíduo, organização ou estado a usar armas nucleares.</li>
				<li>A posse de armas nucleares como um elemento de dissuasão é uma política fracassada.</li>
				<li>Nações com armas nucleares devem desenvolver planos de desmantelamento de forma segura o seu arsenal.</li>
				<li>Países com capacidade nuclear deve se envolver nas negociações, cujo objetivo é a completa abolição de todas as armas nucleares.</li>
				<li>Nenhuma nação deve buscar o desenvolvimento de novas armas nucleares.</li>
			</ol>
			
			<p>Assinado neste dia, $w_date, em <br />
			$w_city, $w_country.</p>
ENDHTML;
	}
}
?>