byte led1 = 16;
byte led2 = 12;
int  led3 = 05;
unsigned long time1 = 0;
unsigned long time2 = 0;
unsigned long time3 = 0;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}
void loop()
{
   if ( digitalRead(led1) == LOW )
   {
        digitalWrite(led1, HIGH);
   } else {
        digitalWrite(led1, LOW );
   }
   delay (200); 
   
   if ( digitalRead(led2) == LOW )
   {
        digitalWrite(led2, HIGH);
   } else {
        digitalWrite(led2, LOW );
   }
   delay (200);

    if ( digitalRead(led3) == LOW )
   {
        digitalWrite(led3, HIGH);
   } else {
        digitalWrite(led3, LOW );
   }
   delay (300);
}
