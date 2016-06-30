//============================================================================
// Name        : Ch2_Ex03.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.19.15
// Description : Chapter 2 Programming Exercise 3
// Implementation File pointTypeImp.cpp
//============================================================================

#include <iostream>
#include "pointType.h"
using namespace std;

void pointType::setPoint(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void pointType::print() const
{
    cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double pointType::getX() const
{
    return xCoordinate;
}

double pointType::getY() const
{
    return yCoordinate;
}

pointType::pointType(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}
