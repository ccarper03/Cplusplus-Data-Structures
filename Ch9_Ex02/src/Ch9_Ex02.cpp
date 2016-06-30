//============================================================================
// Name        : Ch9_Ex02.cpp
// Author      : Charles Carper
// Copyright   : 4.16.15
// Description : Binary search with recursion
//============================================================================

#include <iostream>
using namespace std;

// Test data
// 7 12 18 20 23 27 30 32 38 45 66 85 -999
// search for a number 23

#include "arrayListType.h"
#include "orderedArrayListType.h"

void printListInfo(orderedArrayListType<int>& passedList);

int main()
{
	orderedArrayListType<int> myIntList; // declare the array
	int num; // declare variable

	cout << "Enter integer numbers ending with -999" << endl; // Prompt user to enter numbers exit with
	cin >> num; // get input from user and populate in num
	while (num != -999) // continue to enter numbers untill -999 is entered
		{
			myIntList.insert(num);
			cin >> num;
		}
	cout << endl;
	cout << "The list you entered is: ";
	printListInfo(myIntList); // call printlistinfo function
	cout << endl;
	cout << "Enter search for number: ";
	cin >> num;
	cout << "Search for number found at position: ";
	cout << myIntList.recBinarySearchImp(num)+1;
	cout << endl << endl << "End of Program.";
	return 0;
}

void printListInfo(orderedArrayListType<int>& passedList)
{
	passedList.print();
	cout << "List Size is: " ;
	cout << passedList.listSize();
	cout << endl;
}
