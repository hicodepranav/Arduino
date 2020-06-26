int PIR= 7;
int led= 13;

void setup() {
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  int sensor=digitalRead(PIR);
  if(sensor==1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }

}
