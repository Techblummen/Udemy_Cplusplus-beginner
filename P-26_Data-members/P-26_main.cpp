//P-26_Data-members
//In this project: how to define and set private variables within a class

#include <iostream>
#include "Dog.h"
using namespace std;

//In the class "Dog" we have a method called speak() that makes our
//model of a dog produce a virtual sound. Moreover, we have a variable
//that defines a state of the dog. In this case the variable "happy" is
//a boolean state variable that sets the state of our dogs as either
//true (happy) or false (not happy).
//The interesting part is that depending on this "state", the speak()
//function/method returns something different.

//Two separate methods are also created within the Class Dog to set
//the variable happy: "make_happy()" sets "happy" to true and "make_sad()"
//sets "happy" to false.

int main()
{

    //Here we create a Dog called "buddy", set its "happy" variable/state
	//as true, and ask it to speak. A happy  buddy will return "Wowf Wowf!"
	Dog buddy;
	buddy.makeHapppy();
	buddy.speak();

	//This time we create a Dog called "jimmy", set its "happy" variable/state
	//as false, and ask it to speak too. The sad jimmy will return "Brrrrrr!"
	Dog jimmy;
	jimmy.makeSad();
	jimmy.speak();

	//Important: we cannot set the variable "happy" here in the "main" function
	//because the variable was created in the "private" section of the class and
	//cannot be accessed from the outside just like that.
	//This is why we had to create the methods "make_happy()" and "make_sad()",
	//which will work within the class to set the variable.
	//Making the variable private is a safety option, to avoid that the variable
	//is changed in an unwanted way, from outside of the class, possibly compromising
	//the functions of the class.

	//Another option would be to use a "constructor", but we have not seen how to
	//use this feature yet. Constructors are better because they do not require
	//the use of one method ("make_happy()" or "make_sad()") before we can use
	//another method ("speak()")

    return 0;
}
