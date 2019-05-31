class Sensor {

    protected:
        float threshold;
        int input;
        float value;
        bool change;

    public:
        Sensor(uint8_t pin, float threshold);
        virtual void read();
        void init();
        void setThreshold(float threshold);
        bool hasChange();
};

Sensor::Sensor(uint8_t pin, float threshold=0){
    this->threshold = threshold;
}

void Sensor::setThreshold(float threshold){
    this->threshold = threshold;
}
bool Sensor::hasChange(){
    return this->change;
}

void Sensor::init(){
    pinMode(this->input, INPUT);
}