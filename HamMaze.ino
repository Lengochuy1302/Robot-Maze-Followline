void chayLanThuNhat(){
  
  if(mode != FOLLOWING_LINE)
  {
    dungMotor();
    delay(200);
    diChuyenThang();
    delay(50);
    docSensor();
    
  }
  
  if(mode == CONT_LINE )  // Chu T hoac Cross Hoac Dead End
      {
         diChuyenThang();delay(200);dungMotor();delay(250);
         docSensor();
         if (mode == CONT_LINE){  // DIEM DUNG VACH KET THUC (Dead End)
            toiUuMang();
            dungMotor();delay(8000);chayXong = true;
            // TOI UU HOA DUONG DI CHUYEN. 
         }
         else if (mode == FOLLOWING_LINE ) {// Cross di chuyen trai
            diChuyenLui();delay(250);quayTrai();
            chayLan1= chayLan1 + "L";
         }
         else if (mode == NO_LINE ) // Chu T di chuyen trai
         {
          diChuyenLui();delay(250);quayTrai();
            chayLan1= chayLan1 + "L";
         }
      }
      else if(mode == RIGHT_TURN){ // phat hien Only Right hoac right or straight
         diChuyenThang();delay(250);dungMotor();delay(250);
         docSensor();         
         if(mode == NO_LINE)  // Only Right chay right
         {
            diChuyenLui();delay(250);quayPhai();
            chayLan1= chayLan1 + "R";
         }
         else{   // phat hien line (right or straight ) chay straight
           diChuyenThang();
           chayLan1= chayLan1 + "S";  
         }
      }
      else if(mode == LEFT_TURN ){ // phat hien Only Left hoac Left or Straight
           diChuyenThang();delay(250);dungMotor();delay(250);
           docSensor();
           if(mode == NO_LINE)  // Only Left chay Left
           {
              diChuyenLui();delay(250);quayTrai();
              chayLan1= chayLan1 + "L";
           }
            else{   // phat hien line ( Left or Straight ) chay Left
             diChuyenLui();delay(250);quayTrai();
             chayLan1= chayLan1 + "L"; 
           }
         }
      else if(mode == NO_LINE){
         quayDauXe();
         chayLan1= chayLan1 + "B";
      }
}



void chayLanThuHai(){
     if(mode != FOLLOWING_LINE)
     {
      docSensor();
      if(duongChay[j] == 'L'){
        quayTrai(); j++;return;}
       if(duongChay[j] == 'R'){
        quayPhai();j++;return;}
       if(duongChay[j] == 'B'){
        quayDauXe();j++;return;}
       if(duongChay[j] == 'S'){
        diChuyenThang();delay(300);j++;return;}
       if(j == duongChay.length()){
        dungMotor();delay(10000);}
     }
}

void toiUuMang(){
  chayLan2 = chayLan1;
  pathLength = chayLan2.length();

  for (int a = 0, b = 1, c = 2; c <= pathLength;)
  {
    mangTam = "";
    mangTam = chayLan2[a];
    mangTam = mangTam + chayLan2[b] + chayLan2[c];
    if (toiUu(mangTam) == true)// co xay ra toi uu
    {
      chayLan2[a] = mangTam[0];
      pathLength -= 2;
      for (int n = b; n < pathLength; n++)
      {
        chayLan2[n] = chayLan2[n + 2];
      }
      if (a >= 2)
      {
        a -= 2; b -= 2; c -= 2;
      }
      else if (a == 1){
        a--; b--; c--;
      }
    }
    else{
      a++; b++; c++;
    }
  }
  
  for (int i = 0; i < pathLength; i++)
  {
    duongChay = duongChay + chayLan2[i];
  }
}

bool toiUu(String chuoikt)
{
  if (chuoikt == "LBR"){
    mangTam = "B";return true;
  }
  else
  if (chuoikt == "LBS"){
    mangTam = "R";return true;
  }
  else
  if (chuoikt == "RBL"){
    mangTam = "B";return true;
  }
  else
  if (chuoikt == "SBL"){
    mangTam = "R";return true;
  }
  else
  if (chuoikt == "SBS"){
    mangTam = "B";return true;
  }
  else
  if (chuoikt == "LBL"){
    mangTam = "S";return true;
  }
  return false;
}



