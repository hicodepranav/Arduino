void setup() {
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
}

void loop() {
  if(Serial.available()>0)
  {
    int data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1')
    {
    
     digitalWrite(6, LOW);

    
      
      
    }
    else if(data=='2')
    {
      digitalWrite(6, HIGH);
    }
        else if(data=='3')
    {
      digitalWrite(7, LOW);
    }
        else if(data=='4')
    {
      digitalWrite(7, HIGH);
    }
  }

}
