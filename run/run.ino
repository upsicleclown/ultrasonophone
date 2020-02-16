#include <SR04.h>
#include <Octave.h>

SR04[3] sensors;
Octave[3] octaves;
int speakerOut = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i; i < 3; i++){
    SR04[i] = new SR04(8+i,9+i); 
    Octave[i] = new Octave(i);
    }
  pinMode(speakerOut, OUTPUT);
}

void playNote(int distance, Octave octave){
  if(distance >=10 && distance < 46){
      int j = (distance - 10)/3;
      tone(speakerOut, Octave.getNote(i));
    }  
}

void loop() {
  for(int i = 0; i < 3; i ++){
    playNote(Sensor[i].getDistance(), Octave(i));
    }
}
