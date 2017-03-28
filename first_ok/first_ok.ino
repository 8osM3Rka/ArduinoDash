int jumptrig;
#include <LedControl.h>
#include "openBall.h"
#include "openJump.h"

  void setup() {
  Serial.begin(9600);

  lc.clearDisplay(0);
  lc.setIntensity(0, 8);
  lc.shutdown(0, false);
 
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
void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available())
  {
    jumptrig = Serial.read();
    if (jumptrig == '1'&currentGravity == 1){
      jump();
    
    }  
    
    }      
  if (Serial.available())
  {
    jumptrig = Serial.read();
    if (jumptrig == '3'&currentGravity == 1){
      gravityChange(); 
      currentGravity = 0;
    }
    else if (jumptrig == '3'&currentGravity == 0){
      gravityChange(); 
      currentGravity = 1;
    }
  
  }
} 


