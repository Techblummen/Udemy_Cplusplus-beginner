#include "Cow.h"

namespace farm {

Cow::Cow(){
    cout << "A cow has been created" << endl;
}

Cow::~Cow(){
    cout << "A cow has disappeared" << endl;
}

string Cow::getID(){

    stringstream ss;

    ss << "Cow ID is: ";
    ss << cowID;
    ss << ".";

    return ss.str();

}

}
