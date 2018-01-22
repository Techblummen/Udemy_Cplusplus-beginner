//P-34_Arithmetic-exercises
//In this project: exercising the arithmetic operators

#include <iostream>
using namespace std;

//Here I am going to perform 2 exercises using the operators
//seen in the "Arithmetic" lesson.

int main() {

	//1. Take a large number of seconds and convert it to
	//a time composed by days, hours, minutes and seconds

	int totalSecs = 255557;
	int secs = totalSecs % 60;
	int totalMins = totalSecs /60;
	int mins = totalMins % 60;
	int totalHours = totalMins / 60;
	int hours = totalHours % 24;
	int totalDays = totalHours / 24;
	int secsFinal = (totalDays*24*60*60) + (hours*60*60) + (mins*60) + secs;

	cout << totalSecs << " seconds is equivalent to:" <<endl;
	cout << totalDays << " days, " << hours << " hours, " << mins <<
			" minutes and " << secs << " seconds." << endl;
	cout << "If we convert it back, we have again: " << secsFinal << " seconds." << endl;


	//2. Write a for loop that iterates 10,000 times and return a "."
	//on the same line every 100 iterations (using the module operator %)

	cout << "--------------" << endl;
	cout << "If we output a dot for every 100 iterations in 10000, we have:" << endl;
	for (int i=0; i<10000; i++){
		if ((i+1) % 100 == 0) {
			cout << "." << flush;
		}
	}


	return 0;
}
