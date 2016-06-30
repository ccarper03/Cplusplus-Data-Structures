/*
 * extClockType.h
 *
 *  Created on: Feb 5, 2015
 *  Author: Charles Carper
 *  Ch2_Ex01
 *  Chapter 2 Programming Exercise 1
 */

#ifndef EXTCLOCKTYPE_H_
#define EXTCLOCKTYPE_H_
#include "clockType.h"
#include <string>
using namespace std;

class extClockType: public clockType
{
public:

	void printTime() const;

	//set times and time zone for time1 and time2
	void time (int hr, int min, int sec, string zone);

	//default constructor
	extClockType();

	extClockType(int hr, int min, int sec, string zone);



private:
	//variable to store the time zone
	string zone;

};

#endif /* EXTCLOCKTYPE_H_ */
