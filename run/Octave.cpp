#include "Arduino.h"
#include "Octave.h"

Octave::Octave(int id, double ff){
    double f = ff;
    _id = id;
    notes[0] = f;
    Serial.print(_id);
    for(int j = 1 ; j< 13; j++){
        notes[j] = 1000000/f;
        //Serial.print(j);
        //Serial.print(" note: ");
        Serial.println(notes[j]);
        f = f * a;
    }
}

int Octave::getNote(int j){
    return notes[j];
}
