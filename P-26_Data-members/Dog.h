#ifndef DOG_H_
#define DOG_H_

class Dog {
private:
    bool happy;
public:
    void speak();
    void makeHapppy();
    void makeSad();
};

//Note that the we created the boolean variable "happy" in the private section
//of the class. This is done to avoid letting the variable to be changed to any
//value by accident, compromising the functionality of the methods that depend
//on it. (only the methods of the class can access the private variable)
//This variable defined within the class can assume a different value for each
//object/instance created from the class. Therefore, it is called "instance variable".

#endif // DOG_H_
