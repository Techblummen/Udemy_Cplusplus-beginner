//P-16_Break-and-continue
//In this project: working with the break and continue instructions within loops

#include <iostream>
using namespace std;

int main() {

    for (int i=0; i<5; i++){
        cout << "i is " << i << endl;
        if (i==3){
            continue;
        }
        cout << "  Once again" << endl;
    }
    //"Continue" skips the remaining part of the loop and goes to the next iteration.

    cout << endl;
    for (int i=0; i<5; i++){
        cout << "i is " << i << endl;
        if (i==3){
            break;
        }
        cout << "  Once again" << endl;
    }
    //"Break" gets out o the loop if/when the code gets to that point, without the need
    //for any extra condition

    cout << endl;
    const string animal = "cat";
    string answer;

    do{
        cout << "What pet does Helena have?" << endl << "Write here: " << flush;
        cin >> answer;
        if (answer != animal){
            cout << "Wrong answer, please try again" << endl;
        } else {
        break;
        }
    } while (true);

    cout << "Correct answer!" << endl;
    //Here, a do-while loop is used to understand the use of "break". This do-while loop would be
	//infinite, because the "while" condition is always true. However, with the if and break, we make
	//the loop stop when the answer to the question is correct.

    return 0;
}

