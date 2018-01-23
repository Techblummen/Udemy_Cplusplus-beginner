//P-48-Inheritance
//In this project: concept of inheritance

#include <iostream>
using namespace std;

//Whenever you wish to create a new class that has the same
//functionalities of an already existing class. You can create
//a "subclass" that inherits the methods of the existing one.

//New functionalities and some changes can later be made to the
//the subclass, so that it "extends" the functions of the original
//class. The original class, relatively to the subclass, is called
//a "superclass".

//Let's create some classes here to illustrate the process:

//First, we create a class of a generic animal
class Animal{
public:
	void move() {cout << "Animal moving" << endl;};
};

//Then, we create a subclass "Mammal", that is inherited from "Animal"
class Mammal: public Animal {
public:
	void piloErection() {cout << "Erecting the hair" << endl;};
};
//Notice the syntax: we must write ": public" and the name of
//the superclass from which the new class will be inherited.

//Finally, we create a subclass from "Mammal", called "Dog"
class Dog: public Mammal{
public:
	void bark() {cout << "Auauau" << endl;};
};

int main() {

	Animal a;
	a.move();
	cout << "-------------" << endl;

	Mammal m;
	m.move();
	m.piloErection();
	cout << "-------------" << endl;

	Dog d;
	d.move();
	d.piloErection();
	d.bark();

	//Here, we created "Mammal" as a subclass from "Animal". "Mammal"
	//can use the methods contained in "Animal" (move), as well as the
	//particular methods of "Mammal" (piloErection). So, "Mammal" is a
	//subclass that extends "Animal".

	//Likewise, "Dog" is a subclass from "Mammal" and also indirect
	//subclass from "Animal" (because "Mammal" is a subclass of "Animal").
	//Therefore, "Dog" can execute all the methods from "Animal" and
	//"Mammal", as well as its own method (bark).

	//There is a hierarchy of classes.

	return 0;
}
