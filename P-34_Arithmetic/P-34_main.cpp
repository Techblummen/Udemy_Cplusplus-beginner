//P-34_Arithmetic
//In this project:


#include <iostream>
using namespace std;

//This lesson covers the basic arithmetic operators.

//On important point is that integers may not behave as
//expected. For instance an integer 7 divided by an integer 2 will
//also return an integer. It will return 3.
//In order to get the decimal values, one of the values must be
//a float.

//In case you have a variable, you do not need to convert it completely
//to float and assign to another variable. You can use "casting" to
//convert the value of an int into a float in the line of code as you
//make a calculation.

/*
 * The following operators can be used intuitively in C++:
 * + (addition)
 * - (subtraction)
 * * (multiplication)
 * / (division)
 */


int main() {

	int value1 = 7;
	cout << "Int value is: " << value1 << endl;
	cout << "This int divided by 2 is: " << value1 / 2 << ". Wrong value." << endl;
	//An integer divided by another integer will only return an
	//integer, so it will not store/show the decimal parts of
	//the number
	cout << "But if we cast it to a float, division is: " << (float)value1 / 2 << endl;
	//If we convert the value to a float first, the division can
	//now return the proper value. The numerator (2) could also
	//have been converted to a float, having the same effect.

	/*
	 * C++ has also some interesting operators:
	 * +=
	 * -=
	 * *=
	 * /=
	 */

	//These operators allow you to change the values of a variable
	//easily
	cout << "-----" << endl;
	cout << value1 << endl;
	value1 += 3;
	cout << value1 << endl;
	//As you can see in the console, the operation "value1 += 3" is
	//equivalent to "value1 = value1 + 3".
	//The other operators work similarly. For instance:
	//"value1 /= 7" is equivalent to "value1 = value1 /7"

	//Another operator is "%" (module). What module does is it
	//divides the first value by the second and returns the
	//remaining of the division
	int value2 = 12;
	cout << "-----" << endl;
	cout << "If we divide 12 by 5, what will remain is: " << value2 % 5 << endl;


	return 0;
}
