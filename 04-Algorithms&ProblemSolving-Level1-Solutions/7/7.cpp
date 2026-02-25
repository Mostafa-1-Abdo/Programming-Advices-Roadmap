#include <iostream>
using namespace std;

float ReadNumber()
{
	float Number;
	cout << "Enter a number\n";
	cin >> Number;
	return Number;
}

float CalculateHalfNumber(const float &Number)
{
	return Number / 2;
}

void PrintHalfNumber(const float& Number)
{
	cout << "\nThe half of " << Number << " is " << CalculateHalfNumber(Number) << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());

	return 0;
}