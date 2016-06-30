//============================================================================
// Name        : Ch10_Ex04.cpp
// Author      : Charles Carper
// Copyright   : 4.16.15
// Description : Ch10.4 Shellsort
//============================================================================

#include <iostream>
#include "arrayListType.h"

void printListInfo(arrayListType<int>& passedList,int counter);

using namespace std;
int main()
{
	arrayListType<int> myIntList(100);

	// declare variables
	int inputNum;
	int counter=0;
	// get input from users and call insert to populate myintlist
	cout << "Enter integer numbers ending with -999";
	cin >> inputNum;
	while (inputNum != -999)
	{
		myIntList.insertEnd(inputNum);
		cin >> inputNum;
	}
	// call print list to show user what they entered
	cout << endl;
	printListInfo(myIntList,counter);
	// sort the list
	myIntList.shellSort();
	counter++;
	// reprint the list now ordered
	printListInfo(myIntList,counter);
	cout << endl << endl;
	cout << "End of Program.";
	return 0;
}

void printListInfo(arrayListType<int>& passedList,int counter)
	{
	if (counter == 0)
		{cout << "The list you entered is: ";
		passedList.print();
		}

	if (counter ==1)
	{
		cout << endl << "The list after sorting is: ";
		passedList.print();
		cout << endl << "List Size is: ";
		cout << passedList.listSize();
		cout << endl << "Max List Size is: ";
		cout << passedList.maxListSize();
	}
}
