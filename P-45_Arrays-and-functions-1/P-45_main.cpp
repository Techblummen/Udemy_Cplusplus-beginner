//P-45_Arrays-and-functions
//In this project: how to pass arrays to functions

#include <iostream>
using namespace std;

//In this first part of the lesson, we are going to learn how to pass
//arrays to functions. In the second part, we will see how to return arrays
//from functions.

//Let's first create the functions that will use an array as their parameter
//and then output the array with a for() loop.
//The specificities of each function will be further discussed as they are
//used in the main() function.

void show1(string texts[]){
	for (int i=0; i<3; i++){
		cout << texts[i] << endl;
	}
	cout << "Size of 'texts' inside function 1 is: " << sizeof(texts) << endl;
	//texts[2]= "grape";
	//this last line tests if we are working with the original array or a copy

}

void show2(const int nElements, string texts[]){
	for (int i=0; i<nElements; i++){
		cout << texts[i] << endl;
	}
	cout << "Size of 'texts' inside function 2 is: " << sizeof(texts) << endl;
}

void show3(string (&texts)[3]){
	for (int i=0; i<sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << endl;
	}
	cout << "Size of 'texts' inside function 3 is: " << sizeof(texts) << endl;
}


int main() {

	//Here is the array of strings that we will use with the functions:
	string texts[] = {"apple", "orange", "banana"};
	cout << "Size of the original array is: "<< sizeof(texts) << endl;
	string *pTexts = texts;
	cout << "Size of a pointer to the array is: "<< sizeof(pTexts) << endl;


	//------------------------------------------------------------------------
	//Let's see how the first function "show1" works:
	cout << "------------------------------------" << endl;
	show1(texts);
	//The function outputs the array as expected. Notice, however that
	//the size of "texts" in the function is NOT the size of the original
	//array. This is because if we pass a whole array as a parameter, the
	//function will actually use a pointer to the array. To confirm this,
	//check that the size of "texts" within the function is equivalent to the
	//size of "pTexts", which is a pointer to the original array.
	//So, the same function could also be written as:
	//void show1(string *texts){...}
	//Therefore, with this function show1, we lose the information of size,
	//and we cannot, for instance, use sizeof(texts) to iterate through the
	//array within the function using a for() loop, as we did before in other
	//lessons with arrays in the main() function.
	//Even if we write the parameter with the number of elements...
	//"void show1(string texts[3])
	//...the function will ignore this size information and will only use the
	//pointer. So, any number could in theory be written within the "[]".


	//------------------------------------------------------------------------
	//Let's see how the second function "show2" works.
	//At first, we need to store the number of elements of the array.
	//in a separate integer variable.
	cout << "------------------------------------" << endl;
	int nElements = sizeof(texts)/sizeof(string);
	//The function show2 uses this information as a second parameter;
	show2(nElements,texts);
	//With this strategy, we escaped the problem of losing the size
	//information of the array, by adding it to the function as a new
	//parameter. We can then iterate through the array within the function
	//using the parameter nElements in the for()loop.
	//Note that this does not change the fact that, inside the function,
	//"texts" is still just a pointer.


	//------------------------------------------------------------------------
	//Let's see now how the third function "show3" works.
	cout << "------------------------------------" << endl;
	show3(texts);
	//This function is as good as the others in outputting the array. Note,
	//however, that now the size of "texts" in the function is the
	//original size of the array passed to the function. So, in this case
	//we are not working with a pointer, but with the array itself. We can
	//use sizeof(texts) to iterate through the array within the function.
	//---------------------------------------------------------------------
	//The array in this case is passed to the function as a reference, with
	//the ampersand (&) symbol.
	//Take a close look at the function declaration to see that in this
	//syntax we must write the "&" and the parameter within brackets "(& texts)"
	//before the "[]" with the number of elements of the array.
	//If we forget the curly brackets "& texts[3]" we will create an array
	//of references, which is not what we are looking for.
	//In this case, different from the other functions, it is actually important
	//to write the right size of the array within the "[]" in the parameter. The
	//wrong number will give a warning and the program will not compile.


	return 0;
}
