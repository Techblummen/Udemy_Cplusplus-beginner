//P-21_Functions
//In this project: working with functions

//Functions are basically pieces of code that are defined somewhere else in the script,
//outside the "main". And this block of code can then later be "called" (used) inside
//the "main", as many times as you need.
//In this first example, the function is implemented (created) with the command "void".
//It can be later called just by typing its name. Importantly, you can only call it
//if it has already been implemented earlier (upper) in the code.

#include <iostream>
#include <iomanip>   //allows the use of setw()
using namespace std;

void multTable() {

    //I copied in this function some code from another project

    int mult[10][10];
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            mult[i][j] = (i+1)*(j+1);
        }
    }

    cout << endl << "Multiplication table" << flush;
    cout << endl << "--------------------" << endl;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << setw(4) << mult[i][j] << " " << flush;
        }
        cout << endl;
    }

}

//Now I can "call" that function inside the "main", to execute its code
int main() {

    multTable();

    return 0;
}

