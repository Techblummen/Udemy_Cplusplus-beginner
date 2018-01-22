#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string newName) {name = newName; age = 0;};
	Person(string newName, int newAge);
	string toString();
};

//Three different constructors were defined with the same name Person().
//They differ only in the parameters they use, and this is enough for the
//program to automatically choose between them, depending on which variable
//types we use during object instantiation.
//Note that the second constructor is implemented here in the header file,
//instead of in the separate .cpp file with the other methods. This should
//only be done if the method has very little code.

#endif /* PERSON_H_ */
