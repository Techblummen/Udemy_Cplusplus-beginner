//P-37_Char-arrays
//In this project: relationship between char arrays and strings

#include <iostream>
using namespace std;

//Here, we will see how char arrays can be used to output
//text, equivalent to a string variable.
//We will also see that a char array built from a string will
//have a hidden last element with value zero. This element at the end,
//coming from the original string, is a way for C++ to understand
//that the string stops there. So, every string in C++ has a hidden
//zero character at the end.

int main() {

	string text1 = "Apple";
	cout << "Text1 (string) contains the word: " << text1 << endl;
	//Above is an example of a string variable.

	//Below, we have a char array, with successive characters. It is
	//equivalent to the string object formed by this same sequence of
	//characters. The output of both objects is the same.
	char text2[] = {'A','p','p','l','e'};
	cout << "-------" << endl;
	cout << "Text2 (char array built from individual chars) contains the word: " << flush;
	for (int i=0; i<sizeof(text2);i++){
		cout << text2[i] << flush;
	}
	cout << endl << "Text2 size is: " << sizeof(text2) << endl;

	//The same result can be obtained as well if we assign a whole
	//string to the char array, instead of the individual characters.
	//Note that the assigning syntax is almost as if we were assigning
	//it to a string variable. Sometimes char arrays may be more
	//interesting to use than string variables.
	char text3[] = "Apple";
	cout << "-------" << endl;
	cout << "Text3 (char array built from a string) contains the word: " << flush;
	for (int i=0; i<sizeof(text3);i++){
		cout << text3[i] << flush;
	}
	cout << endl << "Text3 size is: " << sizeof(text3) << endl;
	//We note here, however, that this array made from the string
	//actually has an extra element in the end. It has size 6
	//instead of 5. (compare to the object text2)
	//If we iterate through the array to see the values of each
	//character, converted to integers (with casting), we see that
	//the value of this last extra element in the array is "0" (zero).
	cout << "The integer values of each character of the text3 array are: " << endl;
	for (int i=0; i<sizeof(text3);i++){
		cout << "char" << i << ": " << (int)text3[i] << endl;
	}
	//This last element was stored in the original string, that was assigned
	//to the char array. Every string in C++ has this last hidden
	//element that equals to zero. It is used as a sign indicating that
	//this is where the string stops.

	//Using this knowledge, we could output the array that was built from
	//a string, with a while(true) loop.
	//We first create a counting integer (to iterate trough the array),
	//which will be incremented at each new turn of the loop.
	int k = 0;
	//Then we build the loop and make it break when the value of the
	//array element equals to zero. This will be the last hidden element
	//that came from the string, indicating that the string ends there.
	cout << "-------" << endl;
	cout << "If we output text3 with a while(true) loop, we also have: " << endl;
	while (true){

		if (text3[k]==0){
			break;
		}

		cout << text3[k] << flush;
		k++;
	}

	return 0;
}
