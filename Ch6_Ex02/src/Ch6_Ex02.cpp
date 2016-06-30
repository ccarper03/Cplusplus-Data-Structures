//============================================================================
// Name        : Ch6_Ex02.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 4.16.15
// Description : Chapter 6 Programming Exercise 2
//============================================================================

#include <iostream>
using namespace std;
//Prototype
void printStars(int i, int n);

int main()
{
	// Decare variables
    int n;
    int i=0;

	cout << "Enter the number of lines in the grid: "; // prompt user to enter an integer
	cin>> n; // collect input
	printStars(i,n); // call printstars function
	cout << "Grid Pattern Complete - End of Program."; // prompt user of end of program
    return 0;
}

// Function Definition
void printStars(int i, int n)
{
	if(i == n) // check if i is the same
	{
		for(int j = 1; j <= n; j++)
		{
			cout << '*';
		}
		cout << endl;

		for (int j = 1; j <= n; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	else
	{
		for(int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;

		printStars(i+1, n); // recursive invocation

		for(int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
