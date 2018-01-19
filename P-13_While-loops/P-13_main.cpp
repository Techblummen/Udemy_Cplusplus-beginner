//P-13_While-loops
//In this project: working with while loops

#include <iostream>
using namespace std;

int main() {

    int i = 0;
    while (i<5) {
        cout << "Hello number " << i << endl;
        i++; //This increments the variable "i" in 1 unit (equivalent to "i = i + 1")
    }

    int answer;
    cout << "How many hello's have been printed?" << endl << "Please write here: " << flush;
    cin >> answer;

    while (answer != 5){
        cout << "Wrong answer. Try again: " << flush;
        cin >> answer;
    }
    //While the answer is not correct (5), the loop will keep running

    cout << "That is corect!" << endl;

    return 0;
}

