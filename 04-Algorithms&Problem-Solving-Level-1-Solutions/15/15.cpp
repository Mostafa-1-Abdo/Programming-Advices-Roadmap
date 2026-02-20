#include <iostream>
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

float CalculateRectangleArea(const float &Length, const float& Width)
{
	return Length * Width;
}

void PrintRectangleArea(const float &Area)
{
	cout << "\n\nRectangle Area = " << Area << endl;
}

int main()
{
	float Length = ReadPositiveNumber("Enter the length");
	float Width = ReadPositiveNumber("Enter the width");

	PrintRectangleArea(CalculateRectangleArea(Length, Width));

	return 0;
}