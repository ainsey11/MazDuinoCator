int counter = 0;
int ModeUpPin = 1; //Pin goes HIGH to increase mode
int ModeDownPin = 2; //Pin goes LOW to decrease mode
int Mode; //Actual counter variable
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

// Mode select section




// the loop function runs over and over again forever
void loop() {
}

//Notes
// https://github.com/pkarsy/NonVolatile - for persistant mode selection storage maybe?
