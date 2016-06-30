//============================================================================
// Name        : Ch9_Ex01.cpp
// Author      : Charles Carper
// Copyright   : 4.16.15
// Description : recursive version of sequential searching
//============================================================================

#include <iostream>
#include "arrayListType.h"

using namespace std;

void printListInfo(arrayListType<int>& passedList);

int main()
{
	arrayListType<int> myIntList; // declare the array
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
	cout << myIntList.recSeqSearchImp(num)+1 << endl;
	cout << endl;
	cout << "End of Program.";
	return 0;
}

void printListInfo(arrayListType<int>& passedList)
{
	passedList.print(); // Print out the list entered
	cout << "List Size is: " ;
	cout << passedList.listSize(); // print out list size
	cout << endl;
}
