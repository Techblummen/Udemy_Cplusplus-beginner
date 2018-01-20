//These initial and last lines of code (#ifndef CAT_H, #define CAT_H_ and
// #endif /* CAT_H_ */) tell the preprocessor to only "include" the code
//of this header file if it has not been included before in the main code.
//If the same header file is included twice, there may be errors, for
//example, due to multiple declarations of variables.

#ifndef CAT_H_
#define CAT_H_

//Here we create the class Cat and write into it the prototypes of the
//functions that will be used in that class. The proper implementation
//of the functions is made in a separate text file: "Cat.cpp"
//The command "public" must be written within the class, to make the
//functions available outside this particular text file.
//Functions written within a class are called "methods". In this case,
//"jump" is a method in the Cat class.
class Cat {
public:
    void speak();
    void jump();
};

#endif /*CAT_H_*/

