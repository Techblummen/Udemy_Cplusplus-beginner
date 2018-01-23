//P-51_Static-keyword
//In this project: static variables and methods in a class

#include <iostream>
using namespace std;

//The "static" keyword written before a variable or method in a class
//makes this variable or method available for all the class, not just
//the individual objects. So, the variable will not be an instance
//variable, because it will not be particular to each object/instance,
//it will rather be a general variable of the class.
//Likewise, static methods can be used in the class by any object or
//even accessed directly by the class (without objects). Static
//methods can only use static variables.


//Let us first create a class to use the concepts. For practical reasons,
//the code that would be in the separate header (.h) file and in the
//separate instantiation file (.cpp) will all be written here.

//This is the code that would be in the header (.h) file
class Test {
private:
	//static variable
	static int count;
	//this variable must be assigned a value in the separate .cpp file.
	//It will be the same variable for all the objects.

	//instance variable
	int id;

public:
	//static constant
	static int const MAX = 99;
	//Constants must be assigned a value right when defined.
	//By convention, constants are written in upper case.
	//Because constants will always have the same value, it makes
	//sense to define them as static.

	//static method
	static void showInfo (){
		cout << "Count value is: " << count << endl;
	}
	//Static methods can only access static variables.

	//Constructor that assigns the value of the static variable "count"
	//into the instance variable "id" and then increments the static variable,
	//whenever a new object is created
	Test(){
		id=count++;
	}
	//Note: we incremented the "count" variable with a postfix operator (count++).
	//This means the variable will be first assigned and then incremented.
	//If we had used the prefix increment operator (++count), "count" would be
	//first incremented and then its value would be assigned to "id".

	//Method to return the instance variable.
	int getID() {
		return id;
	}

};

//This is the code that would be in the .cpp file
int Test::count = 0;

//Code in the main .cpp file
int main() {

	cout << Test::MAX << endl;
	Test::showInfo();
	//Notice here that we have not yet instantiated any object from
	//the class "Test". However, even without objects, we can access the static
	//constant "MAX" and the static method "showInfo()" directly via the class,
	//using the syntax "Test::...".

	//We cannot access the variable "count" directly, because it is private.
	//The constant "MAX" does not need to be private, because there is
	//no danger in exposing it; a constant cannot be accidentally changed.

	cout << "----------------" << endl;

	Test test1;
	cout << "Test 1 id: " << test1.getID() << endl;
	Test test2;
	cout << "Test 2 id: " << test2.getID() << endl;
	Test::showInfo();
	//Here, we instantiated two objects from the class. Because of the
	//constructor "Test(){id=count++;}", at each new object created, the
	//static variable "count" is assigned to the instance variable "id"
	//and then "count" is incremented. So, for the next object instantiated,
	//"count" will have a different value (previous value +1).
	//This is a good strategy for keeping track of how many objects were
	//already created, as well as for assigning increasing values to the
	//instance variables of each new object.

	return 0;
}
