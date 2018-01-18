//P-05_Integer-types
//In this project: working with integers, type modifiers and sizeof()

#include <iostream>
#include <limits.h> //not required in my computer to show INT_MAX and variants
using namespace std;

int main() {

    cout << "Trying to store and output number 3475932749 in different interger types" << endl << endl;

    cout << "1st try: integer" << endl;
    int value = 3475932749;
    cout << value << endl;
    cout << "Did not work, because max int value is " << INT_MAX << endl;
    cout << "Also, minimum int value is " << INT_MIN << endl;

    cout << endl << "2nd try: long integer" << endl;
    long int lvalue = 3475932749;
    cout << value << endl;
    cout << "This does not work either, because max long int value is " << LONG_MAX << endl;
    cout << "So, for my system, max int (" << INT_MAX << ") equals max long int (" << LONG_MAX << ")" << endl;

    cout << endl;
    cout << "Size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int is " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int is " << sizeof(long int) << " bytes" << endl;

    cout << endl << "3rd try: unsigned integer" << endl;
    unsigned int uvalue = 3475932749;
    cout << uvalue << endl;
    cout << "Now it works, because max unsigned int is " << UINT_MAX << endl;

    return 0;
}
