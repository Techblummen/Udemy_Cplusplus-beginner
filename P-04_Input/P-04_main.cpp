//P-04_Input
//In this project: basic input

#include <iostream>
using namespace std;

int main() {

    string text;
    cout << "Who are you?" << endl << "Please write your name here:" << flush;
    cin >> text;
    cout << "Nice to meet you, " << text << "!" << endl;
    cout << endl;

    int age;
    cout << "How old are you" << endl << "Please write your age here: " << flush;
    cin >> age;
    cout << "So you are: " << age << " years old. Great!" << endl;


    return 0;
}
