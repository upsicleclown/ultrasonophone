#include "Arduino.h"
#include "SR04.h"
#include "Octave.h"


SR04 s1 = SR04(8,9);
SR04 s2 = SR04(10,11);
SR04 s3 = SR04(12,13);

Octave o1 = Octave(0, 261.6);
Octave o2 = Octave(1, o1.getNote(12));
Octave o3 = Octave(2, o2.getNote(12));
int speakerOut = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(speakerOut, OUTPUT);
}

void playNote(int distance, Octave octave){
  if(distance >=2 && distance < 38){
      int j = (distance - 2)/3;
      tone(speakerOut, octave.getNote(j+1));
    }  
}

void loop() {
  playNote(s1.getDistance(), o1);
  playNote(s2.getDistance(), o2);
  playNote(s3.getDistance(), o3);
}
