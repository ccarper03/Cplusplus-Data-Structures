//============================================================================
// Name        : Ch3_Ex01.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.24.15
// Description : Chapter 3 Programming Exercise 1
//============================================================================

#include <iostream>
#include <string>
#include "arrayListType.h"
using namespace std;

int main()
{
	arrayListType<int> intList(100); // create a list of 100 integers

	int number;
	cout << "Processing the integer list..." << endl; // prints message
	cout << endl;

	cout << "Enter 5 integers: ";
	for (int counter = 0; counter < 5; counter++) // get 5 integer numbers from the user
	{
		cin >> number;
		intList.insertAt(counter, number);
	}
	cout<<"The list you entered is: ";
	intList.print(); // print list
	cout << endl;

	cout << "Enter the item to be deleted: ";
	cin >> number; // get number user wants deleted
	intList.removeAt(number); // remove number from list
	cout << "After removing element number " << number << ", the list is: ";
	intList.print(); // print the list again

	cout << endl;
	cout << "End of Program.";

	return 0;
}
