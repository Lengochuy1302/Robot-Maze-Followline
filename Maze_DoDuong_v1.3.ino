#include "KhaiBaoBien.h"

void setup() {
  setupMotor() ;
  Serial.begin(9600);
  
}

void loop() {
 if(chayXong ==false)
  {
   docSensor();
   PIDDiChuyenCui();
   chayLanThuNhat();
  }
   if(chayXong ==true)
   {
    docSensor();
    PIDDiChuyenCui();
    chayLanThuHai();
   }
}
