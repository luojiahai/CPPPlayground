#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>


class Animal {
    private:
        std::string name;
        std::string noise;

    public:
        Animal(std::string name, std::string noise);
        std::string getName();
        void setName(std::string name);
        std::string getNoise();
        void setNoise(std::string noise);
        void makeSomeNoise();
};

#endif
