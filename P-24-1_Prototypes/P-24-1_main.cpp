//P-24-1_Prototypes
//In this project: how to use prototypes of a function

//I copied the code from last lesson to understand the concept of prototypes

//If we try to call a function inside main function, before it has been
//implemented, we get an error from the compiler, because the program will
//not have seen any function with that name before the main.
//However, if we create a dummy function (only the name without the code inside)
//in the beginning of the script, the compiler will be satisfied with it
//and it will "trust" that we will implement the proper function somewhere else.
//This dummy function with only the name and parameters, to satisfy the compiler,
//is called a prototype.

#include <iostream>
using namespace std;

//Prototypes
int obtainAnswer();
void processingAnswer(int var);

//Here I define prototypes of the functions "obtainAnswer" and
//"processingAnswer", and this is enough to eliminate the warnings of
//the compiler when I use them in the main function.
//The proper implementation of the functions is done somewhere else. In this case
//we implement them in the bottom of the code, below the main.
//Note however, that functions that use parameters must have their
//parameters created in the prototype as well ("int var" in the case of the
//"processingAnswer" function).

int main() {

    int variable3 = obtainAnswer();
    processingAnswer(variable3);

    return 0;
}

//Now I can implement the other functions properly, after the main function.

int obtainAnswer(){
    int variable1;
    cout << "Please write an integer number: " << flush;
    cin >> variable1;
    return variable1;
}

void processingAnswer(int variable2) {
    cout << "You wrote " << variable2 << ". Thank you" << endl;
}
