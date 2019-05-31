#include <Arduino.h>
#include <sensor.h>

class analogSensor: public sensor
{
private:
    int puerto; 
    float threshold;
    float valor; 
    String sensar;
    float val;   
    
public:
    analogSensor(int threshold, int pin, String sensar):sensor(){
        this->threshold = threshold;
        this->puerto = pin;
        this->sensar = sensar;
    };
    
};

float analogSensor::read(){
    if (this->sensar = "LUZ") 
    {
        float Va = analogRead(this->puerto);
        val = ((long)Va*1000*10)/((long)15*10*(1024-Va));
    }
    else
    {
         val = analogRead(this->puerto);
    }
    this->valor = val;
    return val;
}
