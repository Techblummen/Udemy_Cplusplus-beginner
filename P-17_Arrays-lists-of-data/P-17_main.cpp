//P-17_Arrays-lists-of-data
//In this project: working with an array

#include <iostream>
using namespace std;

int main() {

    cout << "Array of integers" << endl;
    cout << "-----------------" << endl;
    int values[4];   //creates an array of 4 elements
    values[0] = 0;   //sets the values of the first element of the array (element "0")
    //The references (indexes) to the elements  always start at zero and end at the
    //number of elements minus 1
    values[1] = 7;   //sets the values of the second element of the array (element "1")
    values[2] = 9;   //sets the values of the third element of the array (element "2")
    values[3] = 10;   //sets the values of the fourth/last element of the array (element "3")

    for (int i=0; i<4; i++){
        cout << "Integer " << i << ": " << values[i] << endl;
    }
    //You can only output one element of the array at a time.
    //To output all the elements in a sequence, you can use a loop and increment the
    //index[i] at each iteration of the loop.

    cout << endl <<  "Array of doubles" << endl;
    cout << "----------------" << endl;
    double values2[5] = {1.1, 2.2, 3.1, 4.1, 5.1};
    //You can set the values of the elements already while declaring the array
    for (int i=0; i<5; i++){
        cout << "Double " << i << ": " << values2[i] << endl;
    }

    cout << endl <<  "Array of strings" << endl;
    cout << "----------------" << endl;
    string phrases[] = {"bla", "ble", "blu"};
    //If you define the elements as you declare the array, you do not need to indicate
    //the number of elements within the brackets "[]".
    for (int i=0; i<3; i++){
        cout << "Sting " << i << ": " << phrases[i] << endl;
    }

    cout << endl << "The 12x table" << endl;
    cout << "----------------" << endl;
    int table12[13];
    //You can use a for loop to assign values to the array...
    for (int i=0; i<13; i++){
        table12[i] = 12*i;
    }
    //..and to output them
    for (int i=0; i<13; i++){
        cout << "12 x " << i << " = " << table12[i] << endl;
    }

    return 0;
}

