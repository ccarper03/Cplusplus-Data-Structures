//============================================================================
// Name        : Ch2_Ex02.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.10.2015
// Description : Chapter 2 Programming Exercise 2
//============================================================================

#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
	int month = 0;
	int day = 0;
	int year = 0;

	dateType date1;
	cout << "Date 1: " ;
	date1.setDate(13,15,2014);
	date1.printDate();
	cout << endl;

	dateType date2;
	cout << "Date 2: " ;
	date2.setDate(2,29,2012);
	date2.printDate();
	cout << endl;

	//
	dateType date3;
	cout << "Date 3: " ;
	date3.setDate(2,29,2014);
	date3.printDate();
	cout << endl << endl;

	//
	dateType date4;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Year: ";
	cin >> year;
	cout << endl;

	cout << "Date 4: " ;
	date4.setDate(month,day,year);
	date4.printDate();
	cout << endl << endl;

	cout << "End of Program.";
	return 0;
}
