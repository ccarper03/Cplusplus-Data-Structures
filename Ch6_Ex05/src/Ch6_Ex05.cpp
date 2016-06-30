//============================================================================
// Name        : Ch6_Ex05.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 4.16.15
// Description : Chapter 6 Programming Exercise 5
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int totalArray(int[], int, int);

int main()
{
	// declare arrays
	int arrayOne[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arrayTwo[4] = {5, 13, 15, 33};

	// Prompt message and call the totalArray Function
	cout << "Sum of Values in Array One is " << totalArray(arrayOne, 0, 10) << "." << endl;
	cout << "Sum of Values in Array Two is " << totalArray(arrayTwo, 0, 4) << "." << endl;
	cout << endl << "End of Program.";
	return 0;
}

// Funtion Definition
int totalArray(int array[], int begining, int length)
{
	// variable declarations
	int total = 0;

	if (begining < length)
	{
		total += array[begining];
		total += totalArray(array, begining + 1, length); // function call and accumulate to total
	}
	return total;
}
