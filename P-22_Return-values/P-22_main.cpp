//P-22_Return-values
//In this project: how to get resulting values from functions

//This time, we are using a function to obtain a value.
//In the last project, we could store a piece of code and call it in the main,
//however, the variables created within that piece of code could not be used
//further in the algorithm. They only worked within the scope of the function.
//Now we will learn how to obtain a value from a variable inside the function and
//then later use this resulting value (not the variable itself) inside the main.
//The logic is that you make the function return a value when you call it. This value
//is stored in a new (independent) variable created inside the main. Then you can use
//that value in the main for other purposes.

#include <iostream>
using namespace std;

//One important thing in this case is that you should implement the
//function with the variable type, instead of "void".
//In this  case, we will use "int". We do not use "void", because "void"
//is equivalent to a variable type "zero" (an empty variable type).

int user_answer() {

	int variable1;
	cout << "Please write an integer number: " << flush;
	cin >> variable1;

	return variable1;   //This instruction indicates what the function returns
}

//Now I can "call" that function inside the "main". This function will
//return an integer value and we are going to store this resulting value
//into a new variable

int main() {

	int variable2 = user_answer();
	//The result of the function is stored in the variable

	cout << "You wrote " << variable2 << ". Thank you." << endl;

    return 0;
}

