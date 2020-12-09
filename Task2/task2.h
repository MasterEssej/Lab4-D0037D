#pragma once
#include <iostream>
#include <vector>
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
	Point2D(float valuex, float valuey)
	{
		x = valuex;
		y = valuey;
	}
};