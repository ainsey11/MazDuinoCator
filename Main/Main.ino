#include "NonVolatile.h"


NonVolatile<int> Mode; //Actual counter variable and EEPROM 0-1
NonVolatile<int> elevation[10]; // Uses addresses 3-22

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
  // this is just to show that the arduino is running the code properly, will probably remove because a 1 second delay in the main loop is bad juju
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);

  // do the counter button variable magic, this won't be persistant until I've done the eeprom trick below
  digitalRead(ModeUpPin);
  if(ModeUpPin == HIGH)
    {
      Mode + 1;
      elevation[5]=100; // Immediatelly writen to EEPROM
      elevation[5]=100; // The changes are NOT saved again to reduce EEPROM wear
      Serial.print(elevation[5]++);   // postfix
      Serial.print(++elevation[5]);   // prefix
      for (int i=0;i<10;i++) elevation[i]=0;
    }
  digitalRead(ModeDownPin);
  if(ModeDownPin == HIGH)
    {
      Mode - 1; 
      elevation[5]=100; // Immediatelly writen to EEPROM
      elevation[5]=100; // The changes are NOT saved again to reduce EEPROM wear
      Serial.print(elevation[5]++);   // postfix
      Serial.print(++elevation[5]);   // prefix
      for (int i=0;i<10;i++) elevation[i]=0;
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
