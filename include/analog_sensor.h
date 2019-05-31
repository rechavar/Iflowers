class AnalogSensor: protected Sensor {
    protected:
        float scale;
    public:
        AnalogSensor(uint8_t pin, float threshold=0, float scales=1):Sensor(pin, threshold){
            this->scale = scale;
        }
        void read();
        float getValue();
};

void AnalogSensor::read(){
    float tmp_value = analogRead(this->input) * (VCC/MAX_COUNTS);
    float delta = abs(value-tmp_value)/value;
    if(delta > this->threshold){
        this->change = true;
    }
    this->value = tmp_value;
}

float AnalogSensor::getValue(){
    this->change =false;
    return this->value;
}