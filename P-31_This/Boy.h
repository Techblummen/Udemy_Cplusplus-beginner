#ifndef BOY_H_
#define BOY_H_

#include <iostream>
#include <sstream>
using namespace std;
//Notice that here we are making includes that will be needed only in the
//separate Boy.cpp file. This works, because this current header file will
//be included in the .cpp file, which will paste there the instructions to
//include iostream and sstream in the other file.

class Boy {
private:
	string name;
	int age;
public:
	Boy(string name, int age);
	string toString();
};

#endif /* BOY_H_ */
