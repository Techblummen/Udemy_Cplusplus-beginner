#ifndef HOUSE_H_
#define HOUSE_H_

#include <iostream>
using namespace std;

class House {
private:
	string color;
	int persons;
public:
	House();
	House(string color);
	House(string color, int persons): color(color), persons(persons) {};
	string toString();
};

//The first constructor is non-parameterized and sets default values to
//the instance variables (see House.cpp).
//The second constructor sets only the "color" variable with a parameter
//value, using the keyword "this". "persons" is given a default value.
//The third constructor uses two parameters to set the values of both
//instance variables. Constructor initialization is used, in the format
//"color(color)" to do that. Because this strategy requires a single line
//of code, the constructor was implemented already here, not in the
//House.cpp file with the other methods/constructors.

//This third strategy is the one mostly recommended for C++.

#endif /* HOUSE_H_ */
