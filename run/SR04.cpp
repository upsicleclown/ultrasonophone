#include "SR04.h"

SR04::SR04(int echoPin, int trigPin){
    echo = echoPin;
    trig = trigPin;
    pinMode(echo, INPUT);
    pinMode(trig, OUTPUT);
    distance = 0;
}

int SR04:: getDistance(){
    
    pwm(2, 10);
    duration = pulseIn(echoPin, HIGH);
    distance = mstocm();

    return distance;
}

void SR04::pwm(int delH, int delL){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(delH);
  
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(delL);
    digitalWrite(trigPin, LOW);

}

int mstocm(){
    duration*0.034/2;
}
