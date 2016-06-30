//============================================================================
// Name        : Ch10_Ex02.cpp
// Author      : Charles Carper
// Copyright   : 4.16.15
// Description : Ch10.2 Insertion Sort
//============================================================================

#include <iostream>
using namespace std;

#include "arrayListType.h"

void printListInfo(arrayListType<int>& passedList,int counter);
// This program will collect integers
// from the user store into a list print the list sort the list
// then display the list size and the max size of the list.
int main()
{
	arrayListType<int> myIntList; // create object
	// declare variables
	int inputNum;
	int counter=0;
	// get input from users and call insert to populate myintlist
	cout << "Enter integer numbers ending with -999";
	cin >> inputNum;
	while (inputNum != -999)
	{
		myIntList.insert(inputNum);
		cin >> inputNum;
	}
	// call print list to show user what they entered
	cout << endl;
	printListInfo(myIntList,counter);
	// sort the list
	myIntList.insertionSort();
	counter++;
	// reprint the list now ordered
	printListInfo(myIntList,counter);
	cout << endl << endl;
	cout << "End of Program.";
	return 0;
}
// Display Function - if counter is zero, the list is printed
// if counter is 1 list, listsize, and max list size will be printed
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



