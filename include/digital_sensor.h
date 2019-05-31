class DigitalSensor: protected Sensor {
    protected:
        float scale;
    public:
        DigitalSensor(uint8_t pin, float threshold=0)
            :Sensor(pin, threshold){;;}
        void read();
        bool getValue();
};

void DigitalSensor::read(){
    bool tmp_value = digitalRead(this->input);
    this->change = !(tmp_value == value);
    this->value = tmp_value;
}

bool DigitalSensor::getValue(){
    this->change =false;
    return this->value;
}