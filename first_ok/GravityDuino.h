#include <LedControl.h>
int currentGravity = 1;
LedControl lc = LedControl(12,11,10,4);
byte s2[8]{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00111100,
  B00111100,
  B00111100
  };
  byte s1[8]{
  B00111100,
  B00111100,
  B00111100,
  B00111100,
  B00000000,
  B00000000,
  B00000000,
  B00000000
  };
void gravityChange(){
  if(currentGravity == 1){
    lc.setColumn(0,7,s1[0]);
    lc.setColumn(0,6,s1[1]);
    lc.setColumn(0,5,s1[2]);
    lc.setColumn(0,4,s1[3]);
    lc.setColumn(0,3,s1[4]);
    lc.setColumn(0,2,s1[5]);
    lc.setColumn(0,1,s1[6]);
    lc.setColumn(0,0,s1[7]);
    }
  if(currentGravity == 0){
    lc.setColumn(0,7,s2[0]);
    lc.setColumn(0,6,s2[1]);
    lc.setColumn(0,5,s2[2]);
    lc.setColumn(0,4,s2[3]);
    lc.setColumn(0,3,s2[4]);
    lc.setColumn(0,2,s2[5]);
    lc.setColumn(0,1,s2[6]);
    lc.setColumn(0,0,s2[7]); 
    }
}

