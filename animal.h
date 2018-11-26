#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>


class Animal {
    private:
        std::string name;
        std::string noise;

    public:
        Animal(std::string name, std::string noise);
        std::string getName();
        void setName();
        std::string getNoise();
        void setNoise();
        void makeSomeNoise();
};

#endif