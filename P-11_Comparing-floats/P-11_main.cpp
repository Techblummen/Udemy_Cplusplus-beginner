//P-11_Comparing-floats
//In this project: hints on how to compare float variables

#include <iostream>
using namespace std;

int main() {

    float value1 = 1.2;

    if (value1 == 1.2){
        cout << "Same number" << endl;
    } else {
        cout << "Not the same" << endl;
    }

    //Because floating points are only precise up to some digits, they are never going to
	//be exactly equal to one another or to a precise number. Therefore == will always return false.
	//So, when checking the similarity between floats, we should use other strategies, for example,
	//"is the difference between the two floats less than 1?".

	//In fact, the MINORITY of decimal numbers are stored as precise numbers. So the comparison
	//could work. But the MAJORITY are not precisely stored. This has to do with how the computer
	//stores numbers, which is in binary notation (most decimals in binary are not precise).

    return 0;
}
