
int ledPin = 16; // LED connected to digital pin 16
int led2 = 12;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 400;
const long interval2 = 800;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW)
      ledState = HIGH;  // Note that this switches the LED *off*
    else
      ledState = LOW;   // Note that this switches the LED *on*
    digitalWrite(ledPin, ledState);
  }
  if(currentMillis - ledPin >= interval2) {
    ledPin = currentMillis;
    if (ledState == LOW)
      ledState = HIGH;  // Note that this switches the LED *off*
    else
      ledState = LOW;   // Note that this switches the LED *on*
    digitalWrite(led2, ledState);
    }
}
