//P-33_Pointers
//In this project: how to work with pointers

//In this lesson, we are going to start using the concept of pointers.
//Pointers are variables used to store the memory address of other variables.
//They are created with a specific syntax, with the symbol "*".

//We also learn here a useful feature of pointers. You can use the
//address stored in the pointer to refer to a specific variable
//and change its value. The advantage of doing this with a pointer
//is that you can access variables outside the scope of a function,
//simply because you have its precise memory location in the computer.

#include <iostream>
using namespace std;

void manipulate1(double value) {
	cout << "2. Value of double within the function is: " << value << endl;
	value = 12.7;
	cout << "3. Value of double within the function is: " << value << endl;
}

void manipulate2(double* pvalue) {
	cout << "2. Value of double within the function is: " << *pvalue << endl;
	*pvalue = 12.7;
	cout << "3. Value of double within the function is: " << *pvalue << endl;
}

int main() {

	int myValue = 9;
	int* pmyValue = &myValue;
	//Here, we create an int variable. This stores the number 8 in a piece
	//of memory that has the size and attributes of an "int".
	//Next, we create a pointer (starting with a "p" by convention) to
	//store the address of an "int", and we assign to it the memory
	//location of "myValue".
	//Note that the initialization of the pointer requires writing "*"
	//after the variable type "int" and before the variable name "pmyValue".

	//Now, lets output the variables:
	cout << "Value of int is: " << myValue << endl;
	cout << "Memory address of int is: " << pmyValue << endl;
	cout << "I can use the pointer to get the value from that memory address."
			<< endl;
	cout << "The obtained value from the address is: " << *pmyValue << endl;
	//Note that in the last line we output the value using the memory address
	//stored in the pointer. To obtain what is stored in a memory address, we use
	//again the symbol "*" right before the pointer. This symbol "dereferences"
	//the variable from its memory location.

	cout << "-------------------------" << endl;

	double dvalue = 10.5;

	cout << "1. Value of double outside the function is: " << dvalue << endl;
	manipulate1(dvalue);
	cout << "4. Value of double outside the function is: " << dvalue << endl;
	//Here, we first allocate a piece of memory to a double and store
	//in it the value 10.5. Then we use the function manipulate1,
	//which gets that value into an internal copy of the variable, outputs it,
	//changes the value of that new (copy) variable and outputs it again.
	//Afterwards, we output again the double, outside the function
	//and we see that the value did not change, because all the manipulation
	//we did remained within the scope of the function, in the copy
	//variable.

	cout << "-------------------------" << endl;

	cout << "1. Value of double outside the function is: " << dvalue << endl;
	manipulate2(&dvalue);
	cout << "4. Value of double outside the function is: " << dvalue << endl;
	//Now, this last piece of code shows the power of pointers.
	//Just like before, we have a function that outputs and changes the
	//value of our declared double. The difference is that now, instead
	//of using the variable itself as a parameter, the function (manipulate2)
	//uses the memory location of the variable, stored into a pointer. Now, when
	//we change the variable within the function by means of its memory
	//address, we are not creating a second (copy) variable, we are changing the
	//original variable itself. We are accessing its memory location in the
	//computer and changing its content.
	//This way, when we finally output the variable again, outside the
	//scope of the function, we see that it has assumed the new value assigned
	//within the function.

	return 0;
}
