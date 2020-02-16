#include "Arduino.h"
#include "SR04.h"

SR04::SR04(int echoPin, int trigPin){
    echo = echoPin;
    trig = trigPin;
    pinMode(echo, INPUT);
    pinMode(trig, OUTPUT);
    distance = 0;
}

void SR04::pwm(int delH, int delL){
    digitalWrite(trig, LOW);
    delayMicroseconds(delH);
  
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trig, HIGH);
    delayMicroseconds(delL);
    digitalWrite(trig, LOW);

}
int SR04:: getDistance(){
    
    pwm(2, 10);
    duration = pulseIn(echo, HIGH);
    distance = mstocm();

    return distance;
}

int SR04::mstocm(){
    int dist = duration*0.034/2;
    return dist;
}
