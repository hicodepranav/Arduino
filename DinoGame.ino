#include <Servo.h>
#define threshold 300
#define unpress_angle 90
#define press_angle 125
Servo myservo;
bool trig=true;
int input_val=0;

void setup() {
myservo.attach(9);
myservo.write(unpress_angle);  

}

void loop() {
  myservo.write(unpress_angle);
  delay(1);
  if(analogRead(A0)<threshold)
  {
    myservo.write(press_angle);
    delay(100);
  }
  input_val = analogRead(A0);
  Serial.print("LDR Value is: ");
  Serial.println(input_val);

}
