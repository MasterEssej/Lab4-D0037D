#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Engine
{
public:
	float sizeInLitres;
	int numberOfCylinders;
	Engine()
	{
		sizeInLitres = 0;
		numberOfCylinders = 0;
	}
	Engine(float volume, int cylinders)
	{
		sizeInLitres = volume;
		numberOfCylinders = cylinders;
	}
	void print();
};

class Body
{
public:
	string color;
	float width, height;
	Body()
	{
		color = "white";
		width = 1.5;
		height = 1.5;
	}
	Body(string bcolor, float bwidth, float bheight)
	{
		color = bcolor;
		width = bwidth;
		height = bheight;
	}
	void print();
};

class Owner
{
public:
	string name;
	string adress;
	bool allowedToDrive;
	Owner()
	{
		name = "Raul";
		adress = "Stekargatan";
		allowedToDrive = true;
	}
	Owner(string oname, string oadress, bool driversLicense)
	{
		name = oname;
		adress = oadress;
		allowedToDrive = driversLicense;
	}
	void print();
};

class MotorVehicle
{
public:
	Engine engine;
	Body body;
	Owner owner;
	float* tireDiameters;
	int numberOfTires;
	MotorVehicle(string name, string adress, bool allowDrive, string color, float width, float height, float volume, int cylinders, int tires, float* tireDm)
	{
		//Owner
		owner.name = name;
		owner.adress = adress;
		owner.allowedToDrive = allowDrive;

		//Body
		body.color = color;
		body.width = width;
		body.height = height;

		//Engine
		engine.sizeInLitres = volume;
		engine.numberOfCylinders = cylinders;

		//Tires
		numberOfTires = tires;
		for (int i = 0; i < numberOfTires; i++)
		{
			tireDiameters = tireDm;
		}
		//tireDiameters = tireDm;
	}
	void print();
};

