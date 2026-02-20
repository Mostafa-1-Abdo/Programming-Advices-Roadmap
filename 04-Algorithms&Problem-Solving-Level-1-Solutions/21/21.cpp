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

float CalculateCircleArea(const float& Circumference)
{
	const float PI = (float)22 / 7;
	return pow(Circumference, 2) / (4 * PI);
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	PrintCircleArea(CalculateCircleArea(ReadPositiveNumber("Enter the circumference")));

	return 0;
}