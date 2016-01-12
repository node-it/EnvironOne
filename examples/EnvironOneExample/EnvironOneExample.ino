#include <Arduino.h>
#include <Wire.h>
#include <Bme280.h>
#include <Opt3001.h>
#include <EnvironOne.h>

EnvironOneClass envOne = EnvironOneClass();

void setup() {
  // put your setup code here, to run once:

  Serial.print(F("OPT3001 manufacturer ID: "));
  Serial.println(envOne.readOpticalManufacturerId(), HEX);
  Serial.print(F("OPT3001 device ID: "));
  Serial.println(envOne.readOpticalDeviceId(), HEX);

}

void loop() {
  // put your main code here, to run repeatedly:

}
