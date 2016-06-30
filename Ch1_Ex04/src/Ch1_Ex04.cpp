//============================================================================
// Name        : Ch1_Ex04.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : Chapter 1 Programming Exercise 4
// Description : Ch1_Ex04
//============================================================================

#include <iostream>
#include "personType.h"
using namespace std;

int main()
{
personType person;

string firstName;
cout << "Enter First Name "; cin >> firstName;
string middleName;
cout << "Enter Middle Name "; cin >> middleName;
string lastName;
cout << "Enter Last Name "; cin >> lastName;




person.setName(firstName,middleName,lastName);
person.print();
cout << endl;

if(firstName != "Mary")
{
	firstName = "not Mary";
}
if(middleName != "Beth")
{
	middleName = "not Beth";
}
if(lastName != "Regan")
{
	lastName = "not Regan";
}


cout << "Student's first name is "; cout << firstName << endl;
cout << "Student's middle name is "; cout << middleName << endl;
cout << "Student's last name is "; cout << lastName << endl;
cout << endl;
cout << "End of Program.";

	// d. Check whether a given first name is the same as the first name of this person.
	// e. Check whether a given last name is the same as the last name of this person.


	return 0;
}
