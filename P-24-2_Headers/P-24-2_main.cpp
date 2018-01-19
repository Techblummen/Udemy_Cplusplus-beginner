//P-24-2_Headers
//In this project: how to work with headers and header files

//Once again, I copied the code from a previous lesson to understand
//the concept of headers.
//In the last project we understood prototypes, which are dummy/empty functions
//defined before the main function. They allow us to call functions inside
//the main function before having written them properly/fully, without getting a
//warning from the compiler. These same functions are then properly implemented
//(with the full code) somewhere else, for example, after the main function.

//Here we will see that these prototypes can be written in a separate file and
//called into the present file, in the beginning of the code. This separate file
//is named "header file" and has a ".h" extension.
//The header must be first created as a .h file and then it can be called in the
//preset code with the use of "#include". This command includes the piece of code
//from a separate file and pastes it into the present code. Note that this command
//does not require a semicolon at the end, because "#include" is a "directive", an
//instruction to the pre-processor, that is executed before the compiler actually
//transforms the code into machine language (binary code).

//Here, we first create a header file with the prototypes of the functions
//"int obtainAnswer()" and "void processingAnswer(int var)". In eclipse this
//is done by right-clicking the source (src) folder of the project, then "new",
//then "other" and under "C++ project" select "Header file". The file name
//must end with the extension ".h"

//I created the file "utils.h" and pasted in it the prototypes of the
//functions "obtainAnswer()" and "processingAnswer()".

#include <iostream>
#include "utils.h"
using namespace std;

//Then, after the "#include <iostream>" and before the "use namespace std" we
//include the header file "utils.h" with the prototypes of the functions.
//This is as if I had pasted the prototypes themselves here.
//There is no a priori difference between using "" or <> with the #include, but
//by convention we use "" for pieces of code that are part of the present
//project (e.g. utils.h) and <> for pieces of code that are stored in a special
//standard location in the computer (e.g. iostream).

int main() {
    int variable3 = obtainAnswer();
    processingAnswer(variable3);
    return 0;
}

//The complete functions remain here, after the main.
int obtainAnswer(){
    int variable1;
    cout << "Please write an integer number: " << flush;
    cin >> variable1;
    return variable1;
}

void processingAnswer(int variable2) {
    cout << "You wrote " << variable2 << ". Thank you" << endl;
}
