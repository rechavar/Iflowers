#include <Arduino.h>
#include <sensor.h>

class digitalSensor: public sensor
{
private:
    int puerto; 
    bool valor; 
    String sensar;
public:
    digitalSensor(int pin):sensor(){
        this->puerto = pin;
    };
};

bool digitalSensor::read(){
    this->valor = digitalRead(this->puerto);
};

