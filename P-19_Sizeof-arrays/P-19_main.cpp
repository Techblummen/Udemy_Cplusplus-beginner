//P-19_Sizeof-arrays
//In this project: how to use sizeof() and for loops to iterate through an array

#include <iostream>
using namespace std;

int main() {

    int values[3] = {1,3,5};

    cout << "Simple output" << endl;
    cout << "-------------" << endl;
    for (int i=0; i<3; i++){
        cout << values[i] << " " << flush;
    }

    //With "sizeof" you can get the number of elements in an array by dividing the size of
	//the whole array by the size of an individual element (eg. sizof(int) for array of integers)
	cout << "\n\n" << "Output using sizeof()" << endl;
	cout << "---------------------" << endl;
	for (int i=0; i<sizeof(values)/sizeof(int); i++){
        cout << values[i] << " " << flush;
	}

	//We may need to define "i" as an unsigned int. By default it is a signed int.
	//If we do not specify "unsigned", the compiler might give a warning that we are trying to
	//compare a signed int "i" with the unsigned int resulting from the sizeof operations.
	//Note: It still works with signed "i", despite the warning

	//I will try to do the same with a two dimensional array
	int values2[2][3] = {
	    {1,3,5},
	    {2,4,6}
	};
	cout << "\n\n" << "Output multidimensional array with sizeof()" << endl;
	cout << "---------------------" << endl;
	for (int i=0; i<sizeof(values2)/sizeof(values2[0]); i++){
	    for (int j=0; j<sizeof(values2[0])/sizeof(int); j++){
            cout << values2[i][j] << " " << flush;
	    }
	    cout << endl;
	}

    return 0;
}

