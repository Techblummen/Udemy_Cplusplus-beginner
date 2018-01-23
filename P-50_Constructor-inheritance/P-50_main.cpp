//P-50_Constructor inheritance
//In this project: how constructors behave when a subclass is inherited from another class.

#include <iostream>
using namespace std;

/*Main points:
 * - Whenever an object is instantiated, not only the constructor
 * of its own class is called, but also the constructor of the
 * direct and indirect superclasses from which its class
 * was inherited.
 * - Constructors that attribute values to instance variables cannot
 * be called in the subclasses, if the instance variable was defined
 * in the private section of the superclass. This is so because a
 * private instance variable within a class cannot be accessed by
 * its subclasses. The subclass will contain this instance variable,
 * but will not be able to access it.
 * - One strategy to overcome this is to create a constructor in the
 * subclass that indirectly calls a constructor from the superclass.
 */

class Machine{
private:
	int id;
public:
	Machine(): id(3){cout << "Machine no argument constructor called" << endl;}
	Machine(int id): id(id){cout << "Machine parameterized constructor called" << endl;}
	void info() {cout << "ID: " << id << endl;}
};

//subclass
class Vehicle: public Machine{
public:
	Vehicle(){cout << "Vehicle no argument constructor called" << endl;}
	Vehicle(int id): Machine(id) {cout << "Vehicle parameterized constructor called" << endl;}
};

//second order subclass
class Car: public Vehicle{
public:
	Car(){cout << "Car no argument constructor called" << endl;}
};

class Tank: public Vehicle{
public:
	Tank(): Vehicle(54) {cout << "Tank no argument constructor called" << endl;}
};


int main() {

	Machine machine;
	//When we instantiate a machine, the machine constructor is called
	machine.info();

	cout << "----------------" << endl;
	Vehicle vehicle;
	vehicle.info();
	//When we instantiate a "vehicle" object, both the vehicle subclass
	//constructor and the machine superclass constructor are called.
	//Notice that the method info() (inherited from "machine") returns
	//the correct value for the instance variable "id", which was set in
	//the constructor of the superclass "machine".

	cout << "----------------" << endl;
	Car car;
	car.info();
	//Here, the constructors of the direct superclass "vehicle" and of
	//the indirect superclass "machine" are called, in addition to the
	//expected constructor of the "car" subclass .
	//Again, the calling of the "machine" constructor is evidenced by the
	//the value of the "id" instance variable, returned with the inherited
	//info() method. This "id" value was set in the "machine" constructor.

	cout << "----------------" << endl;
	Machine machine2(35);
	machine2.info();
	//Here, we call the constructor of machine that takes a value and
	//assigns it to the instance variable "id":
	//Machine(int id): id(id) {}
	//We could not create an equivalent constructor in the class "vehicle"...
	//Vehicle(int id): id(id) {}
	//... because the class vehicle cannot directly access the private
	//instance variable "id" from its superclass "machine".

	//However, we defined a constructor in "vehicle" that takes a value
	//and indirectly calls the parameterized constructor of the superclass
	//machine, which, in turn, sets this value to the variable "id":
	//Vehicle(int id): Machine(id) {}
	//With this constructor, we can then set the value of the private
	//instance variable "id" while instantiating a "vehicle" object:
	cout << "----------------" << endl;
	Vehicle vehicle2(10);
	vehicle2.info();
	//We instantiated a vehicle with id value = 10

	//Finally, it is worth mentioning that a constructor from a subclass
	//does not need to call a matching constructor from the superclass. This
	//means, for instance, that the constructor from the "tank" class that
	//takes no arguments can call the parameterized constructor from its
	//superclass vehicle...
	//Tank(): Vehicle(54)
	//... (as long as the variable value is defined in the vehicle
	//constructor called).
	cout << "----------------" << endl;
	Tank tank;
	tank.info();

	//It is also important to remember that a constructor in a subclass can
	//only call constructors from its direct superclass, not from indirect
	//superclasses. So, the following constructor would not work (not compile):
	//Tank(): Machine(54)
	//...because Machine is an indirect superclass of Tank.

}
