//P-28_Getters-and-setters
//In this project: methods to get and set values of instance variables within classes

//Setters are methods created within a class to allow us
//to set the value of an instance variable created in the class.
//Getters are methods used to obtain the value of the instance
//variable.

//It is advisable to not use setters in C++, because they
//partially expose the instance variable, which could be changed
//by the user to any (unpredictable) value. But we are going to
//learn them in case we ever need to apply these features.

//In the present example, we create a class "Food" and an instance
//variable within it: "taste". Finally, we create two methods, to
//set and to get the value of "taste".

#include <iostream>
#include "Food.h"
using namespace std;

int main()
{
    Food milk;
    cout << "This food tastes " << milk.getTaste() << endl;

    //Here we used the method "getTaste()" to get the value of the
	//instance variable "taste" in the object "milk". By default, this
	//value is a string "sauer". This value is automatically defined in
	//the constructor of the class.

    milk.setTaste("sweet");
    cout << "Now it tastes " << milk.getTaste() << endl;

    //Now we use the method "setTaste()" to set the variable "taste" of
	//"milk" to a new value: "sweet". Then, if we ask for "taste" again with the
	//method "getTaste()", it returns the new value.

    return 0;
}
