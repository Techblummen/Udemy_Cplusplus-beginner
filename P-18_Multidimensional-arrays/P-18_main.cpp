//P-18_Multidimensional-arrays
//In this project: working with multidimensional arrays

#include <iostream>
#include <iomanip>   //allows the use of setw()
using namespace std;

int main() {

    string insects[3][2] = {
        {"cockroach", "dragonfly"},
        {"grasshopper", "ladybug"},
        {"beetle", "termite"},
    };

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++){
            cout << insects[i][j] << " " <<flush;
        }
        cout << endl;
    }

    //John's challenge: initialize and print an array with the muliplication
    //table for numbers 1 to 10, each number in a single line

    //Defining the array
    int mult[10][10];
    //Assigning values with a nested loop (loop inside another loop)
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            mult[i][j] = (i+1)*(j+1);
        }
    }
    //Outputting the values
    cout << endl << "Multiplication table" << flush;
    cout << endl << "--------------------" << endl;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << setw(4) << mult[i][j] << " " << flush;
        }
        cout << endl;
    }
    //setw() was used for cleaner formatting of the table

    return 0;
}

