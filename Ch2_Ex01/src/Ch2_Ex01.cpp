/*
 * Ch2_Ex01.cpp
 *
 *  Created on: Feb 5, 2015
 *  Author: Charles Carper
 *  Ch2_Ex01
 *  Chapter 2 Programming Exercise 1
 */


#include <iostream>
#include "extClockType.h"
using namespace std;

int main()
{
	    //call the class
		extClockType clockType;

		//variable declaration
		clockType.time (5, 10, 9, " EST");

		//display time 1
		cout << "Time 1 - ";
		clockType.printTime();

		//call time
		clockType.time(12, 44, 59, " EST");
		cout << endl;

		//display time 2
		cout << "Time 2 - ";
		clockType.printTime();

		//display time2 incremented
		cout << endl << endl << "After incrementing time2 by one second..." << endl;
		clockType.incrementSeconds(); //increment
		cout << "Time 2 - ";
		// call print time
		clockType.printTime();

		//end of program
		cout << endl <<endl << "End of Program.";


}


