//P-45-2_Arrays-and-functions-2
//In this project: how to return arrays from a function

#include <iostream>
using namespace std;

//In this second part of the lesson, we will see how to return
//arrays from a function. The logic is a little similar to returning
//objects from a function (P-43).

//Of note, in this same lesson John also indicated that we can create
//variables outside the functions and these variables can be used in any
//function that comes after the declaration.

//Let's create a function to return an array.

//OPTION 1
//The following function would not work, because "return" does not
//work with arrays. Apparently return would try to convert the array
//to a pointer before returning it. But this pointer would then point
//to a variable/array that does not exist outside the scope of the
//function. The program would not compile.
/*
char getChar(){
	char letters[] = {'a', 'b', 'c'};
	return letters;
}
*/

//OPTION 2
//This second function could work, but it is not at all a good option.
//Here we are indeed using a pointer, but it is pointing to an array that
//will be deleted at the end of the function. So, outside the scope
//of the function, the pointer will be pointing to an array that does
//not exist. We should not pass this pointer to the main() function.
//LESSON: Do not declare pointers to local variables.
/*
char *getChar2(){
	char letters[] = {'a', 'b', 'c'};
	char *pLetters = letters; (optional)
	return pLetters;
}
*/

//OPTION 3
//So, the best way would be this third option. Here we are also
//using pointers. But, as we have seen before, the pointer to the
//array is being created with the "new" operator, which guarantees
//that the array will *not be destroyed* at the end of the function.
//This means it will be available outside the scope of the function,
//to be used, for instance, in the main function.
char *getChar3(){
	char *pLetters2 = new char[3];
	pLetters2[0] = 'a';
	pLetters2[1] = 'b';
	pLetters2[2] = 'c';
	return pLetters2;
}

void deleteLetters(char *pLet){
	delete [] pLet;
}

int main() {

	//Now, we can pass the "pointer to the array" from the getChar3()
	//function to a new pointer in the main function.
	char *pLetters3 = getChar3();
	//And we can output the array;
	for (int i=0; i<3; i++){
		cout << pLetters3[i] << endl;
	}

	//Because the memory was allocated with "new", the array will not
	//be automatically destroyed, so we must remember to destroy it
	//with "delete", to free the memory.
	//delete pLetters3;

	//Alternatively, we could use a function that does the job of
	//deleting the pointer the pointer.
	//This is a common practice in C++:
	deleteLetters (pLetters3);

	//Repeating the steps without the comments:
	cout << "------------" << endl;
	char *pLetters4 = getChar3();
	for (int i=0; i<3; i++){
		cout << pLetters4[i] << endl;
	}
	deleteLetters (pLetters4);

	//NOTE:
	//Because in this example we are creating an array of chars
	//with "new" and the size of char is 1 byte, this is a common
	//strategy to allocate memory in the heap, with a precise number
	//of bytes. The number of bytes allocated will be exactly the
	//number of chars in the created array.
	//The function used to delete the array is then freeing that
	//precise number of bytes from the memory.
	//That is why (I believe), in the video, John gives their functions
	//the names getMemory() and freeMemory() to create and destroy
	//the char array, respectively.

	return 0;
}
