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

float CalculateCircleAreaDescribedAroundArbitraryTriangle(const float& A, const float& B, const float& C)
{
	const float PI = (float)22 / 7;
	float P = (A + B + C) / 2;
	return PI * pow((A * B * C)/(4*sqrt(P*(P-A)* (P - B)* (P - C))),2);
}

void PrintCircleArea(const float& Area)
{
	cout << "\n\nCircle Area = " << Area << endl;
}

int main()
{
	float A = ReadPositiveNumber("Enter A");
	float B = ReadPositiveNumber("Enter B");
	float C = ReadPositiveNumber("Enter C");

	PrintCircleArea(CalculateCircleAreaDescribedAroundArbitraryTriangle(A,B,C));

	return 0;
}