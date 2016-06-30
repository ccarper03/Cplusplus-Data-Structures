//============================================================================
// Name        : Ch3_Ex03.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.24.15
// Description : Chapter 3 Programming Exercise 3
//============================================================================

#include <iostream>
#include <string>
#include "arrayListType.h"
using namespace std;

int main()
{
	arrayListType<int> intList(100); // create a list of 100 integers
	int number = 0; // give number the value of 0

	cout << "Processing the integer list..." << endl << endl;
	cout << "Enter 10 integers: ";
	for (int counter = 0; counter < 10; counter++) // get 10 numbers from the user
	    {
	        cin >> number;
	        intList.insertAt(counter, number);
	    }
	cout << endl << "The list you entered is: ";
	intList.print(); // display list entered
	cout << endl;
	cout << "The smallest element in the list is: ";
	cout << intList.min(); // display the smallest number of the list
	cout << endl << endl;
	cout << "End of Program.";
	return 0;
}
