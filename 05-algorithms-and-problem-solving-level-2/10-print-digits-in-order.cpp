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

int GetReversedNumber(int Number)
{
	int ReversedNumber = 0;
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		ReversedNumber = ReversedNumber * 10 + Remainder;
		Number /= 10;

	}
	return ReversedNumber;
}
void PrintDigits(int ReversedNumber)
{
	cout << "\n\nDigits :\n";
	while (ReversedNumber > 0)
	{
		cout << ReversedNumber % 10 << "\n";
		ReversedNumber /= 10;
	}
	cout << endl;
}

int main()
{
	PrintDigits(GetReversedNumber(ReadPositiveNumber("Enter a number")));

	return 0;
}