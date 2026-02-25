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

void PrintNumberPattern(const short& Number)
{
	for (short i = 1; i <= Number; i++)
	{
		for (short j = i; j >= 1; j--)
			cout << i;
		cout << "\n";
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Enter a number"));

	return 0;
}