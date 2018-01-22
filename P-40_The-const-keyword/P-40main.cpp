//P-39_The-cons-keyword
//In this project: uses of the "const" keyword

#include <iostream>
using namespace std;

//Here, we are going to see different uses of the keyword "const" in
//variables, class methods and pointers. In general, the keyword
//indicates that a certain variable cannot be changed later on in
//the program.

class Dog {
private:
	string name;
public:
	void setName (string name) {this->name = name;}
	void speak() const {cout << "Hi, my name is " << name << endl;}
};
//Note: in this project, we are declaring a class and its methods all
//within the main cpp file. This is not the usual way, as we have seen
//in the class projects; but it can be done, especially when the code is
//small.

int main() {

	int value1 = 5;
	value1 = 6;
	cout << "Value1 is: " << value1 << endl;
	//Above, we have created a variable int and assigned the value
	//5 to it. By nature, variables can be later changed, just like
	//we did by assigning a new value (6) to it.
	const int value2 = 7;
	//On the other hand, an int that is declared with the keyword
	//"const" in front of it cannot be later changed. Trying to change
	//its value will cause an error and the program will no compile.
	//Try uncommenting the following line and building the project:
	//value2 = 10;
	//It will not work.
	//Having a const can be useful when a variable does not have to
	//be changed, or when you want to protect it from being changed
	//to avoid errors later on in the program.

	//--------------------------------------------------------------
	//The "const" keyword can also be used within a method of a class,
	//to make sure the method does not accidentally change the instance
	//variable(s) of the instantiated objects.
	Dog dog1;
	dog1.setName ("Bob");
	dog1.speak();
	//For instance, here we use the method "setName" to define the name
	//of the object dog1 from the string parameter "Bob". In the method
	//implementation, if we write the keyword "const" between the parameter
	//parenthesis and the curly brackets, this method will not be
	//able to change instance variables anymore.
	//For this reason, writing "const" in the "setName" method will create
	//an error and the program will not compile properly. It will no longer
	//be able to execute and change the value of the instance variable "name".
	//On the other hand, writing "const" in the "speak" method will be OK,
	//because this method is not used to change any instance variables.
	//So, const can be used to prevent a programmer from changing variables
	//in methods that are not supposed to do so.

	//-----------------------------------------------------------------
	//Now, we shall see the use of "const" with pointers.
	int value3 = 10;
	int value4 = 9;
	int *pValue3 = &value3;
	cout << "The pointer points to the int: " << *pValue3 << endl;
	//We first created two variables and stored the memory location of one
	//of them in a pointer.
	//We can now make changes with the pointer in two ways.
	//We can either change where the pointer points to:
	pValue3 = &value4;
	cout << "The pointer now points to the int: " << *pValue3 << endl;
	//Or we can change the value of the memory location to which the pointer
	//points:
	*pValue3 = 5;
	cout << "The pointer now points to the int: " << *pValue3 << endl;

	//We can, however, declare a pointer using the keyword "const" in two
	//different ways. Each will block one of the changes that we did above
	//with the pointer.
	int value5 = 11;
	int value6 = 77;
	int *pValue5 = &value5;

	//If we wrote:
	//const int *pValue5 = &value5;
	//The following action would not be possible...
	*pValue5 = 12;
	//...because while declaring the pointer with const before the variable
	//type, we specify that the value to which the pointer points is a constant
	//and cannot be changed it later.

	//If, on the other hand we wrote:
	//int * const pValue5 = &value5;
	//The previous action would work, but the following action would not...
	pValue5 = &value6;
	//...because while declaring the pointer with const after the "*", we
	//define that the pointer itself is now constant, so we cannot later
	//change the memory location to which it points.
	cout << "The other pointer points to the int: " << *pValue5 << endl;

	return 0;
}
