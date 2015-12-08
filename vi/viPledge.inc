<?php
//=============================================================================
//
// File:         /i18n/viPledge.inc
//
// Language:     PHP
//
// Contents:     vi = Tiếng Việt (Vietnamese)
//
// Author:       Joe Honton © 2013
//
// Initial date: December 24, 2013
//
//=============================================================================

require_once( __DIR__ . '/viBasePage.inc' );


//-------------------------------------
class viPledge extends viBasePage
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
		return "Một lời hứa hướng tới một thế giới không có sự phân hạch hạt nhân";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Tham gia cùng với đồng bào của thế giới trong hứa hẹn để nói chuyện cách can đảm về sự nguy hiểm bị áp đặt bởi việc sử dụng các phản ứng phân hạch hạt nhân.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "phân hạch hạt nhân,năng lượng hạt nhân,vũ khí hạt nhân,nói cách can đảm,hứa hẹn,long trọng cam kết,thề,lời thề";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "Tôi hứa sẽ nói được cách can đảm.";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Thề "không có nhiều phân hạch hạt nhân" lời thề bây giờ!';
	}
	
	//=============================================================================
	// Form input title attributes
	//=============================================================================
	
	//---------------------------------
	function personalName()
	{
		return "tên được tên gia đình";
	}

	//---------------------------------
	function city()
	{
		return "quê hương của bạn";
	}
	
	//---------------------------------
	function country()
	{
		return "quốc tịch của bạn";
	}
	
	//=============================================================================
	// Form errors
	//=============================================================================
	
	//---------------------------------
	function missingPersonalName()
	{
		return "Lời tuyên thệ sẽ hiệu quả hơn nếu bạn cung cấp tên của bạn. Bạn có thể xin vui lòng điền vào mẫu?";
	}
	
	//---------------------------------
	function missingCityAndCountry()
	{
		return 'Lời thề của bạn sẽ có ý nghĩa hơn nếu bạn cung cấp quê hương và quốc tịch của bạn, nhưng nếu bạn muốn bỏ qua chúng, chỉ cần nhấn "Tôi hứa" nút một lần nữa.';
	}
	
	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content( $personal_name, $this_date, $city, $country )
	{
return <<<ENDHTML
			<h1>Một lời hứa hướng tới một thế giới không có sự phân hạch hạt nhân</h1>
			
			<p>Tôi, $personal_name, đoàn kết với đồng bào của tôi về thế giới trong hứa hẹn để nói chuyện cách can đảm về sự nguy hiểm áp đặt lên trái đất và tất cả cư dân của nó bằng cách sử dụng phân hạch hạt nhân trong thế hệ điện và vũ khí quân sự.</p>
			
			<p><strong>Tôi long trọng cam kết nói được cách can đảm về sự nguy hiểm của năng lượng hạt nhân.</strong> Các giá trị của việc sử dụng phân hạch hạt nhân trong thế hệ điện được phóng đại, và những rủi ro dài hạn thực sự quá tuyệt vời để tiếp tục.</p>
			
			<ol>
				<li>Điện được tạo ra bởi các nhà máy điện hạt nhân không phải là rẻ hơn so với các hình thức sản xuất điện.</li>
				<li>Nhà máy điện hạt nhân không thể thực hiện 100% an toàn từ thất bại thảm khốc.</li>
				<li>Chất thải được tạo ra bởi đồng vị phân hạch hạt nhân sẽ vẫn độc hại trong một thời gian rất dài, và chúng tôi không có chỗ để đặt nó.</li>
				<li>Năng lượng hạt nhân không phải là năng lượng sạch: khai thác, xay xát, và làm giàu quặng uranium tạo ra lớn sinh thái chất thải vùng đất có hại cho con người và động vật hoang dã.</li>
				<li>Uranium được làm giàu cho các nhà máy điện và uranium làm giàu cao cho vũ khí hạt nhân được thực hiện với cùng một thiết bị.</li>
			</ol>
			
			<p><strong>Tôi long trọng cam kết nói được cách can đảm về việc sử dụng quân sự của vũ khí hạt nhân.</strong> Đã đến lúc cho tất cả các quốc gia từ bỏ việc sử dụng vũ khí hạt nhân.</p>
			
			<ol start='6'>
				<li>Không có lý do chính đáng về mặt đạo đức đối với bất kỳ cá nhân, tổ chức hay nhà nước để sử dụng vũ khí hạt nhân.</li>
				<li>Việc sở hữu vũ khí hạt nhân như một vật cản là một chính sách thất bại.</li>
				<li>Các quốc gia có vũ khí hạt nhân nên xây dựng kế hoạch tháo dỡ kho vũ khí của họ một cách an toàn.</li>
				<li>Các quốc gia có khả năng hạt nhân nên tham gia vào các cuộc đàm phán với mục tiêu là việc bãi bỏ hoàn toàn tất cả các vũ khí hạt nhân.</li>
				<li>Không ai có thể theo đuổi sự phát triển của vũ khí hạt nhân mới.</li>
			</ol>
			
			<p>Tuyên thệ nhậm chức cho đến ngày nay, $this_date, trong<br />
			$city, $country.</p>
ENDHTML;
	}
}
?>