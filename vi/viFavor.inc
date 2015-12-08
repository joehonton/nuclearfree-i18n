<?php
//=============================================================================
//
// File:         /i18n/viFavor.inc
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
class viFavor extends viBasePage
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
		return "Tôi có một yêu cầu";
	}
	
	//---------------------------------
	function metaDescription()
	{
		return "Bạn có thể giúp đỡ bằng cách nói can đảm về sự nguy hiểm của phản ứng phân hạch.";
	}
	
	//---------------------------------
	function metaKeywords()
	{
		return "cơ sở hạt nhân,điện hạt nhân,năng lượng hạt nhân,vũ khí hạt nhân,phân hạch hạt nhân,trái đất,nước sôi,điện";
	}
	
	//=============================================================================
	// Earth
	//=============================================================================
	
	//---------------------------------
	function blueMarble()
	{
		return "đẹp bằng đá cẩm thạch màu xanh của chúng tôi!";
	}
	
	//=============================================================================
	// Buttons
	//=============================================================================
	
	//---------------------------------
	function pledgeButton()
	{
		return "long trọng hứa";
	}
	
	//---------------------------------
	function pledgeButtonAlt()
	{
		return 'Thề "phân hạch không có nhiều" lời thề bây giờ!';
	}

	//=============================================================================
	// Content
	//=============================================================================
	
	//---------------------------------
	function content()
	{
return <<<ENDHTML
			<h1>Bạn có thể giúp đỡ bằng cách nói tiếng cách can đảm</h1>
			
			<p>Alô!</p>
			
			<p>Tôi có một yêu cầu. <strong>Bạn sẽ giúp tôi trong nhiệm vụ của của tôi để làm cho một thế giới không có sự phân hạch hạt nhân?</strong></p>
			
			<p>Cho phép tôi giải thích lý do tại sao tôi cảm thấy mạnh mẽ về việc này.</p>
	
			<p>Khi tôi lớn lên, khám phá vũ trụ đang ở đỉnh cao của vinh quang đầy đủ của nó. Sự phấn khích mà đi kèm với các cuộc phiêu lưu dường như được chia sẻ bởi tất cả mọi người. Các hộp mà đi kèm với mỗi mốc mới, kích thích ham muốn của chúng tôi để biết thêm. Và dự đoán rằng chúng tôi thực sự đã đi vào đưa người lên mặt trăng và trở về Trái đất an toàn anh, giữ chúng tôi gắn bó với ngay cả những thành công nhỏ và thất bại của dự án.</p>
			
			<p>Trước khi đạt được mục tiêu cuối cùng, đã có nhiều thành tựu quan trọng. Một trong những chân ở hầu hết trong số đó là khi các phi hành gia đã phá vỡ miễn phí từ quỹ đạo Trái đất. Lần đầu tiên, con người đã để lại sự an toàn của hành tinh quê hương của họ. Chúng tôi giống như những người tìm kiếm hộp vào cuộc phiêu lưu của một đời.</p>
			
			<p>Và sau đó là điều đáng chú ý nhất đã xảy ra. Các phi liếc nhìn lại Trái đất rút xuống, và nhìn thấy lần đầu tiên bằng đá cẩm thạch màu xanh đó là nhà của chúng tôi, và họ gần như đã bị choáng ngợp bởi vẻ đẹp quý giá của những gì họ trông thấy. Những hình ảnh mà họ chụp ảnh gửi về đã được phát sóng với thế giới, và chúng ta cũng đã kinh hoàng.</p>
			
			<p>Lỗ hổng bị bắt trong những hình ảnh làm cho chúng tôi có ý thức về bản thân mình trong một cách mà vượt qua tất cả chính trị. Một thời gian ngắn trong thời gian, chúng ta đã về Chiến tranh Lạnh, chúng ta đặt sang một bên những khác biệt của chúng tôi, và chúng tôi ngạc nhiên trước vẻ đẹp của trái đất. Từ ý thức mới này, chúng tôi biết như thế nào mong manh của chúng tôi diễn ra trong vũ trụ, và làm thế nào một cách nguy hiểm gần chúng ta để phá hủy ngôi nhà duy nhất bao giờ chúng tôi sẽ có.</p>
			
			<p>Chúng tôi đánh thức với một ý thức cấp bách để khắc phục những thiếu sót của chúng tôi. Với sự bùng nổ của hoạt động, chúng tôi đã làm việc để khắc phục vấn đề của chúng tôi. Các hiệp ước quốc tế về vũ khí hạt nhân phổ biến vũ khí, và các thỏa thuận để cấm tất cả các thử nghiệm trên mặt đất của vũ khí hạt nhân là bằng chứng cho thấy chúng ta có thể nói về những giá trị chung của chúng tôi và đạt được mục tiêu hợp lý chung. Cuối cùng, với sự sụp đổ của Bức tường Berlin, và tan băng quan hệ giữa các đối thủ chính của Chiến tranh Lạnh, chúng tôi bắt đầu các nỗ lực nghiêm túc đầu tiên nhằm giảm kho dự trữ vũ khí hạt nhân toàn cầu.</p>
			
			<p>Nhưng kể từ thời điểm đó, chúng tôi dường như đã mất sự nhiệt tình của chúng tôi cho một thế giới không vũ khí hạt nhân, và những nỗ lực gần đây để tiếp tục công việc đã không được thực hiện nhiều tiến bộ thực sự. Sau bốn thập kỷ đàm phán mờ nhạt, chúng tôi đã thậm chí không thể duy trì tình trạng hiện tại của các vấn đề: điều ước hạt nhân quốc tế đã được phá vỡ hoặc bị bỏ qua; các kho dự trữ toàn cầu đang suy giảm, lão hóa, và mới nghiên cứu vũ khí hạt nhân vẫn tiếp tục.</p>
			
			<p><strong>Chính sách răn đe đã thất bại rõ ràng.</strong> Để xấu hổ của chúng tôi, nó đã được thay thế bởi những lời hứa mơ hồ và hùng biện rỗng.</p>
			
			<p>Đáng buồn thay, vũ khí hạt nhân không phải là mối quan tâm duy nhất của chúng. Chúng ta biết rằng các nhà máy điện hạt nhân cũng đặt ra một mối đe dọa nghiêm trọng đối với Trái đất quý giá của chúng tôi. Chúng tôi chỉ mới bắt đầu thức tỉnh để nhận ra rằng các nhà máy điện hạt nhân không thể thực hiện 100% an toàn.</p>
			
			<p>Thảm họa tại Fukushima không bao giờ nên xảy ra bởi vì các kỹ sư hạt nhân đã chuẩn bị cho mỗi thể trường hợp xấu nhất: họ có quy tắc an toàn tại chỗ cho từng thiết bị, quy trình hoạt động cho mọi tình huống có thể; kế hoạch dự phòng cho khi mọi thứ khi sai và nhiều cơ chế đền bù tự động trong trường hợp các thiết bị dự phòng không hoạt động. Tất cả các kỹ sư tốt nhất của ngành công nghiệp đã làm việc siêng năng và tận tâm với an toàn là ưu tiên hàng đầu của họ. Tuy nhiên, vẫn còn một cái gì đó khủng khiếp đã xảy ra. Và hãy nhớ, điều này xảy ra 25 năm sau thảm họa Chernobyl, với thời gian để học hỏi từ những sai lầm trước đó.</p>
			
			<p>Những ngày này tôi có một thời gian rất khó tin gần như bất cứ điều gì mà các công ty năng lượng hạt nhân cho tôi biết. Rẻ hơn so với các lựa chọn thay thế? Sạch hơn thay thế? An toàn hơn so với các lựa chọn thay thế? Không. Không. Không.</p>
			
			<p><strong>Tất cả điều này chỉ để đun sôi nước?</strong></p>
	
			<p>Đây là sự thật đơn giản: không có gì đặc biệt về điện được tạo ra bởi các nhà máy điện hạt nhân là. Dầu, than đá, khí đốt, và hạt nhân đều sử dụng các cơ chế tương tự để tạo ra điện. Nó đơn giản:</p>
			
			<ol>
				<li>Một nguồn nhiệt sôi nước.</li>
				<li>Hơi nước từ các lực lượng cánh tuabin nước sôi để quay.</li>
				<li>Cuộn dây cảm ứng gắn liền với các tua bin quay tạo ra điện khi xoay qua một từ trường.</li>
			</ol>
			
			<p>Phát điện chỉ là vật lý nguyên tố và kỹ thuật. Vì vậy, tại sao đi đến những rắc rối của nước sôi bằng cách tách nguyên tử? Tại sao tạo ra chất thải hạt nhân nguy hiểm mà chúng ta không bao giờ có thể thoát khỏi? Tại sao làm hỏng môi trường với khai thác uranium và xay xát tạo ra độc chất thải đất? Và tại sao các công ty điện hạt nhân xuất khẩu công nghệ nguy hiểm này cho các nước đang phát triển?</p>
			
			<p>Vì vậy, đây là yêu cầu. <strong>Bạn có thể giúp tôi để nói về những sự kiện đơn giản?</strong> Tôi không yêu cầu bạn tham gia một tổ chức, quyên góp tiền, nhưng chỉ đơn giản là để thêm tên của mình vào danh sách các cá nhân dũng cảm, những người sẽ nói ủng hộ một thế giới không có sự phân hạch hạt nhân.</p>
			
			<p>Tôi hy vọng điều này sẽ tạo sự khác biệt.</p>
			
			<p>Joseph Honton<br />
			Sebastopol, California, USA</p>
ENDHTML;
	}
}
?>