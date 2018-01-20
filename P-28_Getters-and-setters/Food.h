#ifndef FOOD_H_
#define FOOD_H_

using namespace std;   //required to use strings

class Food {
private:
    string taste;
public:
    Food();
    void setTaste(string newTaste);
    string getTaste();
};

//Nothing new here, we just defined the prototypes of the constructor,
//the getter and setter methods, as well as the instance variable "taste".

#endif // FOOD_H_
