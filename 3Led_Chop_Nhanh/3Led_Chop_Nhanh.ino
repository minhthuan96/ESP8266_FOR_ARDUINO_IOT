
int led = 16;
int led2 = 12;
int led3 = 05;
void setup() {
  pinMode(led, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, LOW);  
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);                      // Wait for a second
  digitalWrite(led, HIGH);        // Turn the LED off by making the voltage HIGH
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(500);                     // Wait for two seconds (to demonstrate the active low LED)
}

