#include<Servo.h>
Servo servo_3;
Servo servo_6;
Servo servo_9;
const int trigpin = 4;
const int echopin = 5;
//#define led 13;
long duration;
float distance;
volatile long A;
void setup()
{
  A=0;
  servo_3.attach(3);
  servo_6.attach(6);
  servo_9.attach(9);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(4, LOW);
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);
  duration=pulseIn(echopin, HIGH);
  distance=duration*0.034/2;
  Serial.print("distance:");
  Serial.print(distance);
  Serial.print("\n");
  delay(100);
  if (distance < 20) {
A = random(0, 4);
switch (A) {
case 1:
servo_3.write(179);
delay(1000);
servo_3.write(90);
delay(500);
break;
case 2:
servo_6.write(179);
delay(1000);
servo_6.write(90);
delay(500);
break;
case 3:
servo_9.write(179);
delay(1000);
servo_9.write(90);
delay(500);
break;
}

}
}
