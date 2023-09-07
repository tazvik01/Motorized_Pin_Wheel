// Define a variable to store the switch state (LOW or HIGH)
int switchstate = 0;

// Define constants for pin numbers
const int switch_1 = 2;   // Pin connected to the switch
const int motorPin = 9;   // Pin connected to the motor control

void setup() {
  // Setup code to run once when the Arduino starts

  pinMode(switch_1, INPUT); // Set the switch pin as an input
  pinMode(motorPin, OUTPUT); // Set the motor pin as an output
}

void loop() {
  // Main code to run repeatedly

  // Read the state of the switch and store it in the switchstate variable
  switchstate = digitalRead(switch_1);

  // Check if the switch state is HIGH (meaning it's pressed)
  if (switchstate == HIGH) {
    digitalWrite(motorPin, HIGH); // Turn on the motor (set motorPin to HIGH)
  } else {
    digitalWrite(motorPin, LOW); // Turn off the motor (set motorPin to LOW)
  }
}
