//P-06_Floating-point-types
//In this project: working with floating point numbers

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float fvalue = 76.4;
    //So, floating point is a number that is not an integer,
    //with decimal places different than zero.
    cout << "Different ways of outputting the same float variable:" << endl;
    cout << fvalue << endl;
    cout << fixed << fvalue << endl; //Output with several decimal places (pre-defined number of places)
    cout << scientific << fvalue << endl; //Output with scientific notation
    cout << "Size of float is: " << sizeof(float) << endl;

    cout << endl << "Same variable, with a defined number of decimal places:" << endl;
    cout << setprecision(20) << fixed << fvalue << endl;
    //Only the first 5 digits are correct, the other are filled randomly
    //This is because floats do not store more than 5 decimal places so
    //the remaining places are filled with trash from memory

    double dvalue = 12.123456789;
    cout << endl << setprecision(20) << fixed << dvalue << endl;
    cout << "Size of double is: " << sizeof(double) << endl;
    //Double stores more bytes, so it is better to deal with more
    //decimal places. Now, all the 9 decimal places are correct and
    //the rest is filled with trash

    long double Lvalue = 12.123456789123456789;
    cout << endl << setprecision(20) << fixed << Lvalue << endl;
    cout << "Size of long double is: " << sizeof(long double) << endl;
    //Long double stores even more bytes, for processes that require even more precision
    //But long double did not work (only 9 correct decimal places).
    //It seems long double works poorly on MinGW and Windows. Better to avoid it.

    return 0;
}
