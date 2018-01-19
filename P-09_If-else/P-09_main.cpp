//P-09_If-else
//In this project: the "else" instruction

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

    if (choice < 5){
        cout << "Wrong answer." << endl;
    } else {
        cout << "Correct answer!" << endl;
    }

    return 0;
}
