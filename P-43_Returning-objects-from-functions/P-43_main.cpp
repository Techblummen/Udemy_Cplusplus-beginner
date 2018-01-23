//P-43_Returning-objects-from-functions
//In this project:how to return an object from a function

#include <iostream>
using namespace std;

//Objects instantiated within a function can be returned to be used
//outside the scope of the function.
//We can return it like we did in "P-22_Return-values" when we wanted to
//just return a value from a function. The problem is that this strategy
//of passing the object creates, at the end, three copies of the object.

//A more elegant way of doing this is by instantiating the object within
//the function into a pointer (like we saw in the last lesson) and then
//returning this pointer to use in the main function. A clear advantage
//in this case is that in the whole processes we are referring to the same
//memory location, not to copies of the object that would occupy unnecessary
//amounts of memory.

//Let's first declare here the same example class we have been using in
//the last lessons, with a constructor, a copy constructor, a destructor
//and the other methods of the class.
class Dog {
private:
	string name; //instance variable
public:
	Dog() {cout << "Dog created" << endl;} //constructor
	Dog (const Dog& obj): name(obj.name) {cout << "Dog created by copying" << endl;} //copy constructor
	~Dog() {cout << "Destructor called" << endl;} //destructor
	void setName(string name) {this->name = name;} //sets the value of the instance variable
	void speak() {cout << "Hi, my name is: " << name << endl;} //returns the value of the instance variable
};

//Now, let's create a function in which we instantiate an object from
//our class. And we should return this object at the end of the function,
//so that it can be passed to another object in the main function later.
//The function must be of the type "Dog", since it will return a "dog"
//object in the end.
Dog createDogA() {
	Dog dog1;
	dog1.setName("Rufus");
	return dog1;
}

//And let's create a similar function that, instead, instantiates an object
//into a pointer and at the end returns the pointer, to be passed in the main
//function. Note that the type of the function is now a pointer to a "Dog".
Dog *createDogB() {
	Dog *pDog2 = new Dog;
	pDog2->setName("Bob");
	return pDog2;
}

int main() {

	//Curly brackets are only used here around the code lines, so that we can
	//see when the object is destroyed (destructor).
	{
	Dog newDog = createDogA();
	newDog.speak();
	}
	//In this first example, we use the first function (createDogA()), which
	//instantiates an object and sets its name to "Rufus".
	//An object is created within the function. A copy of the resulting
	//object is returned into the main function, because this is how the
	//"return" command operates within the function (createDogA()). Finally,
	//this returned copy is assigned into a new object (newDog).
	//In conclusion, we have created three versions (copies) of the same object
	//in this piece of code. This is not the most efficient way of passing an
	//object from a function into another object.


	//In this second example, we use the function createDogB, which instantiates
	//the object into a pointer. It also sets the "name" variable to "Bob".
	{
	Dog *pNewDog = createDogB();
	pNewDog->speak();
	delete pNewDog;
	}
	//Because we are only using pointers in the whole process, we are actually
	//always referring to the same memory location. We did not have to allocate
	//memory three times for three different copies of the same object.
	//So, this last strategy is preferred, because it is more efficient in terms
	//of memory usage.
	//IMPORTANT: because here the object was instantiated with "new" in the
	//function, we must not forget to use "delete" after the object has been used
	//int the main() function.

	//NOTE1: Of note, some compilers are optimized to recognize the passing of
	//objects and do not create unnecessary copies of the object, even when we
	//use the first strategy (createDogA).

	//NOTE2: The second strategy has yet another advantage over the first one
	//in terms of memory usage. In C++, memory usage is divided into two
	//areas: the stack and the heap. I will try to explain these concepts from what
	//I learned in John's video.
	//The Stack is a limited memory that stores all the local variables and
	//the addresses of the function created in a program. Whenever we create
	//variables or functions, the corresponding data is stored, one on top of
	//the other, like a stack. Creating too many things in a program will
	//fill the "stack" memory area and cause a "stack overflow".
	//The heap is basically all the memory available in the computer and,
	//therefore, it has much more space to be used. There are ways in which we
	//can tell C++ to store things in the heap, instead of in the stack. One way
	//is the "new" operator.
	//So, overall, instantiating an object into a pointer with the "new"
	//operator has this extra advantage of using the heap, instead of the
	//stack, leaving more space in the stack for other uses of our program.

	/*
	Few lines of code used to practice and to test if all the methods of
	my class are working fine:

	Dog *pDog1 = new Dog();
	pDog1->setName("Ling");
	pDog1->speak();
	delete pDog1;

	Dog dog2(*pDog1);
	dog2.setName("Ling");
	dog2.speak();
	*/

	return 0;
}
