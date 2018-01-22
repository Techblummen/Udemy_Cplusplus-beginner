//P-42_The-new-operator
//In this project: how the "new" operator works

#include <iostream>
using namespace std;

//It will be used in a particular syntax with which we can instantiate
//objects from a class, into a pointer.
//Objects instantiated with this syntax (with a pointer) are not
//automatically destroyed at the end of the main function (or at the
//closest closing curly bracket). For that reason, a specific command
//"delete" must be used at the end of the program to deallocate the
//memory assigned to that object.

//First, let's copy the class from last lessons, including in it a
//constructor and a destructor, to evaluate whenever objects are
//instantiated or destroyed.

class Dog {
private:
	string name;
public:
	Dog() {cout << "Creating a dog" << endl;} //constructor
	~Dog() {cout << "Destructor was called" << endl;} //destructor
	void setName(string name) {this->name = name;} //defines "name"
	void speak() {cout << "Hi! My name is " << name << endl;} //outputs "name"
};

int main() {

	//Curly brackets are only used here around the code lines, so that we can
	//see when the object is destroyed (calling the destructor).
	{
		Dog dog1;
		dog1.setName("Freddy");
		dog1.speak();
	}
	//This is the way we have been instantiating objects from a class
	//so far. Note that in the output screen, both the constructor and
	//the destructor are called, indicating that the object was created
	//and automatically destroyed at the end of the curly brackets.

	cout << "-----------------" << endl;

	{
		Dog *pDog2 = new Dog();
		pDog2->setName("Lucas");
		pDog2->speak();
		delete pDog2;
	}
	//This is how we can instantiate an object into a pointer, by means
	//of the operator "new".
	//Notice that later on, in order to call the methods using the pointer,
	//we do not use a period (.). Instead, we use the arrow (->) operator
	//between the name of the pointer and the method. It is the same
	//operator we have seen before with "this".

	//The same result could be achieved with ".", but in a less elegant way:
	cout << "-----------------" << endl;
	{
		Dog *pDog3 = new Dog();
		(*pDog3).setName("Garry");
		(*pDog3).speak();
		delete pDog3;
	}
	//In this case, the dereferenced pointer (*pDog3) must be written within
	//brackets, because the period (.) has higher precedence than the
	//dereferencing operator (*). Without brackets, we should obtain an
	//undesired result.

	//Note that in the last line, we must destroy the object "manually" with
	//the "delete" operator. Objects instantiated into pointers will NOT
	//be automatically destroyed at the closest closing curly bracket.
	//IMPORTANT: one common source of error in C++ is forgetting to destroy
	//objects created with "new". For every "new" we must have a correspondent
	//"delete" in the program. Otherwise, the computer memory will keep storing
	//some data that is not being used anymore.

	return 0;
}
