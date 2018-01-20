#include <iostream>
#include "Food.h"
using namespace std;

Food::Food(){
    taste = "sour";
}
//By default, the taste variable is assigned the value "sour" by
//the constructor, when the object is created (instantiated).

void Food::setTaste(string newTaste){
    taste = newTaste;
}
//A setter method is implemented here to set the value of the
//instance variable "taste".

string Food::getTaste(){
    return taste;
}
//A getter method is also created to get the value of the instance
//variable "taste". Note that this method is created with the return
//type "string", because at the end of the function, it must return
//a string. The command "return" is also necessary so that we can access
//the value of the variable outside the scope of the function.
