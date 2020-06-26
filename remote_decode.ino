#include <IRremote.h>

int IRpin=11;
IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop()
{
  if(irrecv.decode(&results))
  {
    Serial.println(results.value, DEC);
    irrecv.resume();
  }
}//2160019894
//2160052534
