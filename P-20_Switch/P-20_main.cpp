//P-20_Switch
//In this project: working with the switch instruction

#include <iostream>
using namespace std;

int main() {

    int value = 4;

    switch(value){
    case 5:
        cout << "Value is 5" << endl;
        break;
    case 4:
        cout << "Value is 4" << endl;
        break;
    case 6:
        cout << "Value is 6" << endl;
        break;
    default:
        cout << "Unrecognized value" << endl;
    }

    //Important note 1: you should never have a variable as one of the cases e.g.: "case value"
	//It would be possible if it was a constant. (previously defined with "const").
	//Important note 2: always finish the cases with a "break". Failure to do so may create bugs
	//in the code.
	//Important note 3: you do not need to have a "default" case. If it is missing, nothing will
	//be done when no case is met. However, it may be interesting to have a "default" case
	//depending on what you are doing in the program.

	//A trial:
	cout << "---------------" << endl;
	cout << "List of fruits:" << endl;
	string fruits [5] = {"banana", "apple", "grape", "strawberry", "blueberry"};
	for (int i=0; i<5; i++){
		cout << i+1 << ". " << fruits [i] << endl;
	}
	cout << "---------------" << endl;
	cout << "Choose a number to see the fruit's color: " << flush;
	int choice;
	cin >> choice;
	switch(choice){
        case 1:
            cout << "This fruit's color is yellow" << endl;
            break;
        case 2:
            cout << "This fruit's color is red" << endl;
            break;
        case 3:
            cout << "This fruit's color is purple" << endl;
            break;
        case 4:
            cout << "This fruit's color is red" << endl;
            break;
        case 5:
            cout << "This fruit's color is blue" << endl;
            break;
        default:
            cout << "Not a valid number" << endl;
	}

    return 0;
}

