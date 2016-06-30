//============================================================================
// Name        : MidtermExam.cpp
// Author      : Charles Carper
// Date        : 3.26.15
// Description : MidtermExam
//============================================================================

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

// ProtoType
template<class elemType>
void reverseVector(vector<elemType> &myList); // prototype

int main()
{
	//declares int and string type vectors
	vector<int> intList;
	vector<string> stringList;

	//iterator definitions
	ostream_iterator<int> screen1(cout, " ");
	ostream_iterator<string> screen2(cout, " ");

	//adds a number to the list by pushing the number back to the end of the vector
	intList.push_back(23);
	intList.push_back(56);
	intList.push_back(45);
	intList.push_back(33);
	intList.push_back(88);
	intList.push_back(12);
	intList.push_back(67);

	//adds a string to the list by pushing the string back to the end of the vector
	stringList.push_back("Spring");
	stringList.push_back("Summer");
	stringList.push_back("Fall");
	stringList.push_back("Winter");

	// before reverse int
	cout << "intList INTERGER values before reverse - ";
	copy(intList.begin(),intList.end(),screen1);
	cout << endl;

	// after reverse int
	cout << "intList INTERGER values after reverse - ";
	reverseVector(intList);
	copy(intList.begin(),intList.end(),screen1);
	cout << endl;

	// before reverse string
	cout << "stringList String values before reverse - ";
	copy(stringList.begin(),stringList.end(), screen2);
	cout << endl;


	// after reverse string
	cout << "stringList String values after reverse - ";
	reverseVector(stringList);
	copy(stringList.begin(),stringList.end(), screen2);
	cout << endl << endl;

	// End of the program.
	cout << "End of Program";

	return 0;
}

// function Definition
template<class elemType>
void reverseVector(vector<elemType> &myList)
{
	typename vector<elemType>::iterator Itr1,Itr2;
	Itr1 = myList.begin();
	Itr2 = myList.end() - 1;

	while(Itr1 < Itr2)
	{
		std::swap(*Itr1,*Itr2);
		++Itr1;
		--Itr2;
	}
}
