/*
 * extClockTypeImp.cpp
 *
 *  Created on: Feb 5, 2015
 *  Author: Charles Carper
 *  Ch2_Ex01
 *  Chapter 2 Programming Exercise 1
 */

#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H

#include "extClockType.h"
#include <string>
#include <iostream>
using namespace std;

void extClockType::time (int hr, int min, int sec, string timeZone)
{
	clockType::setTime(hr, min, sec);
	zone = timeZone;
}

void extClockType::printTime() const
{
	clockType::printTime();
	cout << zone;

}

extClockType::extClockType(int hr, int min, int sec, string timeZone) : clockType(hr, min, sec)
{
	zone = timeZone;
}


extClockType::extClockType() : clockType()
	{}

#endif
