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

##### A. Mạch Arduino
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

![image](https://user-images.githubusercontent.com/54675603/182274492-a5181dc3-1274-4d80-853a-f1d07f942b35.png)


#### Chú thích: 
- Cổng kết nối Usb dùng để kết nới máy tính để nạp code vào cho mạch.
- Cổng nguồn cho mạch.
- Hàng chân cấp nguồn cho linh kiện khác.
- Hàng chân Analog để nhận các tín hiệu tương đương.
- Chip ATMEGA 328 là bộ xử lý trung tâm giúp xử lý các tín hiệu truyền vào giúp cho Robot có thể hoạt động được.
- Hàng chân Digital dùng để nhận các tín hiệu số 1,0.
- Nút reset dùng để reset lại mạch.
#### B. Khối mạch cảm biến.
Mạch cảm biến sử dụng 6 đèn Led siêu sáng và 6 con quang trở dùng để thu nhận tín hiệu vị trí của vạch. Khi led phát sáng, ánh sáng chiếu xuống bề mặt nền nếu gặp nền trắng thì ánh sáng sẽ phản xạ mạnh còn khi gặp nền đen thì ánh sáng phản xạ yếu ta lợi dụng điều này để thực hiện việc xác định các vạch cho Robot.

![image](https://user-images.githubusercontent.com/54675603/182274422-11083f5e-da79-42ed-ad4f-0952801c3ac6.png)

#### C. Mạch điều khiển L298N
Hệ thống sử dụng nguồn điện từ 9 đến 12V nối vào cổng 1.</br></br>
Đầu tiên, ta cấp điện 3.3V (lấy từ vi xử lý) cho đầu vào thứ nhất cổng 2 để cấp điện cho IC TLP521. Các đầu vào từ 2 đến 5 sẽ được nối vào vi xử lý, nhằm cấp tín hiệu điều khiển động cơ. Mỗi khi một đầu vào được kích đầu vào mức 0, IC TLP521 sẽ hoạt động, truyền tín hiệu cho IC L298. Tín hiệu này sẽ truyền ra các đầu ra từ 2 đến 5 cổng 4, điều khiển động cơ hoạt động. Khi module được cấp điện, đầu ra thứ nhất cổng 4 sẽ có điện áp 12V.</br></br>
Với cổng 3, ta sử dụng như một khóa cho IC L298 hoạt động. Ở cổng này, ta có 2 đầu ra 1 và 4 cấp điện ở mức 1, cùng 2 đầu vào 2 và 3 cấp tín hiệu cho IC L298. Đầu vào 2 ở mức 1 sẽ cho phép động cơ sử dụng OUTA và OUTB hoạt động. Đầu vào 2 ở mức 2 sẽ cho phép động cơ sử dụng OUTC và OUTD hoạt động. Có thể sử dụng jumper để nối dây 1 và 2, 3 và 4 giúp L298 hoạt động mà không cần quan tâm đến tín hiệu ENA và ENB.

![image](https://user-images.githubusercontent.com/54675603/182274531-32fb732a-5a61-47b4-9bef-db4137a252e0.png)

![image](https://user-images.githubusercontent.com/54675603/182274558-9a0c878a-9da4-4228-a1ec-1edc9046caa0.png)

Thông số kĩ thuật:


| Driver | L298N tích hợp hai mạch cầu H | 
|--------------|-------|
| Điện áp hoạt động | +5 V ~ +12 V | 
| Dòng tối đa cho mỗi cầu H là | 2A (=>2A cho mỗi motor) | 
| Điện áp của tín hiệu điều khiển | +5 V ~ +7 V |
| Dòng của tín hiệu điều khiển |  0 ~ 36mA |
| Công suất hao phí | 20W (khi nhiệt độ T = 75 ℃) |
| Nhiệt độ bảo quản | -25 ℃ ~ +130 ℃ |

#### II. THIẾT KẾ ROBOT DÒ ĐƯỜNG TRONG MÊ CUNG

#### A. Cấu trúc cơ bản của robot dò đường

![image](https://user-images.githubusercontent.com/54675603/182274106-dddaaf84-6209-48d3-ab84-47f25ea4d471.png)

Trong đó: </br>
Bộ cảm biến: gồm 8 led siêu sáng và 8 quang trở dùng để phát và thu tín hiệu về.</br>
- Bộ xử lý trung tâm: chủ yếu là mạch Arduino uno R3, nhận tín hiệu từ bộ cảm biến và phát tín hiệu cho mạch điều khiển và động cơ Servo.</br>
- Mạch điều khiển: sử dụng mạch cầu L298n để điều khiển cho 2 động cơ hoạt động giúp cho Robot có thể di chuyển được.</br>
- Động cơ Servo: chủ yếu là dùng để điều hướng cho Robot có thể đi đúng lộ trình đã được định sẵn.</br>
#### B. Thiết kế cơ khí
- Ý tưởng cho khung xe
Với chức năng là chỉ dò theo đường ngoài ra không còn chức năng khác, vậy ta nên lựa chọn những chất liệu nào bền nhẹ và tiết kiệm nhất đối với sinh viên. Ta cần chú ý tới các mạch trên xe, các dây nối để có thể xác định được chiều cao, chiều dài của xe để thiết kế cho phù hợp tránh gây lãng phí, ngoài ra còn cần phải đảm bảo không gian cho các mạch hoạt động và để giúp tản nhiệt khi hoạt động quá lâu.
- Khung xe
Là nơi sẽ chứa các mạch điều khiển mạch xử lý trung tâmb mạch cảm biến và bánh xe. Khung xe đơn giản thì ta nên làm với các vật liệu nhẹ và bền như gỗ, mika, nhôm,…. Tùy theo các mạch mà ta sẽ thiết kế vị trí cho hợp lý.
Lựa chọn thiết bị và kết cấu xe
- Các thiết bị:
    - Khung xe chính là nơi để ráp nối các phần riêng biệt lại với nhau.
    - Hai bánh xe to giúp cho xe di chuyển tiến tới.
    - 2 bánh xe điều hướng được gắn vào 1 trục và được điều khiển bởi động cơ Servo.
    - Nguồn Pin 9v.
    - Mạch Arduino uno r3 dùng để thu nhận các tính hiệu từ mạch cảm biến và phản hồi lại các tính hiệu lại cho các bộ phận điều khiển để giúp xe hoạt động được.
    - Mạch cảm biến sử dụng đèn Led siêu sáng và quang trở để thu nhận tín hiệu gửi về cho mạch xử lý là Arduino uno r3.
    - Mạch điều khiển dùng để điều khiển 2 motor giúp cho xe vận hành được.
    - Động cơ Servo dùng để điều hướng cho Robot giúp cho Robot bám theo vạch một cách tốt nhất.
    - Ốc, vít, dây nối, dây nguồn,….

|  Tên | Số lượng | Thông số | Hình ảnh |
|--------------|-------|-------|----|
| Khung xe | 1 |  Chất liệu: Mika </br>  Kích thước: 18x13cm | ![image](https://user-images.githubusercontent.com/54675603/182276079-92ebce99-7deb-43a3-9798-0a433f6ed137.png)|
| Khung đỡ ạch cảm biến | 1 |  Chất liệu: Mika </br>  Kích thước: 18x13cm | ![image](https://user-images.githubusercontent.com/54675603/182275225-16140f5c-f948-483c-968d-4b20a73884aa.png)|
| Khung đỡ mạch xử lý trung tâm | 1 |  Chất liệu: Mika </br>  Kích thước: 15x9m | ![image](https://user-images.githubusercontent.com/54675603/182275418-41a7b2a6-e6f1-4d9d-a42a-ef3b1bafc038.png)|
| Bánh xe chính cho Robot | 1 |  Chất liệu: Nhựa cứng và dẻo | ![image](https://user-images.githubusercontent.com/54675603/182275500-b963a5a8-4250-4c75-a1cf-d530fcca3f1b.png)|
| Bulong 3x30 | 2 |  Chất liệu: Nhựa cứng và dẻo | ![image](https://user-images.githubusercontent.com/54675603/182275500-b963a5a8-4250-4c75-a1cf-d530fcca3f1b.png)|
| Bulong 3x10| 22 |  Chất liệu: thép </br> Gá khung| ![image](https://user-images.githubusercontent.com/54675603/182275588-1c80b65c-2ab1-4e82-a154-ac643d598324.png)|
| Bulong 5x25| 2 |  Chất liệu: thép </br> Gá mắt trâu| ![image](https://user-images.githubusercontent.com/54675603/182275620-e718aa74-3b52-4243-a179-a44733c175b7.png)|
| Đai ốc các loại(2,3,5mm)| 30, 22, 6|  Chất liệu: thép </br> Lắp với bulong| ![image](https://user-images.githubusercontent.com/54675603/182275638-d867de8e-9dd0-4e3f-a434-63932559c0b2.png)|
| Nguồn Pin 9v| 4 |   | ![image](https://user-images.githubusercontent.com/54675603/182275661-d70ab0b9-a269-4ea2-b296-5745ba2d2229.png)|

#### C. Phần điều khiển
- Sơ đồ khối của Robot </br>
![image](https://user-images.githubusercontent.com/54675603/182276414-5b1000b4-feee-4326-9c69-1f9fe83ae6ca.png)
- Khối mạch cảm biến </br>
![image](https://user-images.githubusercontent.com/54675603/182276452-4c8cbab6-a637-4fb5-ae05-9e6d99a9aac6.png)
#### D. Thuật toán dò đường trong mê cung – Thuật toán Maze 
Thuật toán Maze là một quy tắc nổi tiếng nhất để vượt qua mê cung, còn được gọi là quy tắc tay trái hoặc quy tắc tay phải. Nếu mê cung chỉ liên thông đơn giản nghĩa là tất cả các bức tường của nó được kết nối với nhau hoặc kết nối với đường bao quanh mê cung, thì bằng cách dò một tay lên một bức tường của mê cung thì người đi đảm bảo không bị lạc và tìm được lối ra nếu có một lối ra trên đường bao; hoặc nếu không có lối ra thì sẽ quay trở lại lối vào và sẽ đi qua tất cả các đường của mê cung ít nhất 1 lần.</br></br>
Nếu các bức tường được kết nối, thì có thể được kéo giãn biến dạng thành một vòng lặp hoặc vòng tròn. Do đó, bức tường buộc người đi theo xung quanh một vòng tròn từ điểm đầu đến cuối.</br>

![image](https://user-images.githubusercontent.com/54675603/182276549-09a60f4d-0569-4f05-84e5-533020ccc0a1.png)

Các bước trong giải quyết mê cung là gì ?</br></br>
Về cơ bản có 2 bước: đầu tiên là để Robot đi qua các mê cung và tìm thấy những kết thúc của nó. Thứ hai là để tối ưu hóa các con đường đó để Robot của có thể đi trở lại thông qua các mê cung.</br></br>
Làm thế nào để các robot tìm thấy sự kết thúc của mê cung ?</br></br>
Chúng ta sử dụng một kỹ thuật gọi là bàn tay trái trên tường. Hãy tưởng tượng bạn đang ở trong một mê cung và bạn luôn giữ tay trái của bạn trên các cạnh của bức tường và đi theo hướng tay trái. Làm điều này cuối cùng sẽ giúp bạn có được ra khỏi một mê cung mà  không lặp lại đường cũ.</br></br>
Các tình huống có thể gặp :</br>
![image](https://user-images.githubusercontent.com/54675603/182276690-69b217fb-9fb4-4de9-8d3c-9b3481149853.png)
</br>
Nguyên tắc này có thể được đơn giản hóa thành những điều kiện đơn giản:</br>
- Nếu bạn gặp “End of maze” là nơi cần đến thì sẽ dừng lại.
- Nếu bạn gặp “Straight or Right ” đi thẳng hoặc rẽ phải ta sẽ đi thẳng.
- Nếu bạn gặp “Straight or Left ” đi thẳng hoặc rẽ trái ta sẽ rẽ trái.
- Nếu bạn gặp “ Cross ” là 1 ngã tư ta sẽ rẽ trái.
- Nếu bạn gặp “ T ” là 1 ngã ba ta sẽ rẽ trái.
- Nếu bạn gặp “ Left Only ” là nơi chỉ có thể rẽ trái ta sẽ rẽ trái.
- Nếu bạn gặp “ Right Only ” là nơi chỉ có thể rẽ phải ta sẽ rẽ phải.

Khi Robot đến ngã ba hay ngã tư thì ưu tiên rẽ trái, nếu không có rẽ trái được thì đi thẳng, sau đó mới rẽ phải.</br>
- Sau khi di chuyển theo 1 hướng , Robot sẽ ghi đường đã đi vào 1 mảng ký tự:
- Quy tắc ghi:
    - Left (Rẽ trái)  “L”.
    - Right (Rẽ phải) “R”.
    - Straight (Đi thẳng ) “S”.
    - Back (Quay đầu) “B”.

Ví dụ : rẽ trái – đi thẳng – rẽ phải – rẽ trái : ta được mảng : “LSRL”

### Code
```sh
void loop()
{
  readLFSsensors();
  switch (mode)
  {
    case NO_LINE:
       motorStop();
       goAndTurn (LEFT, 180);
       break;
    case CONT_LINE:
       runExtraInch();
       readLFSsensors();
       if (mode == CONT_LINE) mazeEnd();
       else goAndTurn (LEFT, 90); // or it is a "T" or "Cross"). In both cases, goes to LEFT
       break;
    case RIGHT_TURN:
       runExtraInch();
       readLFSsensors();
       if (mode == NO_LINE) goAndTurn (RIGHT, 90);
       break;
    case LEFT_TURN:
       goAndTurn (LEFT, 90);
       break;
    case FOLLOWING_LINE:
       followingLine();
       break;
  }
}
```

Sau khi có được 1 mảng ghi lại kết quả đường đi , ta sẽ dùng thuật toán maze để tối ưu hóa đường đi , để tìm đường ngắn nhất tới được vị trí ta cần đến.</br>
- Quy tắc tối ưu :
    - LBR = B
    - LBS = R
    - RBL = B
    - SBL = B
    - SBS = B
    - LBL = S
 
 Ví dụ ta có đường như hình :
 
 ![image](https://user-images.githubusercontent.com/54675603/182277319-aee27b31-b9b8-4497-8d8e-614c289c20a6.png)
 
 ```sh
 Ta sẽ có mảng đường đi:  path = [LBLLLBSBLLBSLL] và pathLengh = 14
 Sau khi tối ưu :
    path = [LBLLLBSBLLBSLL] ==> LBL = S
    path = [SLLBSBLLBSLL] ==> LBS = R
    path = [SLRBLLBSLL] ==> RBL = B
    path = [SLBLBSLL] ==> LBL = S
    path = [SSBSLL] ==> SBS = B
    path = [SBLL] ==> SBL = R
    path = [RL]
 Như vậy ta chỉ cần di chuyển ở lần 2 là : Right – Left.
```

### Code Maze và code tối ưu đường đi:

 ```sh
void recIntersection(char direction)
{
  path[pathLength] = direction; // Store the intersection in the path variable.
  pathLength ++;
  simplifyPath(); // Simplify the learned path.
}
	
	void simplifyPath()
{
  // only simplify the path if the second-to-last turn was a 'B'
  if(pathLength < 3 || path[pathLength-2] != 'B')
    return;
  int totalAngle = 0;
  int i;
  for(i=1;i<=3;i++)
  {
    switch(path[pathLength-i])
    {
      case 'R':
        totalAngle += 90;
	break;
      case 'L':
	totalAngle += 270;
	break;
      case 'B':
	totalAngle += 180;
	break;
    }
  }
  // Get the angle as a number between 0 and 360 degrees.
  totalAngle = totalAngle % 360;
  // Replace all of those turns with a single one.
  switch(totalAngle)
  {
    case 0:
	path[pathLength - 3] = 'S';
	break;
    case 90:
	path[pathLength - 3] = 'R';
	break;
    case 180:
	path[pathLength - 3] = 'B';
	break;
    case 270:
	path[pathLength - 3] = 'L';
	break;
  }
  // The path is now two steps shorter.
  pathLength -= 2;
  
} 
```
### Hàm Main

 ```sh
void loop() 
{
  ledBlink(1);
  readLFSsensors(); 
  
  mazeSolve(); // First pass to solve the maze
  ledBlink(2);
  while (digitalRead(buttonPin) { }
  pathIndex = 0;
  status = 0;
  
  mazeOptimization(); // Second Pass: run the maze as fast as possible
  ledBlink(3);
  while (digitalRead(buttonPin) { }
  mode = STOPPED;
  status = 0; // 1st pass
  pathIndex = 0;
  pathLength = 0;
}
	
	Hàm maze tối ưu :
		
	void mazeOptimization (void)
{
  while (!status)
  {
    readLFSsensors();  
    switch (mode)
    {
      case FOLLOWING_LINE:
        followingLine();
        break;    
      case CONT_LINE:
        if (pathIndex >= pathLength) mazeEnd (); 
        else {mazeTurn (path[pathIndex]); pathIndex++;}
        break;  
      case LEFT_TURN:
        if (pathIndex >= pathLength) mazeEnd (); 
        else {mazeTurn (path[pathIndex]); pathIndex++;}
        break;  
      case RIGHT_TURN:
        if (pathIndex >= pathLength) mazeEnd (); 
        else {mazeTurn (path[pathIndex]); pathIndex++;}
        break;   
    }    
   }  
}
```

### Hàm di chuyển lần thứ 2

 ```sh
 void mazeTurn (char dir) 
{
  switch(dir)
  {
    case 'L': // Turn Left
       goAndTurn (LEFT, 90);      
       break;   
    
    case 'R': // Turn Right
       goAndTurn (RIGHT, 90);     
       break;   
       
    case 'B': // Turn Back
       goAndTurn (RIGHT, 800);     
       break;   
       
    case 'S': // Go Straight
       runExtraInch(); 
       break;
   }
 }
```
