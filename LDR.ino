const int LDR = A0;
int input_val = 0;

void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  input_val = analogRead(LDR);
  Serial.print("LDR Value is: ");
  Serial.println(input_val);
  delay(100);
  if(input_val<100)
  {
    digitalWrite(13,HIGH);
  } 
  else
  {
    digitalWrite(13,LOW);
  }
  
}
