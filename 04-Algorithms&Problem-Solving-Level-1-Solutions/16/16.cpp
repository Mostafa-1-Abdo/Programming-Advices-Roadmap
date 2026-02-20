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

float CalculateRectangleArea(const float& Diagonal, const float& Side)
{
	return Side*sqrt(pow(Diagonal,2)- pow(Side, 2));
}

void PrintRectangleArea(const float& Area)
{
	cout << "\n\nRectangle Area = " << Area << endl;
}

int main()
{
	float Diagonal = ReadPositiveNumber("Enter the diagonal");
	float Side = ReadPositiveNumber("Enter the side");

	PrintRectangleArea(CalculateRectangleArea(Diagonal, Side));

	return 0;
}