#include <iostream>
#include "Cat.h"
using namespace std;

//This .cpp file is used to implement the functions that belong
//to the class Cat.
//We must include here the header file "Cat.h" that contains the
//declaration of the class and the function prototypes.

//It is interesting to note that the functions implemented here
//will be accessible to all the files in the project, provided that these
//files at least contain the prototypes of the functions (or have the
//prototypes included with a header file).

//We must also write #include <iostream> and "using namespace std",
//because we are going to use functions that need these headers.

//Note here that the name of the class must be  written before the names
//of the functions to be implemented, separated by "::".

void Cat::jump(){
    cout << "Cat jumping on the table" << endl;
}

void Cat::speak(){
    cout << "Cat said 'Meowww'" << endl;
}

