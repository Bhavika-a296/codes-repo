//code for temperature sensor to show temperature in degree celcius & farheniet,and humidity percentage.

#include "DHT.h"
const int DHTPin = D5;
DHT dht(DHTPin, DHT11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Sensor Interfacing");
}
void loop() {
  // put your main code here, to run repeatedly:
  float h=dht.readHumidity();
  float t=dht.readTemperature(); //Celcius
  float tf=dht.readTemperature(true); //Farhenhiet
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %RH");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("Degree Celcius");
  Serial.print("\t");
  Serial.print(tf);
  Serial.println(" Degree Farenheit");
  delay(2000);
}
