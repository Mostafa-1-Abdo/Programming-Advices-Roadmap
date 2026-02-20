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

void PrintInvertedLetterPattern(const short& Number)
{
	for (char i = Number+64; i >= 65; i--)
	{
		for (short j = i; j >= 65; j--)
			cout << i;
		cout << "\n";
	}
}

int main()
{
	PrintInvertedLetterPattern(ReadPositiveNumber("Enter a number"));

	return 0;
}