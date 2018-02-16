#include "NonVolatile.h"
#include "EEPROMSave.h"
#include "testLED.h"


NonVolatile<int> Mode; //Actual counter variable and EEPROM 0-1
int ModeUpPin = 1; //Pin goes HIGH to increase mode
int ModeDownPin = 2; //Pin goes LOW to decrease mode
int LeftIndicatorPin = 3; // Pin goes HIGH to trigger left indicator sequence
int RightIndicatorPin = 4; // Pin goes HIGH to trigger right indicator sequence
int RightLatchPin = 5; // connect to ST_CP of R SR
int RightClockPin = 6; // connect to SH_CP of R SR
int RightDataPin = 7; // connect to DS of R SR
int LeftLatchPin = 5; // connect to ST_CP of L SR
int LeftClockPin = 6; // connect to SH_CP of L SR
int LeftDataPin = 7; // connect to DS of L SR


//Pin connected to ST_CP of 74HC595
//int latchPin = 3;
//Pin connected to SH_CP of 74HC595
//int clockPin = 4;
////Pin connected to DS of 74HC595
//int dataPin = 2;



void setup() {
  pinMode(RightLatchPin, OUTPUT);
  pinMode(RightClockPin, OUTPUT);
  pinMode(RightDataPin, OUTPUT);
  pinMode(LeftLatchPin, OUTPUT);
  pinMode(LeftClockPin, OUTPUT);
  pinMode(LeftDataPin, OUTPUT);
  pinMode(ModeUpPin, INPUT);
  pinMode(ModeDownPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  testLED(); // Tests onboard LED
  
  digitalRead(ModeUpPin);
  if(ModeUpPin == HIGH)
    {
      Mode + 1;
      EEPROMSAVE();
    }
    
  digitalRead(ModeDownPin);
  if(ModeDownPin == HIGH)
    {
      Mode - 1; 
      EEPROMSAVE();
    }
    
  digitalRead(LeftIndicatorPin);
  if (LeftIndicatorPin == HIGH)
  {
    if (Mode = 1)
    {
    }
    if (Mode = 2)
    {
    }
    if (Mode = 3)
    {
    }
    if (Mode = 4)
    {
    }
    if (Mode = 5)
    {
    }
  }
  
  digitalRead(RightIndicatorPin);
  if (RightIndicatorPin == HIGH)
  {
    if (Mode = 1)
    {
    }
    if (Mode = 2)
    {
    }
    if (Mode = 3)
    {
    }
    if (Mode = 4)
    {
    }
    if (Mode = 5)
    {
    }
  }
}
//Notes
// https://github.com/pkarsy/NonVolatile - for persistant mode selection storage maybe?
