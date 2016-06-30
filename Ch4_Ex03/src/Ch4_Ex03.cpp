//============================================================================
// Name        : Ch4_Ex03.cpp
// Author      : Charles Carper
// Copyright   : 3.12.15
// Description : Ch4_Ex03
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	// declare variables
	vector<double> vecList;
	vector<double>::iterator intVecIter;
	double insert    = 0.0;
	double sum       = 0.0;
	double max       = 0.0;
	double min       = 999999.9;
	double avg       = 0.0;

	// display message prompting the user to input integer values
	cout<<"Enter Integer Values, then press Ctrl(z) to Quit:"<<endl;

	// contiuos loop untill user hits ctrl + z
	while(cin >> insert)
		{
			vecList.push_back(insert);
		}
	cout << endl ;

	// loop through test and populate max with the largest number in the list
	for (intVecIter = vecList.begin();intVecIter < vecList.end(); ++intVecIter)
		if (*intVecIter > max)
		{
			max = *intVecIter;
		}

	// loop through test and populate min with the smallest number in the list
	for (intVecIter = vecList.begin(); intVecIter < vecList.end(); ++intVecIter)
		if (*intVecIter < min)
		{
			min = *intVecIter;

		}
	// loop though can adds up the sum of the list
	for(int i=0; i < vecList.size(); i++)
		{
			sum += vecList[i];
		}
	// calculate the avg.
	avg = sum / vecList.size();

	// output the results of the calculations
	cout << fixed << setprecision(2) << "Largest: "<< max << endl;
	cout << fixed << setprecision(2) << "Smallest: "<< min << endl;
	cout << fixed << setprecision(2) << "Average: "<< avg << endl;
	cout << endl;
	cout << "End of Program."<< endl;//end of program
	return 0;
}
