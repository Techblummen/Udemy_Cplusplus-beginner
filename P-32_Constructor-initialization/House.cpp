#include "House.h"
#include <sstream>

House::House() {
	color = "undefined";
	persons = 0;
}

House::House(string color) {
	this->color = color;
	persons = 0;
}

string House::toString() {

	stringstream ss;

	ss << "House color is: ";
	ss << color;
	ss << "; it has ";
	ss << persons;
	ss << " inhabitants";

	return ss.str();

}
