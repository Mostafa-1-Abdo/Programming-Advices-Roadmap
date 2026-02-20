#include <iostream>
#include <cmath>
using namespace std;

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateCircleAreaInscribedInIsoscelesTriangle(const float& Base, const float& Leg)
{
	const float PI = (float)22 / 7;
	return PI * (pow(Base, 2) / 4) * ((2 * Leg - Base) / (2 * Leg + Base));
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	float Base = ReadPositiveNumber("Enter the triangle base");
	float Leg = ReadPositiveNumber("Enter the triangle leg");

	PrintCircleArea(CalculateCircleAreaInscribedInIsoscelesTriangle(Base,Leg));

	return 0;
}