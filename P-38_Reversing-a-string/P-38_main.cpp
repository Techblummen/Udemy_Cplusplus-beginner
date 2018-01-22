//P-38_Reversing-a-string
//In this project: using pointers to reverse a string.

#include <iostream>
using namespace std;

int main() {

	char texts[] = "contentamento";
	//First, we create a character string and store in a char array.
	int nChar = sizeof(texts)-1;
	//And we create an int variable to store the size of this array
	//(discounting the last '0' character).

	char *pStart = texts;
	char *pEnd = texts + nChar -1;
	//Then we create pointers that point to the first and last
	//elements of the character array.

	//Next, we will try to reverse the string by reversing
	//the content of the memory locations within the char array.
	//We can do that referring to the pointers of the memory locations
	//of the array.

	//One of the ways of doing the reversion is with a while loop.
	//The principle of the process is the following. Initially we reverse
	//the content of the pointers that point to the first and last elements
	//of the array. So, the extremes of the arrays are reversed.
	//Then, we increment the first pointer and decrement the last pointer,
	//so that they are now pointing to the second and to the second last
	//elements, respectively. We next reverse the contents of the two
	//pointers again, which will reverse the content in the memory locations.
	//This process is repeated, bringing the pointers closer together at each new
	//turn of the loop, until they meet in the middle (until pStart is not
	//smaller than pEnd anymore).

	cout << "--------------" << endl;
	cout << "The original string is:" << endl;
	cout << texts << endl;

	while (pStart < pEnd) {

		//The following lines will do the reverse of the content of the
		//pointers. Note that we must create an intermediate variable
		//(save) so that we do not lose the value of one of the pointers.
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		//After the reversal, at each new iteration of the loop,
		//the first pointer is incremented and the last pointer
		//is decremented.
		*pStart++; //Starting pointer incremented in 1
		*pEnd--; //Ending pointer decremented in 1

		//When pStart is incremented and pEnd is decremented to
		//the point that pStart is no longer smaller than pEnd,
		//the loop will break. "while (pStart < pEnd)"

	}

	cout << "--------------" << endl;
	cout << "The reversed string is:" << endl;
	cout << texts << endl;


	return 0;
}
