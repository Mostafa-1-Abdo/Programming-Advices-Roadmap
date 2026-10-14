#include <iostream>

using namespace std;

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

short CalculateDigitFrequency(int Number, const short& Digit)
{
	short DigitFrequency = 0;
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		if (Digit == Remainder)
			DigitFrequency++;
		Number /= 10;

	}
	return DigitFrequency;
}
void PrintAllDigitFrequency(int Number)
{
	cout << "\n\n";
	for(short i=0;i<=9;i++)
	{
		short DigitFrequency = CalculateDigitFrequency(Number, i);
		if (DigitFrequency > 0)
			cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)" << endl;
	}
}

int main()
{
	PrintAllDigitFrequency(ReadPositiveNumber("Enter a number"));

	return 0;
}