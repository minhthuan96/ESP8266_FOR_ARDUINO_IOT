
#include "SSD1306.h"

int InputPin = 12;   //using digital pin12 as input
int ledPin = 16;     //using digital pin 16 as input
bool Pin_Status = LOW;
bool PIR_State = LOW; //LOW = no motion, HIGH = motion

SSD1306  display(0x3c, 4, 5);

void setup()
{
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
  display.drawString(15, 20, "IotMaker.VN");
  display.display();
//  delay(200);

  pinMode(InputPin, INPUT);  //input declaration
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}
void loop()
{
  Pin_Status = digitalRead(InputPin);
  if (Pin_Status == HIGH)
  {
    if (PIR_State == LOW)
    {
      display.clear();
      display.setFont(ArialMT_Plain_16);
      display.drawString(20, 20, "Chuyen Dong"); // x= 30 toa do x, y = 20 toa do y
      display.display();
      digitalWrite(ledPin, LOW);
      PIR_State = HIGH;
    }
  }
  else
  {
    if (PIR_State == HIGH)
    {
      display.clear();
      display.setFont(ArialMT_Plain_16);
      display.drawString(30, 20, "Not Motion"); // x= 10 toa do x, y = 20 toa do y
      display.display();
      digitalWrite(ledPin, HIGH);
      PIR_State = LOW;
    }
  }
}
