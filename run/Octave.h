
#include "Arduino.h"

class Octave{
  public:
    Octave(int id, double ff);
    int getNote(int j);
    
  private:
    int _id;
    int notes[13];
    double a = 1.059;
    
  };
