//P-35_Pointers-and-arrays
//In this project: how to use pointers in arrays

#include <iostream>
using namespace std;

//Here, we will see how pointers can be used to iterate through
//an array.

//A good example of how this works is an array of strings. As
//John mentioned before, the size of a string variable is always
//the same, regardless of how much text is contained in it. The
//reason for that is that the content of a string is stored somewhere
//else.

//Another important observation is that arrays and pointers to
//arrays are basically the same, except that the an array object
//has the information of how much data is stored in it, whereas
//a pointer pointed to the whole array only has the information
//of the size of the first element.

int main() {

	string texts[] = { "one", "two", "three" };
	//Here we create an array of strings with 3 elements

	cout << sizeof(texts) / sizeof(string) << endl;
	//This piece of code uses "sizeof()" to asses the number of
	//elements in the array

	//We can output all the members of the array using this loop,
	//just as we saw on project 19.
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << " " << flush;
	}

    //POINTER METHOD 1
	//If we want to use pointers that point to an array, we can equal
	//the pointer to the whole array itself. An array object and its
	//pointer are basically the same, except that the array stores how
	//much information there is inside of it.
	string *pTexts = texts;
	//And we can now output the array, using the pointer instead of the
	//array itself, with the same result in the end.
	cout << endl << "-------------" << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}

	//If, instead of using the array reference sintax "[i]" to iterate
	//through the array, we use only the dereferenced pointer...
	cout << endl << "-------------" << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *pTexts << " " << flush;
	}
	//...then we have only the first element of the array, because the
	//pointer points only to that first element.

    //POINTER METHOD 2
	//We can use pointers to iterate through the array if we add 1 to
	//the current pointer, at each new iteration of the loop.
	//This way, the new pointer will automatically point to the next block
	//of data in the computer memory, which happens to be the next element
	//of the array.
	//cout << endl << "-------------" << endl;
	//for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
	//	cout << *pTexts << " " << flush;
	//	pTexts ++; // equivalent to pTexts = pTexts+1
	//}
	//Obs: The above code is commented out to avoid changing the pointer value
    //that we will need later.

    //POINTER METHOD 3
	//Alternatively, we can add the index to the pointer at each iteration
	//of the loop. This will not change the pointer itself
    cout << endl << "-------------" << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *(pTexts + i) << " " << flush;
	}

    //POINTER METHOD 4
    //Interestingly, the "pTexts++" could also be written in first line
	//of the loop, after "i++", separated by a comma.
	//This part of the syntax of the loop, after the second ";",
	//can include any action that must be done at each new iteration
	//after the first.
	cout << endl << "-------------" << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts ++) {
		cout << *pTexts << " " << flush;
	}
	//So, this has the same effect as the second last loop (method 2).

    //POINTER METHOD 5
	//We could also iterate through an array by using a pointer that
	//points to the first element of the array and another that points
	//to the last element of the array:
	string *pElement = texts;
	string *pEnd = &texts[2];
	//In the first line, this is equivalent to "string *pElement = &texts[0]".
	//We just do not need to state that we want the first element, because
	//a pointer directed to an entire array will by default point to its
	//first element.
	//Having the pointers, we can now use a while loop to first output the element
	//referred to by the first pointer. Then we increment the first pointer
	//and repeat the process, until this first pointer reaches the value (memory
	//location) stored in the second pointer. Then we break the while loop:
	cout << endl << "-------------" << endl;
	while(true){
		cout << *pElement << " " << flush;

		if (pElement == pEnd){
			break;
		}

		pElement++;
	}
	//This gives the same output as the previous loops.

	return 0;
}
