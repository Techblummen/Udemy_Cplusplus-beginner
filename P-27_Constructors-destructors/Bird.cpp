#include <iostream>
#include "Bird.h"
using namespace std;

Bird::Bird(){
    cout << "Creating a bird" << endl;
    happy = true;
}
//Here we implemented the constructor following the same syntax we used with
//other methods/functions of the class. In this particular case, the constructor
//outputs some text and it initializes the variable happy with the value true.
//Both the constructor and the destructor can be implemented in any part of
//this .cpp file, before or after other methods.

Bird::~Bird(){
    cout << "Bird has disappeared" << endl;
}
//The destructor ~Bird() is implemented. It is automatically executed when
//any object of the class is destroyed. In this case, the destroyer outputs
//some text.

void Bird::move(){
    if (happy) {
        cout << "Went flying" << endl;
    } else {
        cout << "Slowly moved to the side" << endl;
    }
}
