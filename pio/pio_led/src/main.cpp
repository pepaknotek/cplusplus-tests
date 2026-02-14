#include <Arduino.h>

class Led {
    public:
        Led(int);
        void On();
        void Off();
        int getPin();
    private:
        int outPin;
        bool on;    
};

Led::Led(int outpin){
    this->outPin = outpin;
    this->on = false;
}
void Led::On(){
    digitalWrite(this->outPin, HIGH);
    this->on = true;
}
int Led::getPin(){
    return this->outPin;
}

void Led::Off(){
    digitalWrite(this->outPin, LOW);
    this->on = false;
}

Led ledky[7]{13,12,14,0,4,5,16};
int interruptPin = 2;
bool state =false;

void blink(){
     
     state = !state;
}

void setup(){
    for(int i = 0;i < 7;i++){
       pinMode(ledky[i].getPin(),OUTPUT);
    }
    pinMode(interruptPin, LOW);
    attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);;

}

void cislo(int i){
    if(i == 1 || i == 3 || i == 5){
        ledky[3].On(); // 3
    }
    if(i == 2 || i == 3 || i == 4 || i == 5 || i == 6){
        ledky[2].On(); // 13
        ledky[6].On(); // 5
    }
    if(i == 4 || i == 5 || i == 6){
        ledky[0].On(); // 14
        ledky[4].On(); // 0
    }
    if(i == 6){
        ledky[1].On(); // 12
        ledky[5].On(); // 4
    }
}

void offAll(){
    for(int i=0 ; i < 7;i++){
        ledky[i].Off();    
    }
}

void randNumb(int del){ 
    offAll();
    cislo( (rand() % 6 + 1) );
    delay(del);
}
void loop(){
    
    randNumb(100);

   if(state){
       int del = 0; 
        while(del < 1000){
            randNumb(del);
            del += 100;
        }
        randNumb(5000);
        state = false;
     }
}
