#include "testLED.h"
#include "Arduino.h"

void testLED(void)
  {
     digitalWrite(LED_BUILTIN, HIGH);
     delay(500);
     digitalWrite(LED_BUILTIN, LOW);
     delay(500);
  }

