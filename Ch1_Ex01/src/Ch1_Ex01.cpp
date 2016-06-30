//============================================================================
// Name        : Ch1_Ex01.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 01.20.2015
// Description : Convert Roman Numeral to decimal number
//============================================================================

#include <iostream>
#include "romanType.h"
using namespace std;

int main()
{
romanType roman;
char pause; 
string v;

cout << "Enter a Roman Numeral: ";
cin >> v;

roman.setRoman(v);
cout << endl << "The equivalent of the Roman Numeral ";
roman.printRoman();
cout << " is ";
roman.printDecimal();
cout << "." << endl << endl;
cout << "End of Program." << endl;
system("Pause");
//cin >> pause;
	return 0;
}
