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

float CalculateTriangleArea(const float& Base, const float& Height)
{
	return 0.5*Base* Height;
}

void PrintTriangleArea(const float& Area)
{
	cout << "\n\nTriangle Area = " << Area << endl;
}

int main()
{
	float Base = ReadPositiveNumber("Enter the base");
	float Height = ReadPositiveNumber("Enter the height");

	PrintTriangleArea(CalculateTriangleArea(Base, Height));

	return 0;
}