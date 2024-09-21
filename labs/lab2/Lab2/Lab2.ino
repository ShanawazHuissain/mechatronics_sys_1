// setup global macros as per lab2 instructions:
#define LED_PIN 12 
#define ON_TIME 500 // in milliseconds
#define OFF_TIME 1500 // in milliseconds

// the setup function runs once when the board is reset or powered
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs repeatedly forever
void loop() {
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(ON_TIME);    // wait for ON_TIME in ms
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(OFF_TIME);   // wait for OFF_TIME in ms
}