//P-07_Other-var-types
//In this project: working with bool, char, wchar_t and casting

#include <iostream>
using namespace std;

int main() {

    bool bvalue = true;
    cout << "Bool stores only true and false in the form of 0 and 1" << endl;
    cout << "My variable is set to true, so its value is: " << bvalue << endl;
    cout << endl;

    char cvalue = 'K'; //char values must be written with single inverted commas
    cout << "This is the actual character: " << cvalue << endl;
    cout << "This is the code of the character in the ASCII table: " << (int)cvalue << endl;
    cout << "This is the size of the variable char: " << sizeof(char) << " byte(s)" << endl;
    cout << endl;

    char cvalue2 = 120;
    cout << "The char number " << (int)cvalue2 << " is: " << cvalue2 << endl;
    char cvalue3 = 122;
    cout << "The char number " << (int)cvalue3 << " is: " << cvalue3 << endl;
    char cvalue4 = 127;
    cout << "The char number " << (int)cvalue4 << " is: " << cvalue4 << endl;
    cout << "Char number " << (int)cvalue4 << " did not work because it is no a printable char" << endl;
    cout << endl;

    wchar_t cvalue5 = 176;
    cout << "The wchar_t character for code " << cvalue5 << " is: " << (char)cvalue5 << endl;
    cout << "The variable wchar_t has a size of: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "So, wchar_t, can store more characters than the regular char" << endl;
    //In Wikipedia it says that we should avoid wchar_t, because its size depends on the compiler.
    //It is, therefore, not a good variable to use in portable programs.

    return 0;
}
