//P-27_Constructors-destructors
//In this project: how to work with constructors and destructors within a class

//In this lesson/project/tutorial, we learn how to use constructors and
//destructors. Constructors are class methods (functions) that execute
//automatically when an object is created (instantiated) from a class.
//Accordingly, destructors are pieces of code (methods) that are executed
//automatically when an object is destructed.

//We are also going to use the constructor to initialize a private
//variable of a class, automatically with the creation of the object.
//These variables cannot be initialized when they are defined and cannot be
//initialized automatically from the "main" function.
//These variables created within a class are called "instance variables".

#include <iostream>
#include "Bird.h"
using namespace std;

int main()
{
    cout << "Starting program..." << endl;

	Bird chocobo;
	chocobo.move();

	//Here, an object "chocobo" was instantiated from the class "Bird" and
	//the constructor was automatically executed, both outputting a text
	//"Creating the bird" and setting the state "happy" to true (see previous
	//lesson and the Bird.cpp file for details).

	cout << "Ending program..." << endl;

	//The destructor is automatically executed at the end of the "main" function,
	//outputting the text "Bird was destroyed". The destructor is executed at this
	//point because the new object "chocobo" exists only within the scope of
	//the closest pair of openning and closing curly brackets "{}". So, in this
	//case, at the end of the main function, the closing curly bracket indicates that
	//all variables and objects created within this scope must be destroyed and the
	//memory allocated to them is again free to be used by the machine.

	//If we put opening and closing curly brackets right around the lines that create
	//"chocobo", it will only exist within those lines and it will be destroyed before
	//reaching the end of "main", therefore executing the destructor of the class
	//"Bird" earlier.

    return 0;
}
