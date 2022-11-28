/*
Don't forget editing "User_Setup.h" in the TFT_eSPI.h library.
My Instagram https://www.instagram.com/tellurnoid/
*/


#include "SPI.h"
#include "TFT_eSPI.h"
#define TFT_GREY 0x7BEF
TFT_eSPI myGLCD = TFT_eSPI();       // Invoke custom library
void setup()
{
  myGLCD.init();
  myGLCD.setRotation(1);
  myGLCD.fillScreen(TFT_BLACK);
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
void loop(){
  int buf[318];
  myGLCD.fillScreen(TFT_DARKGREY);
  //myGLCD.fillRect(0, 0, 160, 70,TFT_DARKGREY);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.setTextColor(TFT_BLUE,TFT_DARKGREY);
  myGLCD.drawCentreString("y=1/2*x+50", 65, 9,4);
  for(int x=0; x<240; x++){
  myGLCD.drawPixel(x,1/2*x+50,TFT_CYAN);
  delay(10);
  }

  delay(1000);
  myGLCD.fillScreen(TFT_DARKGREY);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.setTextColor(TFT_BLUE,TFT_DARKGREY);
  myGLCD.drawCentreString("y=2*x+50", 65, 10,4);
  for(int x=0; x<140; x++){
  myGLCD.drawPixel(x,2*x+50,TFT_CYAN);
  delay(10);
  }

  delay(1000);
  myGLCD.fillScreen(TFT_DARKGREY);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.setTextColor(TFT_BLUE,TFT_DARKGREY);
  myGLCD.drawCentreString("y=x/2+50", 65, 10,4);
  for(int x=0; x<350; x++){
  myGLCD.drawPixel(x,x/2+50,TFT_CYAN);
  delay(10);
  }

  delay(1000);
  myGLCD.fillScreen(TFT_DARKGREY);
  myGLCD.setTextDatum(TC_DATUM);
  myGLCD.setTextColor(TFT_BLUE,TFT_DARKGREY);
  myGLCD.drawCentreString("y=x^2", 65, 10,4);
  for(int x=0; x<50; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+50,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+100,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+150,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+200,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+250,y,TFT_GREEN);
  delay(20);
  }
  for(int x=0; x<70; x++){
  y = pow(x,2);
  myGLCD.drawPixel(x+300,y,TFT_GREEN);
  delay(20);
  }
delay(1000);
}
