//P-30_Constructor-parameters-and-overloading
//In this project: How to set instance variables in a class, using parameters

//In this lesson we will create objects from a class and use constructors
//to set the values of the instance variables of the objects.

//One interesting point that we will see here is that we can create multiple
//constructors with the same name, which will differ from each other only in
//the parameters they use. Depending on which parameters you define as you
//instantiate the object, the program will automatically choose the proper
//constructor.

//This would also work with other methods from the class. You can implement
//multiple methods with the same name, as long as they differ in the number
//and/or type of parameters (variables) they use.

//Another important note is that we can implement a method/function in the
//header file, instead of only declaring its prototype. This is not usual
//and should only be done if the method has a small line of code.

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1;
	//This first object is instantiated without any parameters. In this case,
	//the program will automatically choose to use the constructor Person()
	//that has no parameter to be defined. This constructor automatically sets
	//default values to name and age.
	Person person2("Fabio");
	//Here we instantiate the object and pass a string variable to it, as a
	//parameter, as if we were executing a function.
	//The program automatically chooses the constructor Person() that has only a
	//string variable as a parameter. And in the constructor we defined that this
	//string will be assigned to "name". In this constructor the age is set to a
	//default value of 0.
	Person person3 ("Heather", 35);
	//Finally, we instantiate an object defining both a string and an integer
	//as parameters. The program chooses the proper constructor, which sets
	//the string to name and the integer to age.

	cout << person1.toString() << endl;
	//Because of the constructor used, this object has standard values for name
	//and age.
	cout << person2.toString() << endl;
	//This object was instantiated with a string, so here the proper constructor
	//was automatically chosen an it set this string to the name. The age is the
	//default value 0
	cout << person3.toString() << endl;
	//In this last object, the constructor was automatically chosen, setting both
	//the name and age to the chosen values.

	return 0;
}
