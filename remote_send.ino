#include <IRremote.h>

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
 delay(5000);
  //Volume Up//
  for (int i = 0; i < 5; i++) {
    irsend.sendNEC(2160048964 , 32); //Volume Up Code
    Serial.println("Volume Up");
    delay(250);
  }
  delay(3000);
  //Volume Down//
  for (int i = 0; i < 5; i++) {
    irsend.sendNEC(2160013774, 32); //Volume Down Code
    Serial.println("Volume Down");
    delay(250);
  }
  delay(2000);
  irsend.sendNEC(2160060694, 32); //back
  Serial.println("back");
  delay(2000);

  irsend.sendNEC(2160007654, 32); //forward
  Serial.println("forward");
  

  
}

//panasonic tv
