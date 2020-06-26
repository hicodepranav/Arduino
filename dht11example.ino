#include "DHT.h"        // including the library of DHT11 temperature and humidity sensor
#define DHTTYPE DHT11   // DHT 11

#define dht_dpin 2
DHT dht(dht_dpin, DHTTYPE); 
void setup(void)
{ 
  dht.begin();
  Serial.begin(9600);
  Serial.print("Humidity and temperature\n\n");
  delay(1000);

}
void loop() {
    float h = dht.readHumidity();
    float t = dht.readTemperature();         
    Serial.print("Current humidity = ");
    Serial.print(h);
    Serial.print("%");
    Serial.print("\t");
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.print("C");
    Serial.print("\n");
  delay(1000);
}
