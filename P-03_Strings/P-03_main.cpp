//P-03_Strings
//In this project: strings

#include <iostream>
using namespace std;

int main() {

    string str1 = "My name is ";
    string myName = "Gaga";
    string str2 = "My name is not ";
    string notMyName = "John";

    cout << str1 << myName << endl;
    cout << str2 + notMyName << endl;

    //Notice that we can concatenate string variables
    //in the output, using 2 different strategies

    return 0;
}
