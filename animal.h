#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    private:
        string name;
        string noise;

    public:
        Animal(string name, string noise);
        string getName();
        void setName();
        string getNoise();
        void setNoise();
        void makeSomeNoise();
};

#endif