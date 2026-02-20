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

float CalculateCircleArea(const float& Radius)
{
	const float PI = (float)22/7;
	return PI*pow(Radius,2);
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	PrintCircleArea(CalculateCircleArea(ReadPositiveNumber("Enter the radius")));

	return 0;
}