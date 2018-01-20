#ifndef BIRD_H_
#define BIRD_H_

class Bird {
private:
    bool happy;
public:
    void move();
    Bird();
    ~Bird();
};

//The constructor method "Bird()" is created without any return type (int, void, etc),
//and by default it receives the same name of the class, with upper case.
//The destructor method also has no return type (int, void, etc), and receives the
//same name as the constructor, only with a "~" preceding the name.
//Both the constructor and the destructor are implemented in the "Birs.cpp"
//source file, together with the other methods/functions of the class.

#endif // BIRD_H_
