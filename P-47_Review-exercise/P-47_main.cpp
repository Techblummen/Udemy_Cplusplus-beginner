//P-47_Review-exercise
//In this project: review the concepts in the previous lessons

/*
 * In this project, I would like to do an exercise to review most
 * of the concepts of the previous lessons.
 * I thought of a project with the following guidelines: *
 * 	- Create a class with namespace, constructor, destructor, copy
 * 	constructor, instance variables, a setter and a getter using stringstream.
 *	(do it From scratch, with header file and initialization file made by hand)
 *	- Create a function that defines an array of objects from the class.
 *	- Pass the array into the main function and change the values of the
 *	instance variables of each object.
 *	- Create also a function that reads the array of objects, with the
 *	reference syntax. The function must also output the variables of the
 *	objects in the array.
 *	- Create a copy of one object from the array, exposing the copy constructor.
 *	- Create a last function that deletes the array of objects.
 *
 *	Hint: to pass the array of objects to and from functions, it should be
 *	created with the "new" operator.
 */

#include <iostream>
#include "Cow.h"
using namespace std;
using namespace farm;

Cow *createCows (int nCows) {
    Cow *pCows = new Cow[nCows];
    return pCows;
}

void getCowID (int nCows, Cow *pCows){
    cout << "--- Cow IDs ----" << endl;
    for (int i=0; i<nCows; i++){
        cout << pCows[i].getID() << endl;
    }
    cout << "----------------" << endl;
}

void deleteCows (Cow *pCows){
    delete [] pCows;
}

int main() {

    int nCows = 5;

    Cow *plocalCows = createCows(nCows);

    for(int i=0; i<nCows; i++){
        plocalCows[i].setID(i+1);
    }

    getCowID(nCows, plocalCows);

    Cow copyCow = plocalCows[2];
    cout << copyCow.getID() << endl;

    deleteCows (plocalCows);

    return 0;
}
