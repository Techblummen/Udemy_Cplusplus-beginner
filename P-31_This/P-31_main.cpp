//P-31_This
//In this project: how to use the "this" keyword

//In this lesson we will learn the use and meaning of the keyword
//"this". The keyword refers to a variable that contains the memory
//location of an object, where it is stored in the computer.
//With this property, the word "this" can be used to refer to an
//instance variable of an object (e.g. in the constructor), even
//if a parameter is used with the same name in that constructor.

//Supposing we have an instance variable "age" and the constructor
//has a parameter "age" whose value should be assigned to the
//instance variable. The "this" keyword written before the variable
//will tell that the "age" variable of that specific object being
//instantiated at the moment should be assigned the value of the
//parameter "age", without risk of conflict in the names of the
//variable and the parameter.

#include <iostream>
#include "Boy.h"
using namespace std;

int main() {

	Boy boy1("Mike",50);
	Boy boy2("Charlie",17);

	cout << boy1.toString() << "; Memory location: " << &boy1 << endl;
	cout << boy2.toString() << "; Memory location: " << &boy2 << endl;

	//Here we used the symbol "&" before the name of the object to
	//output its memory location. As we see in the console,
	//it is equivalent to output the variable "this" of that same
	//object.
	//Of note, the objects created one after the other have different
	//values for "this", meaning that the have different memory addresses.

	return 0;
}
