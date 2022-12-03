/*
Don't forget editing "User_Setup.h" and "User_Setup_Select.h" in the TFT_eSPI.h library.
↑If you can't know how to edit it, use them in this solusion folder.(You should make a backup.)
Now, I'm using ESP32 DevModule and ili9341.
<MY SNS>
Instagram https://www.instagram.com/tellurnoid/
Blog      https://tellurnoidblog.fc2.net/
Youtube   https://www.youtube.com/@user-ln5rf7zu2o
*/
#include "SPI.h"
#include "TFT_eSPI.h"
#include "xbm.h"   
#define TFT_GREY 0x7BEF

TFT_eSPI myGLCD = TFT_eSPI();       // Invoke custom library

void setup(){
  myGLCD.init();
  myGLCD.setRotation(3);
  myGLCD.fillScreen(TFT_WHITE);
  myGLCD.drawXBitmap(0, 0, logo, logoWidth, logoHeight, TFT_BLACK);
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.fillRoundRect(80, 70, 239-80,169-70, 3,TFT_DARKGREY);
  myGLCD.setTextColor(TFT_WHITE,TFT_DARKGREY);
  myGLCD.drawCentreString("Tellurnoid", 160, 93,2);
  myGLCD.drawCentreString("Let's see functions!", 160, 119,2);
  delay(1500);
}

int y;
int radius = 1;
void loop(){
  int buf[318];
  SetMap();
  myGLCD.drawCentreString("y=-2*x", 60, 10,4);
  for(int x=0; x<140; x++){
   y=2*x;
   myGLCD.fillCircle(x+160,y+120,radius,TFT_GREEN);
   myGLCD.fillCircle(160-x,120-y,radius,TFT_GREEN);
   delay(10);
   }
  delay(1000);
  
  SetMap();
  myGLCD.drawCentreString("y=-x^2", 60, 10,4);
  for(int x=0; x<50; x++){
   y = pow(x,2);
   myGLCD.fillCircle(x+160,y+120,radius,TFT_GREEN);
   myGLCD.fillCircle(160-x,120-y,radius,TFT_GREEN);
   delay(20);
   }
  delay(1000);
}

void SetMap(){
  myGLCD.fillScreen(TFT_BLACK);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.setTextColor(TFT_WHITE,TFT_BLACK);
  myGLCD.drawLine(0, 119, 320, 119,TFT_DARKGREEN);
  myGLCD.drawLine(0, 120, 320, 120,TFT_DARKGREEN);
  myGLCD.drawLine(0, 121, 320, 121,TFT_DARKGREEN);

  myGLCD.drawLine(159, 0, 159, 240,TFT_DARKGREEN);
  myGLCD.drawLine(160, 0, 160, 240,TFT_DARKGREEN);
  myGLCD.drawLine(161, 0, 161, 240,TFT_DARKGREEN);

for(int i=0; i<12; i++){myGLCD.drawLine(0, i*20, 320, i*20,TFT_DARKGREEN);}
                        myGLCD.drawLine(0, 239, 320, 239,TFT_DARKGREEN);
for(int i=0; i<16; i++){myGLCD.drawLine(i*20, 0, i*20, 240,TFT_DARKGREEN);}
                        myGLCD.drawLine(319, 0, 319, 240,TFT_DARKGREEN);
}


