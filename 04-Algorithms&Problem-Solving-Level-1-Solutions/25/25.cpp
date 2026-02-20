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

bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}

short ReadUntilNumberBetween(short From, short To)
{
	short Number;
	do {
		Number =ReadPositiveNumber("Enter your age");
	} while (!(ValidatNumberInRange(Number,From,To)));
	return Number;
}

void PrintAge(short Age)
{
	cout << "\n\nYour age is " << Age << endl;
}

int main()
{
	PrintAge(ReadUntilNumberBetween(18,45));

	return 0;
}