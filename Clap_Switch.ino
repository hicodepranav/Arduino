int Sensor = A0;

int clap = 0;
long detection_range_start = 0;
long detection_range = 0;
boolean status_lights = false;
void setup() 
{
  pinMode(Sensor, INPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH); //initially relay remains off
}
void loop() 
{
  int status_sensor = digitalRead(Sensor);
  if (status_sensor == 0)
{
 if (clap == 0)
{
 detection_range_start = detection_range = millis();
 clap++;
}
 else if (clap > 0 && millis()-detection_range >= 50)
{
 detection_range = millis();
 clap++;
}
}
 if (millis()-detection_range_start >= 400)
{
 if (clap == 2)
{
 if (!status_lights)
{
 status_lights = true;
 digitalWrite(13, LOW); //relay turns ON
}
 else if (status_lights)
{
 status_lights = false;
 digitalWrite(13, HIGH); //relay turns OFF
}
}
 clap = 0;
}
}
