//P-41_Copy-constructors
//In this project: use of copy constructors

#include <iostream>
using namespace std;

//Whenever we instantiate an object from a class, assigning to it
//another existing object, an automatic constructor is executed, to
//copy the instance variable values from the existing object into
//the new object.
//This automatic constructor is called a "copy constructor".

//As we will see in the lesson, we can actually create our own custom
//copy constructor to make the actions we desire when we create
//a new object from an existing one.

//First, let's copy the class from last lesson and add a generic
//constructor and a copy constructor, detailed below.
class Dog {
private:
	string name;
public:
	Dog() {cout << "Creating a new dog." << endl;};//generic constructor
	Dog (const Dog& obj): name(obj.name){cout << "Dog created by copying" << endl;}; //copy constructor
	void setName (string name) {this->name = name;};
	void speak() const {cout << "Hi! My name is " << name << "." << endl;}
};

int main() {

	//Here, we instantiate an object and define its name with the method
	//"setName".
	Dog dog1;
	dog1.setName ("Guliver");
	//Then, we instantiate a second object (dog2) and equals to it the first
	//object (dog1);
	Dog dog2 = dog1;

	dog1.speak();
	dog2.speak();
	//When we execute the method "speak()", we see that both objects have
	//the same value of the instance variable "name", because one was copied
	//from the other.

	//We can change the "name" variable of the second object, without affecting
	//the first one, demonstrating that they are two independent entities:
	cout << "-----------------" << endl;
	dog2.setName("Darwin");
	dog1.speak();
	dog2.speak();

	//If we create a "dummy" constructor within the class, just to check whenever
	//a new object is created, we will see, however, that the constructor only
	//executes when the first object is created. It does not execute while
	//creating the second object (copied from the first object).
	//This is because a hidden constructor is automatically executed
	//whenever we create an object from another existing object. This "copy
	//constructor" is a default and it copies the instance variables / fields(?)
	//from the existing object into the new object being created.

	//We can create our own copy constructor, to substitute the automatic one.
	//It will be executed whenever we create a new object assigning to it
	//an already existing object.
	//The copy constructor is created just like any other, as a method in the
	//class, with the same name as the class and without a return type (void,
	//string, int, etc).
	//The particularity of the copy constructor is that it uses an existing
	//object as a parameter. Of note the parameter must be written with "const"
	//in front of it by convention, to prevent the existing object from being
	//changed in any way by the copy constructor.
	//E.g.: Dog(const Dog& obj) {actions of the constructor);.
	//The above line uses as parameter a const reference to an object "obj" of
	//the type (class) "Dog".
	//See that the class name must be succeeded by an ampersand (&) in the parameter.

	//The custom copy constructor can use an existing object, as well as its
	//methods and variables.
	//However, because the object used as a parameter is preceded by "const",
	//only the methods that start with const can be used within the copy
	//constructor (see last lesson for details on methods with "const"). Attempt
	//to use non-const methods will fail to compile the program.
	//Moreover, the copy constructor cannot change any instance variable of
	//the existing object. Attempt to do so will fail to compile the program.

	//Example of a dummy copy constructor that allows us to see when an
	//object is created from another object:
	//Dog(const Dog& obj) {cout << "Dog created by copying" << endl;};
	//Note that with a copy constructor like this one, the new object created
	//will not have any values for the instance variable "name", because we
	//overrode the original automatic copy constructor that would copy the
	//variable "name" from the existing object into the new object.

	//To create a copy constructor that acts just as the automatic one, we must
	//write in the code that the value of instance variable "name" from the
	//existing object is to be assigned to the instance variable "name" of the
	//object being created.
	//E.g.: Dog(const Dog& obj) {name = obj.name; cout << "Dog created by copying" << endl;};
	//Actually, the easiest and most recommended way of doing this is by using
	//the constructor initialization syntax:
	//Dog(const Dog& obj): name(obj.name){cout << "Dog created by copying" << endl;};

	//In case we want to create an object from another object, we can do it
	//in two ways. The first way, as written above, uses the equals sign.
	cout << "-----------------" << endl;
	Dog dog3 = dog1;
	//This syntax is automatically programmed to evoke the copy constructor.
	//The second way is to instantiate the new object with an existing object
	//as a parameter. As we have seen before, C++ will see that we used an
	//object as a parameter and will automatically execute the only constructor
	//that uses objects as parameters. i.e., the copy constructor.
	Dog dog4(dog2);
	dog3.speak();
	dog4.speak();

	return 0;
}
