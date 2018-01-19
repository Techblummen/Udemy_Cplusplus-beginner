//P-12_Complex-conditions
//In this project: how to deal with multiple logical operations
//within the "if" instruction

#include <iostream>
using namespace std;

int main() {

    int value1 = 10;
    int value2 = 14;

    if (value1 == 10){
        cout << "Condition 1: true" << endl;
    } else {
        cout << "Condition 1: false" << endl;
    }

    if (value1 == 10 && value2 == 13){
        cout << "Condition 2: true" << endl;
    } else {
        cout << "Condition 2: false" << endl;
    }

    if (value1 == 10 || value2 == 13){
        cout << "Condition 3: true" << endl;
    } else {
        cout << "Condition 3: false" << endl;
    }

    //With the && (and) operator, the computer evaluates both conditions and only returns TRUE
	//if both are correct.
	//With the || (or) operator, both conditions are evaluated as well, but it returns TRUE
	//if either of them is correct, even if the other one is not.

    bool cond1 = (value1 == 10);
    bool cond2 = (value2 == 13);

    if (cond1 && cond2){
        cout << "That's right!" << endl;
    } else{
        cout << "That's incorrect" << endl;
    }

    if (cond1 || cond2){
        cout << "That's right!" << endl;
    } else{
        cout << "That's incorrect" << endl;
    }

    /* One strategy to make the code easier to read and troubleshoot is to store conditions in
	 * boolean variables and then use these variables within the if functions. Especially with long and
	 * compound conditions, the use of variables makes it easier to understand the code step
	 * by step. */

    return 0;
}

