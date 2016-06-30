//============================================================================
// Name        : Ch3_Ex02.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.24.15
// Description : Remove
//============================================================================

#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
    arrayListType<int> intList(100);
    arrayListType<string> stringList;

    int number;

    cout << "Processing the integer list..." << endl;
    cout << "Enter 10 integers: ";

    for (int counter = 0; counter < 10; counter++)
    {
        cin >> number;
        intList.insertAt(counter, number);
    }

    cout << endl;
    cout<<"The list you entered is: ";
    intList.print();
    cout << endl;

    cout << "Enter the item to be deleted: ";
    cin >> number;
    intList.removeAll(number);
    cout << "After removing " << number
         << ", the list is:" << endl;
    intList.print();
    cout << endl;

    cout << "End of Program." << endl;

    return 0;
}

