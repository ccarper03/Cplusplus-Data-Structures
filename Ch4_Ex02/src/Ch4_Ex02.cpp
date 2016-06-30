//============================================================================
// Name        : Ch4_Ex02.cpp
// Author      : Charles Carper
// Copyright   : 3.12.15
// Description : Ch4_Ex02
//============================================================================
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Prototype
double higher_Test_Score(vector<double>, int);
double sumTestScore(vector <double> , int);
void display(int classSize,double average,int highestScore, vector<string> student,vector<double> score);

int main()
{
	// declare Variables
	vector<string> student(15);
	vector<double> score(15);
	double total = 0;
	int highestScore = 0;
	double average;
	int classSize = student.size();

	//Prompt the user to enter names and scores
	cout << "Enter student name and a test score: " << endl;

	// input the students name and the scores
	for (int i = 0; i < classSize; ++i)
	{
		cin >>student[i]>>score[i];
	}
	// calculations and calls
	total = sumTestScore(score, classSize);
	average = total / classSize;
	highestScore = higher_Test_Score(score, classSize);

	//call display function and pass 5 variables
	display(classSize, average, highestScore, student, score);

	cout <<endl;
	cout << "End of Program.";


	return 0;
}
// Function Definitions
// loops through to find the highest score
double higher_Test_Score(vector <double> score, int size)
{
int highestScore= 0;
	for (int index=0; index<size; index++)
	{
		if ( score[index] > score[highestScore])
		{
			highestScore = index;
		}
	}
	return highestScore;
}
// loops to add score to get the total
double sumTestScore(vector <double> score, int size)
{
	 int total = 0;
	    for (int i = 0; i < size; ++i)
	    {
	        total += score[i];
	    }
	    return total;
}

// displays output to the screen
void display(int classSize,double average,int highestScore, vector<string> student,vector<double> score)
{

	cout <<endl;
	cout << "Class Size: "<< classSize <<endl<<endl;
	cout << "Highest Score: " << fixed << setprecision(2) << score[highestScore]<<endl;
	cout << "Student whose score is highest in the class: \n";

	for(int index=0; index < classSize; index++)
	{
		if(score[index] == score[highestScore])
		{
			cout << student[index];
			cout <<endl;
		}
	}

	cout << endl <<  "Class Average: ";
	cout << fixed << setprecision(2)  << average << endl;
	cout << "Student whose score is less than class average: \n";
	for(int index=0; index<classSize; index++ )
	{
		if(score[index] < average)
		{
			cout << student[index];
			cout<<endl;
		}
	}
}


