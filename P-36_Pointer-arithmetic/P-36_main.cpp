//P-36_Pointer-arithmetic
//In this project: the effect of additions and subtractions in pointers

#include <iostream>
using namespace std;

//In this lesson, we will learn how to make addition and
//subtraction with pointers.

int main() {

	//First, we create an array with which we will use the pointers
	const int NELEMENTS = 5;
	string texts[NELEMENTS] = {"one", "two", "three", "four", "five"};

	//As we have seen in the last project, adding the integer 1 to a pointer
	//makes it move to the next memory location in the computer. For
	//instance, let's say we have a pointer that points to the first element
	//of an array.
	string *pTexts = texts;
	//this is equivalent to "string *pTexts = &texts[0]", because a pointer that
	//points to the whole array automatically points to its first element.
	cout << "The first element is: " << *pTexts << endl;

	//If we add 1 to it, the result will be a new pointer, displaced in one
	//unit of memory (the size of a string) relative to the initial pointer, that
	//means, it will now point to the second element of the string array.
	pTexts++;
	cout << "Now the pointer points to: " << *pTexts << endl;

	//Let us now see a subtraction between two pointers that point
	//to different elements of an array. The result will be an integer value
	//that equals the number of memory units that separates the two pointers.
	//For instance, the difference between a pointer that points to the third
	//element of an array and a pointer that points to the first element of
	//the same array will be the integer "2".
	pTexts = texts; //pTexts points back to the beginning of the array
	string *pThird = &texts[3-1]; //points to the third element of the array
	int differ = pThird - pTexts;
	//The difference between the two pointers was stored in an integer.
	//If we output the integer, we have:
	cout << "The difference between two pointers is: " << differ << endl;

	//Now, let's iterate through the array using a while loop:
	cout << "--------------" << endl;
	cout << "The array contains: " << flush;

	pTexts = texts; //pTexts points back to the beginning of the array
	string *pLast = &texts[NELEMENTS]; //points to the last element + 1

	while (pTexts != pLast) {
		cout << *pTexts << " " << flush;
		pTexts++;
	}

	//We can also use a pointer to point to the middle element of an array,
	//if we have a reference of the number of elements in the array, as we do
	//here.
	pTexts = texts; //pTexts points back to the beginning of the array
	//Now we add to pTexts an integer equivalent to half of the number of
	//elements in the array:
	pTexts += NELEMENTS/2;
	cout << endl << "--------------" << endl;
	cout << "The middle element is: " << *pTexts << endl;
	//Note that here we divided NLEMENTS (an integer of value 5) by 2 (also an
	//integer). The result was thus an integer, so, instead of 2.5, the value
	//of the division was 2, because the resulting integer ignores decimals.
	//The element in position 2 is in the middle of the array, which goes
	//from 0 to 4.

	return 0;
}
