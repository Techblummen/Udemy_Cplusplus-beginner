//P-32_Constructor-initialization
//In this project: alternative method to set the value of instance variables in the constructor

//Here we will see a new way of initializing instance variables
//within a constructor, without using the keyword "this".

//After the constructor name and parameters, before the curly brackets,
//we just need to type ":" followed by the name of the instance variable
//and, within parenthesis, the value to be assigned. This value to be
//assigned can be a parameter of the constructor, with the same name as the
//instance variable.
//Multiple variables can be initialized one after the other, just
//by separating them with a comma.

//This way of initializing variables in the constructor is the recommended
//strategy in C++, being more frequent than the others we saw before.

#include <iostream>
#include "House.h"
using namespace std;

int main() {

	House house1;
	House house2("black");
	House house3("white",3);

	cout << house1.toString() << endl;
	cout << house2.toString() << endl;
	cout << house3.toString() << endl;

	//The first house object was instantiated without parameters,
	//so it automatically used the non-parameterized constructor
	//that sets default values to the instance variables.

	//The second house object was instantiated with a string as
	//a parameter. A constructor that has only a string parameter
	//was automatically run. It sets the string to the instance
	//variable "color", using the keyword "this".

	//The third house object was instantiated with a string and an
	//integer as parameters. The constructor that accepts these two
	//parameters was used. This constructor assigns the parameter
	//values to the instance variables, using the "constructor
	//initialization" strategy that uses parenthesis to initialize
	//the variables, before the curly brackets, during function
	//implementation.

	return 0;
}
