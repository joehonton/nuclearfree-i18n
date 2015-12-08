<?php
//=============================================================================
//
// File:         /i18n/laFavor.inc
//
// Language:     PHP
//
// Contents:     la = Latin
//
// Author:       Joe Honton © 2013
//
// Initial date: December 29, 2013
//
//=============================================================================

require_once( __DIR__ . '/laBasePage.inc' );


//-------------------------------------
class laFavor extends laBasePage
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
		return "Ego rogo";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Audacissime loquendo potest de periculis nuclearis scissionis auxilium.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "nuclei facultatem, nuclear potentia, nuclear industria, nuclear arma, fission, Terra, aqua, electricitatis";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "pulchra hyacintho marmora verteret!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Solemniter Promissio";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Jura «non plus nuclearis scissionis» juramentum!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Te potest auxilium audacissime loquendo</h1>
			
			<p>Salve,</p>
			
			<p>Ego rogo. <strong>Tene hoc, ut sine me nuclearis scissionis quaerendo?</strong></p>
			
			<p>Explicare cur hoc ego tam vehementer permittite.</p>
	
			<p>Cum auctus gloria plenus culmine erat spatium explorationem. Tumultum ab omnibus videretur, quam cum ingressus. Et cum suavitate, quod unusquisque lapis, sed hebetatum fuerit, multo magis est appetitus. Et in antecessum, qui sit vere ad lunam ibant caute et revertetur ad terram, etiam minor custos malisque versatur voluptua.</p>
			
			<p>Antequam ad ultimum finem, qui, multis clarus virtutibus. Horum uni sago integer astronauts cum soluta ab orbe terrarum. Primum, salus exeuntibus orbe homines. Facti sumus quasi in ingressus plurimos dolores in vita sua.</p>
			
			<p>Et factum est maxime excellerent. Terra astronauts prodit respectus ad aliud, et vidi primum locum nostrum, qui caeruleum marmor, pulchritudinem ac pene obrui viderent pretioso. Sunt iaci remitterent photographic mundi imagines, terrentur et nos.</p>
			
			<p>Captus in lusu quodam modo imagines sui conscius fecit politicae superentur. Ad punctum in modico tempore, oblivioni Frigus Bello a nostris remota, et mirabantur pulchritudinem terrae. Ab hac, quam nouimus fragilis conscientiam in mundo erat, et domus unica quam periculose destruunt apud nos unquam habebis.</p>
			
			<p>Nos expergefactus in a sensu necessitatem induceret defectum. Cum conclamasset habetur defigere operatus magna. Et proliferation internationalis foedus in nuclear arma et nuclear arma pacto movebo omnes supra terram tentatio est argumentum, quod non de sensibili communi et consequi metas. Et, Berlin Murus et inter se maxime aemulis resolutio Frigus Bello primo gravis inceptum conatu at dapibus tincidunt acervum nuclear arma.</p>
			
			<p>Verum iam inde a mundi videmur a fervore amisimus nuclear arma, et non multo opus recens successivo ut permanerent. Post quattuor decenniorum infirmum loquitur, quia non potuit esse in statu res erant: a nuclear foedus fuisse internationales circumveniri vel ignoratur, quod deterius est velit amet acervos, et novum research pergit nuclear arma.</p>
			
			<p><strong>Uellet de dissuasionis plane defecit.</strong> Secundum ignobilitatem rhetorica inanis est fides ac dubiis substituitur.</p>
			
			<p>Tristis, non solum de nuclear arma. Et probavimus hodie quod pose gravi comminatio ad nuclear potentia plantarum pretium tellus. Excitanda nobis sunt incipiens ad nuclear potentia plantarum experientia 100% tutus esse non possit.</p>
			
			<p>Et quia res ad Fukushima nuclear nunquam acciderit deterrimus ipsum sem quamlibet paraverat habebant locum quemque apparatu praecepta salutis, in omne tempus operandi rationes, quae erravit quando contingentia consilia et multiplex, viae in se ipso, in subsidiis pretium mauris non elit. Sunt omnia sedulo ac diligenter industria optimum tuto ut ipsum summo prioritate. Sed adhuc aliquid terribile factum est. Respice 25 annis post factum Chernobyl, satis scire ex erraverat tempus.</p>
			
			<p>Diebus fere credere quod ego valde tempus dolor nuclear industria mihi. Quam in vilius utrumque? Luctus quam ad alterum? Tutius quam alterum? No. No. No.</p>
			
			<p><strong>Haec quidem, ut coquam aqua?</strong></p>
	
			<p>Hic est simpliciter nihil est specialis de nuclear potentia plantarum electricity generantur. Oleum,carbonibus, vapore, et nuclear generandi omnes eadem mechanica electricity. Sed simplex:</p>
			
			<ol>
				<li>Ex quo fit, ut aqua in vaporem calidum.</li>
				<li>Aqua vapor in laminas vires turbine torqueat.</li>
				<li>Inductio ad caput telarum turbine mauris et constrictus, cum ad imum, per electricity a magnetica agro.</li>
			</ol>
			
			<p>Generare electricity et physica, est in elementis ipsum. Quare ad malum individua scindendo undis? Facere non possumus quin depopulandam nuclear periculosum exigi? Quare cum quis in direptionem, et uranium metallis toxic qui ad milling vastorum? Ut quid et dolor elit nuclear potentia progressum hoc periculosum velit?</p>
			
			<p>Et hic est petitio. <strong>Potest tibi auxilium, dicendo his simplicibus rebus?</strong> Aut ego non quaero, an tu ad pecuniam conferre, sed ad nomen numero constantem addere pro singulis loquar nuclearis scissionis in saecula.</p>
			
			<p>Spero hoc differentia.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>