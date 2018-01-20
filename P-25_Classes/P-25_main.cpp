//P-25_main.cpp
//In this project: how to work with classes

//Classes are units/entities in which you can store multiple functions
//and data that have a common purpose. Here, for example, we are going
//to create a class named "Cat", in which we will store a model of a cat,
//i.e., functions that represent virtual actions of a virtual cat.

//In the use of classes we also learn how to use multiple files in the same
//project.
//Here a header file will be used to 1. create the class "Cat" and 2. declare the
//prototypes of the functions that belong to that class. (Note that we are not
//just using it to include prototypes as we did before).
//By default, as in Java, the name of the class and the header file will begin
//with upper case: "Cat" and "Cat.h".
//Moreover, a second source file (.cpp) will be used to define the functions
//that will belong to the class Cat.

//In order for these files to work on CodeBlocks, they must be in a project, I
//could not make them work just by creating the independent files. After creating
//the project, the Cat.h and Cat.cpp files must be created within the project.
//The main.cpp file is automaticallu created with the project, but its name may
//be changed to our preference. Here, for example, "P-25_main.cpp"

//Finally, in the main() function, we will create an object "cat1" from the class
//Cat and have it "perform" the functions that are available in the class Cat.

#include <iostream>
//We must now include the header file that contains the definition of the class
//and its function prototypes.
#include "Cat.h"

using namespace std;

int main() {

    Cat cat1;
    //here we create an object of the class Cat, that can execute its functions.
	//It is as if the class (Cat) was a blueprint of a cat and we create an object (cat1)
	//from this blueprint or template.
	//The process of creating a particular object (cat1) from its template class (Cat) is
	//called instantiation. We are instantiating cat1 from the class Cat.

	cat1.jump();
	cat1.speak();
	//This is the sintax used to make the object execute the functions/methods
	//defined within its class.

    return 0;
}

