//P-29_String-streams
//In this project: How to store and output blocks of texts built from different data types

//In this lesson we learn how to output blocks of text biding
//together character strings, string variables and other variable types,
//such as integers.
//The "+" can bind together strings and sum integers, but it cannot
//be used to bind strings and integers together.

//In order to bind together strings with other variable types, we
//must use the class sstream. An object instantiated from this class
//can receive different variables, one after the other, and bind them.
//You can later output this object with a method of the class sstream.

#include <iostream>
#include <sstream>    //must be included to work with string streams
using namespace std;

int main() {

	string name = "Lucas";
	int age = 20;

	//info = "Name is: " + name + ". Age is: " + age
	//Tbe above line would not work because the "+" cannot be used
	//to bind together strings and integers.

	//But we can instantiate an object from the class stringstream
	//to do the job.
	stringstream info;

	//Then we put the character strings and integers in the object,
	//using successive lines.
	info << "Name is: ";
	info << name;
	info << ". Age is: ";
	info << age;
	info << ".";

	cout << info.str() << endl;
	//Here, the method str() used with the object info converts the
	//data contained in info into a single string with all the information
	//there bound together.

	return 0;
}
