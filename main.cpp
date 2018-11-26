#include <iostream>
#include "animal.h"

using namespace std;


int main(int argc, char const *argv[]) {
    /* code */
    cout << "Hello, World!" << endl;

    Animal dog("Dog", "waowao");
    dog.makeSomeNoise();

    return 0;
}
