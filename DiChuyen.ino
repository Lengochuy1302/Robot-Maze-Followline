void dungMotor()
{
    Motor_Right_Stop();
    Motor_Left_Stop(); 
}

void diChuyenThang(){
     Motor_Right_Forward(tocDoCongCo+2);
     Motor_Left_Forward(tocDoCongCo); 
}

void diChuyenLui(){
     Motor_Right_Backward(tocDoCongCo+2);
     Motor_Left_Backward(tocDoCongCo); 
}

void quayTrai()
{
   diChuyenThang();
   delay(400);
   
   Motor_Right_Forward(90);
   Motor_Left_Backward(90);
   delay(280);//320
   docSensor();
   while((mode != FOLLOWING_LINE || error ==1))
    {
       Motor_Right_Backward(90);
       Motor_Left_Forward(90);
       delay(2);
       docSensor();
    }
    dungMotor();
    delay(200);
}

void quayPhai()
{
  diChuyenThang();
  delay(400);
    
  Motor_Right_Backward(90);
  Motor_Left_Forward(90);
  delay(280);//320
    
  while((mode != FOLLOWING_LINE || error ==-1))
    {
       Motor_Right_Forward(90);
       Motor_Left_Backward(90);
       delay(2);
       docSensor();
    }  
    dungMotor();
    delay(200);
}

void quayDauXe(){
    diChuyenThang();
    delay(400);//330
    Motor_Right_Backward(100);
    Motor_Left_Forward(90);
    delay(480); // quay 90do 480
    while((mode != FOLLOWING_LINE || error ==-1))
    {
       Motor_Right_Forward(90);
       Motor_Left_Backward(90);
       delay(2);
       docSensor();
    }  
    dungMotor();
    delay(200);
}

void  PIDDiChuyenCui()
{
  if(mode == FOLLOWING_LINE)
  {   
        if(error == 0)  // giua line chay thang lech 0
        {
           diChuyenThang(); 
        }
        
        if ( error == 1) // loi 1
        {
           Motor_Left_Forward(40);
           Motor_Right_Forward(42);
        }
        
        if (error == -1) // loi -1
        {
           Motor_Left_Forward(42);
           Motor_Right_Forward(40);
        }
          
        if ( error == 2) // loi 2
        {
           Motor_Left_Forward(40);
           Motor_Right_Forward(44); 
        }
        if (error == -2) // loi -2
        {
           Motor_Left_Forward(44);
           Motor_Right_Forward(40); 
        }

        if ( error == 3) // loi 3
        {
           Motor_Left_Stop();
           Motor_Right_Forward(50); 
        }
        if (error == -3) // loi -3
        {
           Motor_Left_Forward(50);
           Motor_Right_Stop();
        }
          
        if ( error == 4) // loi 4
        {
           Motor_Left_Backward(40);
           Motor_Right_Forward(40);
        }
        if (error == -4) // loi -4
        {
           Motor_Left_Forward(40);
           Motor_Right_Backward(40);
        }
                 
  }
}
