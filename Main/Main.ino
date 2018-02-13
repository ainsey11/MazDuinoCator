int Mode = 1; //Actual counter variable
int ModeUpPin = 1; //Pin goes HIGH to increase mode
int ModeDownPin = 2; //Pin goes LOW to decrease mode

int LeftIndicatorPin = 3; // Pin goes HIGH to trigger left indicator sequence
int RightIndicatorPin = 4; // Pin goes HIGH to trigger right indicator sequence
int LEDPins[] = { 5, 6, 7, 8, 9, 10, 11, 12}; // Pins to use to drive LED circuits

void setup() {
  pinMode (ModeUpPin, INPUT);
  pinMode (ModeDownPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT); //Sets onboard LED as output (handy for testing)
  
  for(int i=0;i<8;i++) // 8 used here as 8 pins in the array
  {
    pinMode(LEDPins[i], OUTPUT); //declaring LED's as outputs
  }
}

// the loop function runs over and over again forever
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
    }
  digitalRead(ModeDownPin);
  if(ModeDownPin == HIGH)
    {
      Mode -1; 
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
