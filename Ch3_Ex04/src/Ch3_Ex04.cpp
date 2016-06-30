//============================================================================
// Name        : Ch3_Ex04.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.24.15
// Description : Chapter 3 Programming Exercise 4
//============================================================================

#include <iostream>
#include <string>
#include "arrayListType.h"
using namespace std;

int main()
{
	arrayListType<int> intList(100);
	int number = 0;

	cout << "Processing the integer list..." << endl << endl; // prompt message
	cout << "Enter 10 integers: ";
	for (int counter = 0; counter < 10; counter++)// get ten integers from user
	    {
	        cin >> number;
	        intList.insertAt(counter, number);
	    }
	cout << endl << "The list you entered is: ";
	intList.print(); // display list
	cout << endl;
	cout << "The Largest element in the list is: ";
	cout << intList.max(); // find the largest number in the list
	cout << endl << endl;
	cout << "End of Program.";
	return 0;
}
