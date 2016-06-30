//============================================================================
// Name        : Ch2_Ex03.cpp
// Author      : Charles Carper
// Version     :
// Copyright   : 2.19.15
// Description : Chapter 2 Programming Exercise 3
// Header File pointType.h
//============================================================================
#ifndef H_PointType
#define H_PointType

class pointType
{
public:
    void setPoint(double x, double y);
    void print() const;
    double getX() const;
    double getY() const;
    pointType(double x = 0.0, double y = 0.0);

protected:
    double xCoordinate;
    double yCoordinate;
};

#endif

