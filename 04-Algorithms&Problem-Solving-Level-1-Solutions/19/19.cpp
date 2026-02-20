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

float CalculateCircleArea(const float& Diameter)
{
	const float PI = (float)22 / 7;
	return PI * pow(Diameter, 2)/4;
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	PrintCircleArea(CalculateCircleArea(ReadPositiveNumber("Enter the diameter")));

	return 0;
}