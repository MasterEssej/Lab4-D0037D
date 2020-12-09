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
	cout << "Tire diameters: ";
	for (int i = 0; i < numberOfTires; i++)
	{
		cout << tireDiameters << " ";
	}
	cout << endl;
	//cout << "Tire diameter: " << tireDiameters << endl;
	cout << "----------------------------------------\n" << endl;
}

int main()
{
	string name;
	string adress;
	bool drive = true;
	string color;
	float width, height, volume;
	int cylinders, tires;
	float* diameter = new float;
	

	//int vehicles;
	//cout << "How many vehicles?: ";
	//cin >> vehicles;

	//for (int i = 0; i < vehicles; i++)
	//{
		//cout << "Vehicle " << i + 1 << ": " << endl;
		cout << "----------------------------------------" << endl;
		cout << "Name of owner: "; getline(cin, name);

		cout << "Adress of owner: "; getline(cin, adress);

		cout << "Driver's license? (1 for yes, 0 for no): "; cin >> drive;

		cout << "Color of car: "; cin >> color;

		cout << "Width of car: "; cin >> width;

		cout << "Height of car: "; cin >> height;

		cout << "Volume of engine(in litres): "; cin >> volume;

		cout << "Number of cylinders: "; cin >> cylinders;

		cout << "Number of tires: "; cin >> tires;

		cout << "Diameter of tires: "; cin >> *diameter;

		system("cls");

	//}
	
	MotorVehicle car1(name, adress, drive, color, width, height, volume, cylinders, tires, diameter);
	car1.print();

	return 0;
}