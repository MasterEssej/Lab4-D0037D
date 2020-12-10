#include <iostream>
#include <math.h>
#include <string>
#include "task2.h"
using namespace std;

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

int main()
{

	Point2D point1(5,3);
	Point2D point2(7, 9);

	cout << "point1: " << point1.toString() << endl;
	cout << "point2: " << point2.toString() << endl;

	cout << "Distance between points: ";
	cout << point1.distCalc(point2.x, point2.y) << endl;

	Point2D p = point1;

	cout << "\nCopied point of point1:" << endl;
	cout << "p: " << p.toString() << endl;

	Point2D newp;
	newp.x = point1.x + point2.x;
	newp.y = point1.y + point2.y;

	cout << "\nValues of new point: ";
	cout << newp.toString() << endl;
	cout << "Distance between new point and point1: ";
	cout << newp.distCalc(point1.x, point1.y) << endl;

	cout << "\nAll point:" << endl;
	cout << "point1: " << point1.toString() << endl;
	cout << "point2: " << point2.toString() << endl;
	cout << "p: " << p.toString() << endl;
	cout << "newp: " << newp.toString() << endl;

	return 0;
}