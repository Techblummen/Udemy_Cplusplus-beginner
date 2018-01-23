#include "Bird.h"

namespace example1 { //This is how we create a namespace

Bird::Bird() {
	// TODO Auto-generated constructor stub
}

void Bird::move(){
	cout << "Bird flew away" << endl;
	//The cout function needs the "iostream" and "namespace std"
	//instructions. These are not written here, but are written
	//in the header file, which will be copied to the present file by
	//the prepocessor, following the include "__.h" instruction.
}

}
//The curly brackets of the namespace surround the code
//of the class, both in the header file (.h) and here in
//in the initialization file (.cpp).
