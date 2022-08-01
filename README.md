## MỤC LỤC


```sh
I. GIỚI THIỆU	
II. CÁC NGHIÊN CỨU LIÊN QUAN	
    A. Mạch Arduino	
    B. Khối mạch cảm biến	
    C. Mạch điều khiển L298N	
III. THIẾT KẾ ROBOT DÒ ĐƯỜNG TRONG MÊ CUNG	
    A. Cấu trúc cơ bản của robot dò đường
    B. Thiết kế cơ khí	
    C. Phần điều khiển	
    D. Thuật toán dò đường trong mê cung	
IV. KẾT QUẢ NGHIÊN CỨU	
V. TÀI LIỆU THAM KHẢO	
```

## ĐIỀU KHIỂN ROBOT DÒ ĐƯỜNG TRONG MÊ CUNG


Robot tự hành (Mobile Robot) là một thành phần có vai trò quan trọng trong ngành Robot học. Cùng với sự phát triển mạnh mẽ của các hệ thống tự động hóa, robot tự hành ngày một được hoàn thiện và càng cho thấy lợi ích của nó trong công nghiệp và sinh hoạt. Một vấn đề rất được quan tâm khi nghiên cứu về robot tự hành là làm thế nào để robot biết được vị trí nó đang đứng và có thể di chuyển tới một vị trí xác định, đồng thời có thể tự động tránh được các chướng ngại vật trên đường đi. Vì vậy, việc chế tạo thành công đề tài này sẽ mở ra một hướng tiếp cận mới và góp phần thúc đẩy việc ứng dụng của robot ngày càng nhiều vào trong đời sống hằng ngày và trong nghiên cứu chế tạo.

#### I. GIỚI THIỆU

Robot đã và đang xuất hiện trong cuộc sống của chúng ta từ lâu và ngày càng trở thành một phần không thể thiếu trong cuộc sống hiện đại. Chúng đã góp phần mình vào công cuộc lao động, chính robot đang làm nên một cuộc các mạng về lao động, khoa học, và đang phục vụ đắc lực cho các ngành khoa học như: Khoa học quân sự, khoa học giáo dục, các ngành dịch vụ, giải trí… </br></br>
Vậy robot xuất hiện từ khi nào? Năm 1921 nhà soạn kịch bKarel Capek người Tiệp Khắc đã đưa lên sân khấu vở kịch có tiêu đề “Romands Univesal Robot”. Theo tiếng Séc “Robot” nghĩa là “Người tạp dịch”. Có thể nói đây là một gợi ý, một ý tưởng ban đầu về những cỗ máy có khả năng thao tác như con người. Đến trước chiến tranh thế giới lần thứ hai nhu cầu sử dụng những máy móc có khả năng thay thế con người ở những môi trường làm việc độc hại đã trở thành một nhu cầu cấp thiết. Ban đầu cơ cấu máy này hoạt động giống như tay máy của người vận hành. Cấu tạo của cơ cấu này bao gồm các thanh và các khớp và hệ thống giây chằng. Người vận hành điều khiển tay máy thông qua một cơ cấu khuyếch đại cơ khí.Trong chiến tranh thế giới lần thứ hai (năm 1945), xuất hiện cơ cấu máy được điều khiển từ xa để cầm nắm chất phóng xạ. Cho đến những năm 1950 cùng với sự ra đời của kỹ thuật điều khiển chương trình số NC (Number Control) kỹ thuật tay máy lúc này đã kết hợp được cả kỹ thuật điều khiển xa và điều khiển chương trình số. Sự kết hợp này đã tạo ra những thế hệ máy điều khiển từ xa có khả năng mềm dẻo, khả năng tự động hoá cao gọi tên là robot.
</br></br>
Năm 1949, máy phay điều khiển số ra đời phục vụ sản xuất ở Mỹ. Đến năm 1960 George Devol đưa ra mẫu Robot đầu tiên. Năm 1961 cũng tại Mỹ Robot công nghiệp. IR(Industrial Robot) đầu tiên đưa ra thị trường: Robot Unimat 1990 (Do trường đại học MIT chế tạo) đây là Robot phản hồi lực nó được ứng dụng vào công nghiệp sản xuất ô tô. Theo con số thống kê thì đến năm 1990 toàn thế giới đã triển khai và ứng dụng khoảng 300.000 IR. Do sự phát triển mạnh mẽ của kỹ thuật Vi xử lý và Tin học mà số lượng IR tăng nhanh chóng và tính năng cũng có nhiều bước đột phá, giá thành trên một đơn vị IR giảm dần. Loại Robot mà có thể tự vận hành theo một quỹ đạo một lộ trình định trước được gọi là Robot dò đường theo vạch. Robot di chuyển được là nhờ các vạch được thiết kế trước để cho Robot bám theo, các vạch đó có thể là màu đen trên nền trắng hoặc màu trắng trên nền đen hoặc có thể là màu khác miễn sao nó có thể nổi lên trên màu nền và Robot có thể nhận ra được vạch là được.

##### CÁC NGHIÊN CỨU LIÊN QUAN

#####Mạch Arduino
</br></br>
Các bo mạch Arduino thật ra là bo mạch vi xử lý được dùng để lập trình tương tác với các thiết bị phần cứng như cảm biến, động cơ, đèn hoặc các thiết bị khác. Đặc điểm nổi bật của Arduino là môi trường phát triển ứng dụng cực kỳ dễ sử dụng, với một ngôn ngữ lập trình có thể học một cách nhanh chóng ngay cả với người ít am hiểu về điện tử và lập trình. Và điều làm nên hiện tượng Arduino chính là mức giá rất thấp và tính chất nguồn mở từ phần cứng tới phần mềm. Bo mạch ArduinoUNO là bo mạch thông dụng nhất. ArduinoUno sử dụng chip Atmega328. có 14 chân vào/ra sô, 6 chân vào tương tự, thạch anh dao động 16Mhz.</br></br>
Thông số kĩ thuật:


| Vi điều khiển | ATmega328P | 
|--------------|-------|
| Điện áp hoạt động | 5V | 
| Điện áp vào khuyên dùng | 7-12V | 
| Điện áp vào giới hạn | 6-20V |
| Digital I/O pin | 14 (trong đó 6 pin có khả năng băm xung) |
| PWM Digital I/O Pins | 6 |
| Analog Input Pins | 6 |
| Cường độ dòng điện trên mỗi I/O pin | 20 mA |
| Cường độ dòng điện trên mỗi 3.3V pin | 50 mA |
| Flash Memory | 32 KB (ATmega328P) 0.5 KB được sử dụng bởi bootloader |
| SRAM | 2 KB (ATmega328P) |
| EEPROM | 1 KB (ATmega328P) |
| Tốc độ | 16 MHz |
| Chiều dài | 68.6 mm |
| Chiều rộng | 53.4 mm |
| Trọng lượng | 25g |

<img src="https://maysanxuattudong.com/wp-content/uploads/2021/08/so-do-chan-mach-arduino-uno-r3-min.jpg">

#### Chú thích: 
- Cổng kết nối Usb dùng để kết nới máy tính để nạp code vào cho mạch.
- Cổng nguồn cho mạch.
- Hàng chân cấp nguồn cho linh kiện khác.
- Hàng chân Analog để nhận các tín hiệu tương đương.
- Chip ATMEGA 328 là bộ xử lý trung tâm giúp xử lý các tín hiệu truyền vào giúp cho Robot có thể hoạt động được.
- Hàng chân Digital dùng để nhận các tín hiệu số 1,0.
- Nút reset dùng để reset lại mạch.
- Khối mạch cảm biến.
- Mạch cảm biến sử dụng 6 đèn Led siêu sáng và 6 con quang trở dùng để thu nhận tín hiệu vị trí của vạch. Khi led phát sáng, ánh sáng chiếu xuống bề mặt nền nếu gặp nền trắng thì ánh sáng sẽ phản xạ mạnh còn khi gặp nền đen thì ánh sáng phản xạ yếu ta lợi dụng điều này để thực hiện việc xác định các vạch cho Robot.

#### Mạch điều khiển L298N
Hệ thống sử dụng nguồn điện từ 9 đến 12V nối vào cổng 1.</br></br>
Đầu tiên, ta cấp điện 3.3V (lấy từ vi xử lý) cho đầu vào thứ nhất cổng 2 để cấp điện cho IC TLP521. Các đầu vào từ 2 đến 5 sẽ được nối vào vi xử lý, nhằm cấp tín hiệu điều khiển động cơ. Mỗi khi một đầu vào được kích đầu vào mức 0, IC TLP521 sẽ hoạt động, truyền tín hiệu cho IC L298. Tín hiệu này sẽ truyền ra các đầu ra từ 2 đến 5 cổng 4, điều khiển động cơ hoạt động. Khi module được cấp điện, đầu ra thứ nhất cổng 4 sẽ có điện áp 12V.</br></br>
Với cổng 3, ta sử dụng như một khóa cho IC L298 hoạt động. Ở cổng này, ta có 2 đầu ra 1 và 4 cấp điện ở mức 1, cùng 2 đầu vào 2 và 3 cấp tín hiệu cho IC L298. Đầu vào 2 ở mức 1 sẽ cho phép động cơ sử dụng OUTA và OUTB hoạt động. Đầu vào 2 ở mức 2 sẽ cho phép động cơ sử dụng OUTC và OUTD hoạt động. Có thể sử dụng jumper để nối dây 1 và 2, 3 và 4 giúp L298 hoạt động mà không cần quan tâm đến tín hiệu ENA và ENB.

<img src="https://file.hstatic.net/1000069225/file/so-do-kich-thuoc-arduino-motor-shield-l293d-1_2138c7367d8e40a08100b4f540bbcf11.jpeg">


#### II. THIẾT KẾ ROBOT DÒ ĐƯỜNG TRONG MÊ CUNG


