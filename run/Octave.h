
#include "Arduino.h"

class Octave{
  public:
    Octave(int id);
    int getNote(int j);
    
  private:
    int _id;
    int notes[12];
    double a = 1.059;
    double f = 216.63;
    
  };
