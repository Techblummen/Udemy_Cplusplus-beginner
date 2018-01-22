//P-39_References
//In this project: understand the use of references

#include <iostream>
using namespace std;

void changeValue1 (double var) {
	var = 1.22;
}

void changeValue2 (double & var) {
	var = 1.22;
}

int main() {

	int var1 = 5;
	int var2 = var1;
	var2 = 19;
	//When we declare a new variable, and assign to it another existing
	//variable, we are creating a new variable; from that point on they are
	//independent. So, changing the new variable will not affect the older
	//variable.
	cout << "Variable1 is: " << var1 << endl;
	cout << "Variable2 is: " << var2 << endl;


	//However, if we declare the new variable with an ampersand (&) in
	//front of it and assign to it an existing variable, we will not actually
	//create a new variable. We are creating only a reference, an alias that
	//refers to the original (already existing) variable that is being assigned.
	int var3 = 5;
	int &var4 = var3;
	//In this case then, both names (var3 and var4) refer to the same memory
	//location and, therefore, changing the content of the second "variable"
	//will indeed change the value of the original variable, and vice-versa.
	var4 = 19;
	cout << "Variable3 is: " << var3 << endl;
	cout << "Variable4 is: " << var4 << endl;
	//This strategy is very similar to pointers. It is actually simpler than
	//pointers and, therefore, more practical, but there are things we can
	//only do with pointers, but not with references.
	var3 = 2;
	cout << "Variable3 is: " << var3 << endl;
	cout << "Variable4 is: " << var4 << endl;
	//Notice that, conversely, changing the original variable will also change
	//the value returned by its reference.

	double var5 = 2.11;
	cout << "Variable 5 is now: " << var5 << endl;
	changeValue1 (var5);
	cout << "After the first change, variable 5 becomes: " << var5 << endl;
	//In this example we see the concept of references applied to a
	//function that changes the value of a variable.
	//Note that the in the above function (changeValue1), a new variable was
	//created from an already existing variable (var5), which was used as a
	//parameter.
	//In this case, changing the new variable within the function will have
	//no effect on the variables outside the scope of the function. Thus,
	//the value of the original variable (var5) is not changed.

	changeValue2 (var5);
	cout << "After the second change, variable 5 becomes: " << var5 << endl;
	//I this second function (changeValue2), the parameter of the function is
	//declared with an ampersand (&) in front of it, so we are not creating a
	//new variable.
	//Instead, we are only creating a reference that will refer to the same
	//memory location as the variable assigned to that parameter (much like a
	//pointer). Therefore, changing the value of this reference (as if it was
	//a new variable) will in fact change the value of the original variable
	//(var5).

	return 0;
}
