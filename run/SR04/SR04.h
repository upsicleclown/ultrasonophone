#ifndef SR04_H
#define SR04_H

#if defined(ARDUINO) && ARDUINO >= 100

#include <inttypes.h>

class SR04 {
    public:
        SR04(int echoPin, int TriggerPin);
        int getDistance();
    
    private:
        int distance, duration;
        int echo, trig;
        int mstocm();
}