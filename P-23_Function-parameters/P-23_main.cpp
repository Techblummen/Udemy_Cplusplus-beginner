//P-23_Function-parameters
//In this project: how to pass parameters to a function

//Now we are going to use functions that require a value obtained outside the
//scope of that function. To do that we first use a separate function to obtain
//the value. Then we get that value into a new variable inside main.
//Finally, we use that value as a parameter of the second function, inside the main.
//It is similar to using function arguments in R.

#include <iostream>
using namespace std;

//Our first function obtains the user input

int obtainAnswer(){

    int variable1;
    cout << "Please write an integer number: " << flush;
    cin >> variable1;
    return variable1;

}

//The second function receives a non-defined value (variable3) as its parameter.
//It then outputs to the user the value given to that parameter.
//Notice that the parameter type must be declared between the parenthesis.

void processingAnswer(int variable2) {

    cout << "You wrote " << variable2 << ". Thank you" << endl;

}

//Then, we use both functions together in the main.
//First, we get the result of the first function, store it
//into a new variable and, then, use that stored value as a parameter
//of the second function.
//This process is called "passing" a variable.

int main() {

    int variable3 = obtainAnswer();
    processingAnswer(variable3);

    return 0;
}

