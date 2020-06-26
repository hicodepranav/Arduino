#include <IRremote.h>

int IRpin=11;
IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
void loop()
{
  if(irrecv.decode(&results))
  {
    Serial.println(results.value, DEC);
    switch(results.value)
    {
      case 2164246583:
      digitalWrite(6,LOW);
      break;
      case 2164218023:
      digitalWrite(6,HIGH);
      break;
    }
    irrecv.resume();
  }
  
}
