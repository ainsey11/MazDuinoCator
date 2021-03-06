#include "NonVolatile.h"
#include "EEPROMSave.h"
#include "testLED.h"
#include "ShiftRegister74HC595.h"


NonVolatile<int> Mode; //Actual counter variable and EEPROM 0-1
int ModeUpPin = 11; //Pin goes HIGH to increase mode
int ModeDownPin = 12; //Pin goes HIGH to decrease mode

//For ref only
//Pin connected to ST_CP of 74HC595
//int latchPin = 3;
//Pin connected to SH_CP of 74HC595
//int clockPin = 4;
////Pin connected to DS of 74HC595
//int dataPin = 2;

ShiftRegister74HC595 sr (1, 2, 4, 3); 

void setup() {
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
      //EEPROMSAVE();
    }
    
  digitalRead(ModeDownPin);
  if(ModeDownPin == HIGH)
    {
      Mode - 1; 
     // EEPROMSAVE();
    }
    
  //digitalRead(LeftIndicatorPin);
  //if (LeftIndicatorPin == HIGH)
  //{
    if (Mode = 1)
    {
      uint8_t pinValueM1ON[] = { B10000000 }; 
      sr.setAll(pinValueM1ON);
      delay(1000);
      uint8_t pinValueM1OFF[] = { B00000000 }; 
      sr.setAll(pinValueM1OFF);
      delay(1000);    
    }
    if (Mode = 2)
    {
      uint8_t pinValueM1ON[] = { B01000000 }; 
      sr.setAll(pinValueM1ON);
      delay(1000);
      uint8_t pinValueM1OFF[] = { B00000000 }; 
      sr.setAll(pinValueM1OFF);
      delay(1000); 
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
  //}
  
  /*digitalRead(RightIndicatorPin);
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
  }*/
}
//Notes
// https://github.com/pkarsy/NonVolatile - for persistant mode selection storage maybe?
