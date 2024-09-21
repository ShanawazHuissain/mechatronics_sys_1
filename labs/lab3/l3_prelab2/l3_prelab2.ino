// Define the analog input pins and the digital output pin
#define D_IN1 2  // First digital input pin
#define D_IN2 3  // Second digital input pin
#define D_OUT 4  // Digital output pin

void setup() {
  // Set output mode
  pinMode(D_OUT, OUTPUT);
  pinMode(D_IN1, INPUT);
  pinMode(D_IN2, INPUT);
}

void loop() {
  // Read the analog input values and use boolean operators to generate digital output
  digitalWrite(D_OUT, !(digitalRead(D_IN1)||digitalRead(D_IN2)));
}
