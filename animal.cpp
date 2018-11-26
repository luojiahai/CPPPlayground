#include "animal.h"
#include <string>

Animal::Animal(string name, string noise) {
    this.name = name;
    this.noise = noise;
}

string Animal::getName() {
    return name;
}

void Animal::setName(string name) {
    this.name = name;
}

string Animal::getNoise() {
    return noise;
}

void Animal::setNoise(string noise) {
    this.noise = noise;
}

void Animal::makeSomeNoise() {
    cout << noise << endl;
}
