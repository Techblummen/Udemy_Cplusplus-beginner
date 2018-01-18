//P-01_Variables
//In this project: basics on variables

#include <iostream>
using namespace std;

int main() {

    int numberFingers = 10;
    int numberToes = 10;
    int numberTotal = numberFingers + numberToes;
    int newFingers = 1;

    cout << "Original status" << endl;
    cout << "Number of fingers: " << numberFingers << endl;
    cout << "Number of toes: " << numberToes << endl;
    cout << "Total: " << numberTotal << endl;
    cout << endl;
    cout << newFingers << " new finger(s) found!" << endl;
    numberFingers = numberFingers + newFingers;
    cout << "New number of fingers: " << numberFingers << endl;
    numberTotal = numberFingers + numberToes;
    cout << "New total: " << numberTotal << endl;

    return 0;
}
