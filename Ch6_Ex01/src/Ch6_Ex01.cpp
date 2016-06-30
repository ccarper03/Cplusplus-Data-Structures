//============================================================================
// Name        : Ch6_Ex01.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 4.16.15
// Description : Chapter 6 Programming Exercise 1
//============================================================================

#include <iostream>
using namespace std;

// Prototype
void printStars(int n) ;


int main()
{
	// Declare variable
	int n;

	cout << "Enter the number of lines in the grid: "; // Prompt user
	cin>> n; // collect input
	cout << endl;
	printStars(n);// call function
	cout << endl;
	cout << "Grid Pattern Complete - End of Program."; // prompt user completion of program
	return 0;
}
// Function Definition
void printStars(int n)
{
	if(n == 1) // base case
	 {
		 cout << '*' << endl;
		 cout << '*' << endl;
	 }
	else
	 {
		 for(int i = 1; i <= n; i++) // stars decrement
		 {
			 cout << '*';
		 }
		 cout << endl;
		 printStars(n-1); // call printStars function

		 for(int i = 1; i <= n; i++) // stars increment
		 {
			 cout << '*';
		 }
		 cout << endl;
	 }
}
