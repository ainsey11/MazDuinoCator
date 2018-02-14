#include "EEPROMSAVE.h"
#include "Arduino.h"
#include "NonVolatile.h"

NonVolatile<int> elevation[10]; // Uses addresses 3-22
void EEPROMSAVE(void)
{
  elevation[5]=100; // Immediatelly writen to EEPROM
  elevation[5]=100; // The changes are NOT saved again to reduce EEPROM wear
  Serial.print(elevation[5]++);   // postfix
  Serial.print(++elevation[5]);   // prefix
  for (int i=0;i<10;i++) elevation[i]=0;
}
