//P-46_Namespaces
//In this project: meaning and use of namespaces

//In this lesson, we will see the meaning and use of namespaces.
//One important use is to avoid conflict when new classes are created
//with the same name as already existing classes.

//Let's say we create a class (Bird), in a separate header file Bird.h,
//with its methods initialized in the Bird.cpp file.
//If we try to create a second class with the same name, using
//Eclipse automatic class creator, it will not allow us.
//However, if we create this class with the "namespace" box set,
//Eclipse will be able to create the class. If we then verify the
//header file of the class, we'll see that the code of this new class
//is written between curly brackets, within the namespace we
//created.

//For the present lesson, we then created a "Bird" class with the
//namespace "example1". A second "Bird" class (same name) was
//created in separate files with the namespace "example2".
//Both in the header files (.h) and in the initialization files (.cpp)
//the code that belongs to the classes are written within the curly
//brackets that define the namespace. (see the files)

//To determine which namespace is used while instantiating an object
//(and therefore determining which Bird class will be used), there are 2
//ways.
//One of them is by typing "using namespace ____" before the main()
//function. This will indicate that the program must choose that specific
//namespace whenever you use the Bird class.
//The second way is to write the namespace name followed by two
//colons, right before using the Bird class, for instance, "example1::Bird".
//This will override any namespace specifications that were previously defined
//with the "using namespace" syntax".


#include <iostream>
#include "Bird.h" //Header file with the first class created
#include "OtherBird.h" //Header file with the second class created

using namespace std;
using namespace example1;
//Non-defined Bird classes will by default come from namespace "example1"

int main() {

	Bird bird1;
	bird1.move();

	example2::Bird bird2;
	bird2.move();

	example1::Bird bird3;
	bird3.move();

	cout << BIRDNAME << endl;
	cout << example2::BIRDNAME << endl;
	cout << example1::BIRDNAME << endl;

	//The first object was instantiated from the class Bird without defining
	//the namespace. In this case, the namespace used will be the one
	//written before the main() function, with the syntax "using namespace".
	//In this case, it is namspace "example1", in which the Bird class has a
	//"move()" method that outputs "Bird flew away".

	//The second object was instantiated with a local definition of the
	//namespace, with the syntax namespace::class. In this case, the
	//namespace "example2" was used, so that the "Bird" class coming from
	//this namespace was the one chosen. Therefore, "move()" method
	//outputs "Bird moved to the left".
	//Notice that with this syntax, we overrode the previous instruction
	//given by the line "using namespace example1;"

	//The third object was instantiated just like the second one, only
	//with the namespace "example1" defined with the syntax namespace::class.

	//The same logic applies to the constant BIRDNAME, which was defined
	//once in each namespace, with different contents.

	return 0;
}
