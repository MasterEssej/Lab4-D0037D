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

void Polyline::add(float newx, float newy)
{
	if (index >= size)
	{
		cout << "The Polyline is already full" << endl;
	}
	else
	{
		Point2D newp(newx, newy);
		parr[index] = newp;
		cout << "Added point: ( " << parr[index].x << " , " << parr[index].y << " )" << endl;
		index++;
		points++;
	}
}

void Polyline::remove()
{
	index--;
	//parr[index] = nullptr;
}

int main()
{
	int arrsize;

	cout << "Size of array: "; cin >> arrsize;
	cout << endl;
	Polyline line(arrsize);
	float x, y;

	int nump;
	cout << "How many points?: "; cin >> nump;
	cout << endl;
	for (int i = 0; i < nump; i++)
	{
		cout << "Give x" << i + 1 << ": "; cin >> x;
		cout << "Give y" << i + 1 << ": "; cin >> y;
		line.add(x, y);
		cout << endl;
	}

	cout << "\nAll points:" << endl;
	for (int k = 0; k < line.points; k++)
	{
		cout << "Point " << k + 1 << ": " << "( " << line.parr[k].x << " , " << line.parr[k].y << " )" << endl;
	}

	return 0;
}