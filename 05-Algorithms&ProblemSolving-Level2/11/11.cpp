#include <iostream>
using namespace std;

enum enPalindromeStatus { Palindrome = 1, NotPalindrome };

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

enPalindromeStatus CheckPalindromeStatus(const int& Number)
{
	if(Number== GetReversedNumber(Number))
		return enPalindromeStatus::Palindrome;
	return enPalindromeStatus::NotPalindrome;
}
void PrintPalindromeStatus(const int& Number)
{
	cout << "\n\n";
	if (CheckPalindromeStatus(Number) == enPalindromeStatus::Palindrome)
		cout << Number << " is palindrome";
	else
		cout << Number << " is not palindrome";
	cout << endl;
}

int main()
{
	PrintPalindromeStatus(ReadPositiveNumber("Enter a number"));

	return 0;
}