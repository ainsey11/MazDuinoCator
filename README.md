# MazDuinoCator

This is one of Ainsey11's wonderous projects, using arduino nano's to control mazda indicators in a pattern.

## Features
- Mode select buttons 
- Press the up button to increase the mode value by one
- Press the down button to decrease the mode value by one
- Holding either button down will increase the mode value rapidly

- 5 modes (Until I create more)
- Persistant mode storage

## Notes
This is designed and built for an MX5 MK2, however it can be adapted for any mazda, or any car in fact. It will take an ON/OFF feed from the indicator bulb (the circtuitry allows for the OFF cycle via an RC parallel network and a 10uf cap) . The maths has been done using a 1hz indicator speed. You may need to adjust resistors or caps dependant on your car indicator speeds. 

It is also just essentially driving 2 LED rings via shift registers and octal transistor arrays, so as long as you can fit it into your car, it'll work.

## Drawbacks
due to EEPROM maximum writes, the mode can only be changed 100,000 times, I know this sounds like a high amount, but I want to make people aware that it is a limitation. If this limit is reached, it is pretty much fatal for the arduino. the limit can be bypassed by storing the value on an SD card that is added as a module, however this increases cost quite dramatrically and I don't see the 100K limit being hit within the lifetime of other components. If people run into issues, I will re-investigate the issue.