
#include "Arduino.h"
#include "inttypes.h"

class SR04 {
    public:
        SR04(int echoPin, int TriggerPin);
        int getDistance();
        void pwm(int delH, int delL);
    
    private:
        int distance, duration = 0;
        int echo, trig;
        int mstocm();
    };
