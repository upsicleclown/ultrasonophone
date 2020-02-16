#ifndef Octave_H
#define Octave_H

#if defined(ARDUINO) && ARDUINO >= 100

#include <inttypes.h>

class Octave {
    public:
        Octave(int id);
        int getNote(int j);
    
    private:
        int id;
        int[12] periods;
        int f, a;
}