#include <Arduino.h>
#include <constants.h>
#include <sensor.h>
#include <analog_sensor.h>
#include <digital_sensor.h>
#include <actuator.h>

AnalogSensor lightSensor = AnalogSensor(3);
DigitalSensor rainSensor = DigitalSensor(4);
Actuator electroValve = Actuator(7);
void setup() {
}

void loop() {
}