class sensor
{
private:
    int puerto;
    float threshold;
    int pin;
    float valor; 

    
public:
    sensor();
    float read();
    void setThreshold(float threshold);
    bool hasChange();

};

sensor::sensor()
{
}
void sensor::setThreshold(float threshold){

    this->threshold = threshold;
}
bool sensor::hasChange(){
    return(this->valor > this->threshold);
}
float sensor::read(){
    
}








