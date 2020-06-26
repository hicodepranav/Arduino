const int trigpin = 4;
const int echopin = 5;
#define led 13;
long duration;
float distance;
void setup()
{
  pinMode(13,OUTPUT);
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
  if(distance<10)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
