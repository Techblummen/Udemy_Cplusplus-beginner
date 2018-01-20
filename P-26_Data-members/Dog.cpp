#include <iostream>
#include "Dog.h"
using namespace std;

void Dog::speak(){
    if (happy){    //This means, if the variable happy is true
        cout << "Wouf Wouf!" << endl;
    } else {       //If the variable is not true
        cout << "Grrrrrr!" << endl;
    }
}

void Dog::makeHapppy(){
    happy = true;
}

void Dog::makeSad(){
    happy = false;
}
