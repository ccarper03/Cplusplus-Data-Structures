//============================================================================
// Name        : Ch6_Ex03.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 4.16.15
// Description : Chapter 6 Programming Exercise 3
//============================================================================

#include <iostream>
using namespace std;

// Prototype
void printStars(int size);

int main()
{
	int size;
	cout << "Enter the number of lines in the grid: "; // Prompt message
	cin >> size; // user input
    printStars(size); // call printstars function
    cout << endl;
	cout << "Grid Pattern Complete - End of Program."; // Prompt message
	return 0;
}

// Function Definition
// Prints dimond shape with astricks
void printStars(int size)
{
	for(int i = 0;i < size; i++)
	   {
		   for(int j = size; j > i; j--)
		   {
			   cout << " ";
		   }
			   for(int k = 0;k < i; k++)
			   {
				   cout << " *";
			   }
			   cout << endl;
	   }
	   for(int i = size; i > 0; i--)
	   {
			   for(int j = size;j > i; j--)
			   {
				   cout << " ";
			   }
					   for(int k = 0;k < i; k++)
					   {
						   cout << " *";
					   }
					   cout << endl;
	   }
}
