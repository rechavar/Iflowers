class Actuator
{
private:
    int pin;
    int state;
public:
    Actuator(int pin, bool state);
    bool getState();
    void changeState(bool newState);
};

Actuator::Actuator(int pin, bool state = 0)
{
    this->pin = pin;
    this->state = state;
}

bool Actuator::getState(){
    return this-> state;
};

void Actuator::changeState(bool newState){
    digitalWrite(this->pin,newState);
};
