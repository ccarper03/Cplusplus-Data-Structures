//============================================================================
// Name        : Ch2_Ex03.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.19.15
// Description : Chapter 2 Programming Exercise 3
//============================================================================

#include <iostream>
#include "pointType.h"
#include <iomanip>
using namespace std;

int main() {
	double xInput = 0.0;
	double yInput = 0.0;
	cout << setprecision(2) << fixed;

	pointType pt1(3.50, 2.50);
	pointType pt2(-2.50, 7.00);

	cout << "Point 1: ";
	pt1.print(); // prints xCoordinate and yCoordinate for pt1

	cout << "Point 2: ";
	pt2.print(); // prints xCoordinate and yCoordinate for pt2
	cout << endl;

	cout << "Enter x Coordinate: ";
	cin >> xInput; // collects x input from user
	cout << "Enter y Coordinate: ";
	cin >> yInput; // collects y input from user
	cout << endl;

	pointType pt3(xInput, yInput);
	cout << "Point 3: ";
	pt3.print(); // prints xCoordinate and yCoordinate for pt2
	cout << endl;

	//End of Program
	cout << "End of Program.";
	return 0; // return
}
