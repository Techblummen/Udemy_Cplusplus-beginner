//P-08_If
//In this project: conditional instructions with the "if" instruction

#include <iostream>
using namespace std;

int main() {

    string password = "mojo";
    string input;
    cout << "What is the password?" << endl << "Please write it here: " << flush;
    cin >> input;
    cout << "'" << input << "'" << endl;

    if (input == password) {
        cout << "Congrats! You are right!" << endl;
    }
    if (input != password) {
        cout << "Sorry, this is not the right password" << endl;
    }
    cout << endl;

    int code = 1234;
    int input2;
    cout << "What is the code?" << endl << "Please write it here: " << flush;
    cin >> input2;

    if (input2 == code) {
        cout << "Congrats! You are right!" << endl;
    }
    if (input2 != code) {
        cout << "Sorry, this is not the right code" << endl;
        cout << code << endl;
        cout << input2 << endl;
    }

    return 0;
}
