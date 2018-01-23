//P-49_Encapsulation
//In this project: review of public and private sections in a class

#include <iostream>
using namespace std;

//In this lesson, we will revise the concept of public and
//private sections in a class.
//A private section within a class allows us to hide and/or
//protect data. Instance variables and some methods can be
//included in this section to prevent them from being changed
//deliberately by the end user, which could mess up the program.

//"Encapsulation" is the name given to this process of putting
//data into the private (protected) section.

//Here, we have an example class with private and public sections:
class Chicken{
private:
	string name;
private:
	string getName() {return name;};
public:
	Chicken(string name): name(name){};
	void info() {cout << "My name is " << getName() << endl;};
};
//We only make public the methods that the end user will need.
//All the other methods can be written within the private section,
//together with the instance variables. It is a good practice to
//encapsulate/protect as much as possible from the class into the
//private section.
//In this case, the example method "getName()" is not necessary
//for the user. The user only needs to access the method "info()",
//which indirectly gets what is inside "getName()". For that reason
//we leave "getName" in the private section and only leave "info()"
//in the public section

int main() {

	Chicken chicken1 ("Filomena");
	chicken1.info();

	//We can only use the public method here in the main() function.
	//If we tried to use the private method...
	//cout << chicken1.getName() << endl;
	//...it would not work. This method "getName" is encapsulated.

	//As demonstrated above, we can have as many public and private
	//sections as we want in a class. In the example, we have two
	//private sections: one for instance variables and one for
	//private methods. This was done just to organize the code better.

	//It is not a consensus how the sections should be organized, but
	//the way we did is one of the most common ways: first the private
	//variables, then the private methods and lastly the public
	//methods.

	return 0;
}
