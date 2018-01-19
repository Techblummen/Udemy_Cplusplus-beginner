//P-14_Do-while-loops
//In this project: working with Do-while loops and const

#include <iostream>
using namespace std;

int main() {

    const string animal = "cat";
    //The "const" is used when a variable is not to be changed later in the code

    string answer;

    //Do-while loops are different than regular while loops because they execute
    //the loop t least once, even if the condition is not met (not true)
    do{
        cout << "What pet does Helena have?" << endl << "Write here: " << flush;
        cin >> answer;
        if (answer != animal){
            cout << "Wrong answer, please try again" << endl;
        }
    } while (answer != animal);

    cout << "Correct answer!" << endl;

    return 0;
}

