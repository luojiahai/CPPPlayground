#include "animal.h"


Animal::Animal(std::string name, std::string noise) {
    this.name = name;
    this.noise = noise;
}

std::string Animal::getName() {
    return name;
}

void Animal::setName(std::string name) {
    this.name = name;
}

std::string Animal::getNoise() {
    return noise;
}

void Animal::setNoise(std::string noise) {
    this.noise = noise;
}

void Animal::makeSomeNoise() {
    std::cout << noise << std::endl;
}
