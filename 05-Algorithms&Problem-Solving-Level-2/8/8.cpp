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

bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}
short ReadNumberInRange(const string& Message, const short& From, const short& To)
{
	short Number;
	do {
		Number = ReadPositiveNumber(Message);
	} while (!(ValidatNumberInRange(Number, From, To)));
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
void PrintDigitFrequency(int Number, const short& Digit)
{
	cout << "\n\nDigit "<< Digit<<" Frequency is " << CalculateDigitFrequency(Number,Digit)<<" Time(s)" << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a number");
	short Digit = ReadNumberInRange("Enter a digit",0,9);

	PrintDigitFrequency(Number, Digit);

	return 0;
}