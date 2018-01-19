//P-10_If-else-if
//In this project: the "else if" instruction

#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "1.\tBanana" << endl;
    cout << "2.\tApple" << endl;
    cout << "3.\tOrange" << endl;
    cout << "4.\tGrape" << endl;
    cout << "5.\tLettuce" << endl;
    cout << "Which of the above options is NOT a fruit?" << endl;
    cout << "Write the corresponding number here: " << flush;

    cin >> choice;
    cout << endl;

    if (choice == 1){
        cout << "Banana is a fruit. Wrong answer." << endl;
    } else if (choice == 2){
        cout << "Apple is a fruit. Wrong answer." << endl;
    } else if (choice == 3){
        cout << "Orange is a fruit. Wrong answer." << endl;
    } else if (choice == 4){
        cout << "Grape is a fruit. Wrong answer." << endl;
    } else if (choice == 5){
        cout << "Correct answer!" << endl;
    } else {
        cout << "Invalid option..." << endl;
    }

    return 0;
}

