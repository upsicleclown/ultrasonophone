#include "Arduino.h"
#include "Octave.h"

Octave::Octave(int id){
    f = f * pow(a, 12*id);
    _id = id;
    //Serial.print(_id);
    for(int j = 0 ; j< 12; j++){
        notes[j] = 1000000/f;
        //Serial.print(j);
        //Serial.print(" note: ");
        f = f * a;
    }
    for(int i = 0; i < 12; i++){
        Serial.println(notes[i]);
      }
}

int Octave::getNote(int j){
    return notes[j];
}
