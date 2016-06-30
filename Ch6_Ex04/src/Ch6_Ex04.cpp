//============================================================================
// Name        : Ch6_Ex04.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 4.16.15
// Description : Chapter 6 Programming Exercise 4
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int numVowels(string, int);

int main()
{
	// Declare variables
	string str;
	int vowels;

	cout << "Enter a string: ";

	getline(cin, str); // collect string line from user
	vowels = numVowels(str, 0);
	if (vowels == 0)
	{
		cout << endl << "There are no vowels!"; // if string not entered prompt message
	}
	else
	{
		cout << endl << "The number of vowels in the string " << str << " is " << vowels << "." << endl;
		cout << endl << "End of Program.";
	}
	return 0;
}


int numVowels(string str, int begining)		// function to count vowels
{
	int length = str.size();
	int count = 0;

	if (length - begining > 0)
	{
		switch(str[begining]) // will catch the uppercase and lower case of the vowels
		{
			case'a':case'A':
			case'e':case'E':
			case'i':case'I':
			case'o':case'O':
			case'u':case'U':
			return 1 + numVowels(str, begining +1);

			default:
				return numVowels(str, begining +1);
		}
	}
	return count;

}
