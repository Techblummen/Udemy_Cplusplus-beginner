//P-44_Allocating-memory
//In this project: how to allocate memory using the operator "new" and pointers

#include <iostream>
using namespace std;

//In this lesson, we will see some examples on how to allocate memory
//using the operator "new" and pointers, like we did with objects in the
//last lessons.

//First, let's create a class, similar to the one in the previous lessons,
//with a constructor, a destructor, an instance variable and methods to
//set and get the values of the instance variable.
class House{
private:
	string houseID; //instance variable
public:
	House() {cout << "A house was built." << endl;}
	~House() {cout << "A house was destroyed" << endl;}
	void setHouseID(string houseID) {this->houseID = houseID;}
	void getHouseID() {cout << "This house ID is: " << houseID << endl;}
};

int main() {

	House *pHouse1 = new House;
	//or "House *pHouse1 = new House()" - parenthesis after the last class name are optional
	pHouse1->setHouseID("B");
	pHouse1->getHouseID();
	delete pHouse1;
	//This is how we have been instantiating objects into pointers with
	//the "new" operator.

	//This operator can be used to instantiate any types of data;
	cout << "---------------" << endl;
	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;
	//Just as we did with objects, we must also delete variables that were
	//declared with "new".

	//The variable type char has 1 byte, which means that if we allocate
	//memory for an array of chars, we can easily allocated a precise number
	//of bytes to use later:
	//char *pChar = new char [1000];
    //delete [] pChar;
	//This last line would allocate exactly 1000 bytes of memory.

	//We can also use the "new" operator to create how many objects or
	//variables we want, in a single array.
	//Let's, for instance, create an array with 5 objects of the class "House":
	cout << "---------------" << endl;
	House *pHouse2 = new House[5];
	delete [] pHouse2;
	//Note in the output console that the constructor was executed 5 times
	//during instantiation. Accordingly, the destructor was also executed
	//5 times after the "delete" command.
	//It is important to write "[]" between "delete" and the name of the
	//pointer, in order to delete all instances of the objects within the
	//array. Otherwise, only one "house" object (the first) will be deleted,
	//because the pointer that points to a whole array automatically points
	//to its first element.

	//When we create an array of objects like this, we can use array syntax
	//to refer to the individual objects:
	cout << "---------------" << endl;
	House *pHouse3 = new House[4];
	pHouse3[1].setHouseID("C");
	pHouse3[1].getHouseID();
	delete [] pHouse3;

	//Exercise: allocate an array of 26 objects. For each object, set the
	//value of the string instance variable as one of the letters of the
	//alphabet.
	//Hint1: you can assign a character variable into a string like this:
	//char letter = 'a';
	//string ID (1,letter);
	//This last line says "create a string of name 'ID', containing 1 character,
	//whose value will be equivalent to 'letter'".
	//Hint2: char is basically an integer type. If you add 1 to a char
	//containing the letter "a", it will now contain the letter "b", because
	//it will have moved to the next char contained in ASCII table.
	cout << "---------------" << endl;
	House *pHouse4 = new House[26];
	char c = 'a'; //create a char to store the characters
	//Setting houseID with a loop
	for (int i=0; i<26; i++){
		string ID (1,c);
		pHouse4[i].setHouseID(ID);
		c++;
	}
	//Getting houseID with a loop
	for (int i=0; i<26; i++){
		pHouse4[i].getHouseID();
	}
	//Deleting the objects;
	delete [] pHouse4;
	//Mission accomplished!

	return 0;
}
