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

float CalculateCircleAreaInscribedInSquare(const float& SquareSide)
{
	const float PI = (float)22 / 7;
	return PI * pow(SquareSide, 2) / 4;
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	PrintCircleArea(CalculateCircleAreaInscribedInSquare(ReadPositiveNumber("Enter the square side")));

	return 0;
}