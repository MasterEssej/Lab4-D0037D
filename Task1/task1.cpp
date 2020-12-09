#include <iostream>
#include <vector>
#include <string>
#include "task1.h"
using namespace std;

void Engine::print()
{
	cout << "Engine:" << endl;
	cout << "----------------------------------------" << endl;;
	cout << "Volume(litres): " << sizeInLitres << endl;
	cout << "Cylinders: " << numberOfCylinders << endl;
	cout << "----------------------------------------\n" << endl;
}

void Body::print()
{
	cout << "Body:" << endl;
	cout << "----------------------------------------" << endl;;
	cout << "Color: " << color << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "----------------------------------------\n" << endl;
}

void Owner::print()
{
	cout << "Owner:" << endl;
	cout << "----------------------------------------" << endl;;
	cout << "Name: " << name << endl;
	cout << "Adress: " << adress << endl;
	cout << "Driver's license: " << boolalpha << allowedToDrive << endl;
	cout << "----------------------------------------\n" << endl;
}

void MotorVehicle::print()
{
	owner.print();
	body.print();
	engine.print();
	cout << "Tires:" << endl;
	cout << "----------------------------------------" << endl;;
	cout << "Number of tires: " << numberOfTires << endl;
	cout << "Tire diameter: " << tireDiameters << endl;
	cout << "----------------------------------------\n" << endl;
}

int main()
{
	int vehicles;
	cout << "How many vehicles?: ";
	cin >> vehicles;

	MotorVehicle array1[5];

	for (int i = 0; i < vehicles; i++)
	{
		cout << "Vehicle " << i + 1 << ": " << endl;
		cout << "----------------------------------------" << endl;
		cin.ignore(1, '\n');
		cout << "Name of owner: "; getline(cin, array1[i].owner.name);

		cout << "Adress of owner: "; getline(cin, array1[i].owner.adress);

		cout << "Driver's license? (1 for yes, 0 for no): "; cin >> array1[i].owner.allowedToDrive;

		cout << "Color of car: "; cin >> array1[i].body.color;

		cout << "Width of car: "; cin >> array1[i].body.width;

		cout << "Height of car: "; cin >> array1[i].body.height;

		cout << "Volume of engine(in litres): "; cin >> array1[i].engine.sizeInLitres;

		cout << "Number of cylinders: "; cin >> array1[i].engine.numberOfCylinders;

		cout << "Number of tires: "; cin >> array1[i].numberOfTires;

		cout << "Diameter of tires: "; cin >> *array1[i].tireDiameters;

		system("cls");

	}
	for (int i = 0; i < vehicles; i++)
	{
		cout << "\nVehicle " << i + 1 << ":\n" << endl;
		array1[i].print();
	}

	return 0;
}