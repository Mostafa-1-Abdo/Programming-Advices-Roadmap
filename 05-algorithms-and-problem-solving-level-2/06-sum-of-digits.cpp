#include <iostream>
using namespace std;

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

short GetSumDigits(int Number)
{
	short SumDigits = 0;
	while (Number > 0)
	{
		SumDigits += Number % 10;
		Number /= 10;
	}
	return SumDigits;
}
void PrintSumDigits(int Number)
{
	cout << "\n\nSum of Digits = " << GetSumDigits(Number) << endl;
}

int main()
{
	PrintSumDigits(ReadPositiveNumber("Enter a number"));

	return 0;
}