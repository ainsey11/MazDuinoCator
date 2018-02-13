void setup() {
  // initialize pins as output
  pinMode(LED_BUILTIN, OUTPUT); //Sets onboard LED as output (handy for testing)
  int inMin = 5; //Lowest output pin
  int inMax = 12 // Highest output pin
  for(int i=inMin; i<=inMax; i++)
  {
    pinMode(i, INPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
}


