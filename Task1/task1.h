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
	float* dia = new float;
	MotorVehicle()
	{
		//Owner
		owner.name = "Raul";
		owner.adress = "Gatan";
		owner.allowedToDrive = true;

		//Body
		body.color = "black";
		body.width = 2;
		body.height = 2;

		//Engine
		engine.sizeInLitres = 10;
		engine.numberOfCylinders = 4;

		//Tires
		numberOfTires = 4;
		tireDiameters = dia;
	}
	~MotorVehicle()
	{
		delete tireDiameters;
	}
	void print();
};

