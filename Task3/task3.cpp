#include <iostream>
#include <string>
#include <math.h>
#include "task3.h"
using namespace std;

#pragma region Point2D
float Point2D::distCalc(float px, float py)
{
	return sqrt(pow((px - x), 2) + pow((py - y), 2));
}

string Point2D::toString()
{

	string sx = to_string(x);
	string sy = to_string(y);

	return "[" + sx + "," + sy + "]";
}

Point2D Point2D::operator+(const Point2D& p)
{
	Point2D pt;
	pt.x = this->x + p.x;
	pt.y = this->y + p.y;
	return pt;
}

Point2D& Point2D::operator=(const Point2D& p)
{
	x = p.x;
	y = p.y;
	return *this;
}

bool Point2D::operator==(const Point2D& p)
{
	return (x == p.x && y == p.y);
}
#pragma endregion

