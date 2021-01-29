const int trigpin = 4;
const int echopin = 5;
//#define led 13;
long duration;
float distance, p_distance=20;

void setup()
{
  pinMode(10,OUTPUT);
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
  if(distance<10&&p_distance>10)
  {
    digitalWrite(10,LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(10,HIGH);
  }
  p_distance=distance;
}
