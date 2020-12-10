#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Point2D
{
public:
	float x, y;
	Point2D()
	{
		x = 0;
		y = 0;
	}
	Point2D(const float& valuex, const float& valuey)
	{
		x = valuex;
		y = valuey;
	}
	float distCalc(float px, float py);
	string toString();

	Point2D operator+(const Point2D& p);
	Point2D& operator=(const Point2D& p);
	bool operator==(const Point2D& p);
};

class Polyline
{

};