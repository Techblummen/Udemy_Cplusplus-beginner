#include "Boy.h"

Boy::Boy(string name, int age) {
	this->name = name;
	this->age = age;
	cout << "Memory location of object: " << this << endl;
}
//The "this" keyword written before the variable
//will tell that the "name" variable of that specific object (in that
//specific memory address) being instantiated at the moment should be
//assigned the value of the parameter "name" of the constructor, without
//risk of conflict in the names of the variable and the parameter.


string Boy::toString() {

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
