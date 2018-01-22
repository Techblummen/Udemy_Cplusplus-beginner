#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefined";
	age = 0;
}
//This first constructor automatically sets the values of the
//variables name and age.

Person::Person (string newName, int newAge){
	age = newAge;
	name = newName;
}
//This other constructor with the same name uses two parameters
//and assigns their values to the instance variables.

string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

//Here we implement the method toString(), which first creates
//an object ss from the class stringstream (note that we had to
//first include the class sstream in the header). Then we put in
//this object the info of the object. Finally we convert all into a
//single string (with the method str()) and return it in the end.
//For details, revise last tutorial (String Streams).
