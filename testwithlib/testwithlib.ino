/*
  ShiftRegister74HC595.h - Library for easy control of the 74HC595 shift register.
  Created by Timo Denk (www.simsso.de), Nov 2014.
  Additional information are available on http://shiftregister.simsso.de/
  Released into the public domain.
*/

#include "ShiftRegister74HC595.h"

// create shift register object (number of shift registers, data pin, clock pin, latch pin)
ShiftRegister74HC595 sr (1, 2, 4, 3); 
 
void setup() { 
}

void loop() {

  //sr.setAllHigh(); // set all pins HIGH
  //delay(500);
  
  sr.setAllLow(); // set all pins LOW
 // delay(500); 
  
  
 // for (int i = 0; i < 8; i++) {
    
   // sr.set(i, HIGH); // set single pin HIGH
    //delay(250); 
  //}
  
  
  // set all pins at once
  //uint8_t pinValues[] = { B10101010 }; 
  //sr.setAll(pinValues); 
  //delay(1000);
  //uint8_t pinValues2[] = { B01010101 }; 
  //sr.setAll(pinValues2); 
  //delay(1000);

  uint8_t pinValue3[] = { B11110000 }; 
  sr.setAll(pinValue3); 
  delay(1000);

  uint8_t pinValues4[] = { B00001111 }; 
  sr.setAll(pinValues4); 
  delay(1000);
  
  
  // read pin (zero based)
//  uint8_t stateOfPin5 = sr.get(5);
  
}
