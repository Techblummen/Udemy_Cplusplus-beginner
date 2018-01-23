#ifndef COW_H_
#define COW_H_

#include <sstream>
#include <iostream>
using namespace std;

namespace farm {

class Cow{
private:
    int cowID;
public:
    Cow();
    Cow(const Cow &obj): cowID(obj.cowID){cout << "A cow has been copied" << endl;};
    ~Cow();
    void setID(int newID) {this->cowID = newID;};
    string getID();
};

}

#endif // COW_H_
