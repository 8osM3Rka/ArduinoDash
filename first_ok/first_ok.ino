int jumptrig;
#include <LedControl.h>
LedControl lc = LedControl(12,11,10,4);
byte s[8]{  //тут двумерные массивы с информацией для матриц
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00111100,
  B00111100,
  B00111100 
  };
byte a[8]{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00111100,
  B00111100,
  B00111100,
  B00000000
  };
byte n[8]{
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  };
  byte s1[8]{
  B00000000,
  B00000000,
  B00111110,
  B01000000,
  B00111100,
  B00000010,
  B00000010,
  B01111100 
  };  
  void setup() {
Serial.begin(9600);

 lc.clearDisplay(0);
 lc.setIntensity(0, 8);
 lc.shutdown(0, false);//инициализируем дисплеи
 
 lc.clearDisplay(1);
 lc.setIntensity(1, 8);
 lc.shutdown(1, false);
 
 lc.clearDisplay(2);
 lc.setIntensity(2, 8);
 lc.shutdown(2, false);
 
 lc.clearDisplay(3);
 lc.setIntensity(3, 8);
 lc.shutdown(3, false);
 lc.setColumn(0,7,s[0]);
 lc.setColumn(0,6,s[1]);
 lc.setColumn(0,5,s[2]);
 lc.setColumn(0,4,s[3]);
 lc.setColumn(0,3,s[4]);
 lc.setColumn(0,2,s[5]);
 lc.setColumn(0,1,s[6]);
 lc.setColumn(0,0,s[7]);
 delay(100);



}
void jump(){ //процедура прыжка
  lc.setColumn(0,7,s[0]);
 lc.setColumn(0,6,s[1]);
 lc.setColumn(0,5,s[2]);
 lc.setColumn(0,4,s[3]);
 lc.setColumn(0,3,s[4]);
 lc.setColumn(0,2,s[5]);
 lc.setColumn(0,1,s[6]);
 lc.setColumn(0,0,s[7]);
 delay(50);
 lc.clearDisplay(0);
 lc.setColumn(0,7,a[0]);
 lc.setColumn(0,6,a[1]);
 lc.setColumn(0,5,a[2]);
 lc.setColumn(0,4,a[3]);
 lc.setColumn(0,3,a[4]);
 lc.setColumn(0,2,a[5]);
 lc.setColumn(0,1,a[6]);
 lc.setColumn(0,0,a[7]);
 delay(50);
 lc.clearDisplay(0);
 lc.setColumn(0,7,n[0]);
 lc.setColumn(0,6,n[1]);
 lc.setColumn(0,5,n[2]);
 lc.setColumn(0,4,n[3]);
 lc.setColumn(0,3,n[4]);
 lc.setColumn(0,2,n[5]);
 lc.setColumn(0,1,n[6]);
 lc.setColumn(0,0,n[7]);
 delay(50);
 lc.clearDisplay(0);
 lc.setColumn(0,7,a[0]);
 lc.setColumn(0,6,a[1]);
 lc.setColumn(0,5,a[2]);
 lc.setColumn(0,4,a[3]);
 lc.setColumn(0,3,a[4]);
 lc.setColumn(0,2,a[5]);
 lc.setColumn(0,1,a[6]);
 lc.setColumn(0,0,a[7]);
 delay(50);
 lc.clearDisplay(0);
 lc.setColumn(0,7,s[0]);
 lc.setColumn(0,6,s[1]);
 lc.setColumn(0,5,s[2]);
 lc.setColumn(0,4,s[3]);
 lc.setColumn(0,3,s[4]);
 lc.setColumn(0,2,s[5]);
 lc.setColumn(0,1,s[6]);
 lc.setColumn(0,0,s[7]);
 delay(50);
 loop();
  }
void loop() {
  
 if (Serial.available())
  {
    jumptrig = Serial.read();    //проверяем нажата ли кнопка
    if (jumptrig == '1')
    {
      jump();
    }
   }
  }


