void setup() {
Serial.begin(9600);
pinMode(6,OUTPUT); //relay 1 connected to D6
pinMode(7,OUTPUT); //relay 2 connected to D7
digitalWrite(6,HIGH); //initially relay 1 is OFF
digitalWrite(7,HIGH); //initially relay 2 is OFF
}

void loop() {
  if(Serial.available()>0)
  {
    int data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1')
    {
    
     digitalWrite(6, LOW);//relay 1 turns ON

    
      
      
    }
    else if(data=='2')
    {
      digitalWrite(6, HIGH); //relay 1 turns OFF
    }
        else if(data=='3')
    {
      digitalWrite(7, LOW); //relay 2 turns ON
    }
        else if(data=='4')
    {
      digitalWrite(7, HIGH); //relay 2 turns OFF
    }
  }

}
