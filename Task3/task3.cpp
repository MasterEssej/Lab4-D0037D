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

#pragma region Polyline
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
	}
}

void Polyline::remove()
{
	if (index == 0)
	{
		cout << "The polyline is empty" << endl;
	}
	else
	{
		index--;
		Point2D* tempp = &parr[index];
		tempp = nullptr;
	}
}

bool Polyline::check(float x, float y)
{
	for (int i = 0; i < index; i++)
	{
		if (parr[i].x == x)
		{
			if (parr[i].y == y)
			{
				return true;
			}
		}
	}
	return false;
}

int Polyline::pointnum()
{
	return index;
}

float Polyline::length()
{
	float sum = 0;
	for (int i = 0; i < index-1; i++)
	{
		sum += parr[i].distCalc(parr[i + 1].x, parr[i + 1].y);
	}
	return sum;
}

void Polyline::print()
{
	for (int i = 0; i < index; i++)
	{
		cout << parr[i].toString() << endl;
	}
}

void Polyline::operator delete(void* p)
{
	free(p);
}
#pragma endregion

void error()
{
	cout << "Input is not valid" << endl;
	cin.clear();
	cin.ignore(1, '\n');
	cout << "------------------------------------------" << endl;
}

int main()
{
	int arrsize;

	cout << "Size of array: "; cin >> arrsize;
	if (cin.fail())
	{
		error();
		main();
	}
	cout << endl;
	Polyline line(arrsize);
	float x, y;

	int nump;
	cout << "How many points?: "; cin >> nump;
	if (cin.fail())
	{
		error();
		main();
	}
	cout << endl;
	for (int i = 0; i < nump; i++)
	{
		cout << "Give x" << i + 1 << ": "; cin >> x;
		if (cin.fail())
		{
			error();
			main();
		}
		cout << "Give y" << i + 1 << ": "; cin >> y;
		if (cin.fail())
		{
			error();
			main();
		}
		line.add(x, y);
		cout << endl;
	}

	cout << "All points:" << endl;
	line.print();
	cout << endl;

	cout << "Number of points: " << line.pointnum() << "\n" << endl;

	cout << "Length of polyline: ";
	cout << line.length() << "\n" << endl;

	line.remove();
	cout << "Last point removed\n" << endl;

	cout << "All points:" << endl;
	line.print();
	cout << endl;

	cout << "Number of points: " << line.pointnum() << "\n" << endl;

	cout << "Length of polyline: ";
	cout << line.length() << "\n" << endl;

	float checkx, checky;
	cout << "Check if point exists:" << endl;
	cout << "Point x: "; cin >> checkx;
	if (cin.fail())
	{
		error();
		main();
	}
	cout << "Point y: "; cin >> checky;
	if (cin.fail())
	{
		error();
		main();
	}

	cout << "\n" << "Point exists: " << boolalpha << line.check(checkx, checky) << endl;

	line.remove();

	return 0;
}