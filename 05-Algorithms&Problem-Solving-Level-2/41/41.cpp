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
void FillArray(int Array[100], short& ArrayLength)
{
	ArrayLength = ReadPositiveNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> Array[i];
	}
	cout << endl;
}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message << " : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

enPalindromeStatus CheckPalindromeArrayStatus(const int Array[100], const short& ArrayLength)
{
	for (short i = 0; i < ArrayLength; i++)
	{
		if (Array[i] != Array[ArrayLength-1 - i])
			return enPalindromeStatus::NotPalindrome;
	}
	return enPalindromeStatus::Palindrome;
}
void PrintReault(const int Array[100], const short& ArrayLength)
{
	cout << "\n\n";
	if (CheckPalindromeArrayStatus(Array, ArrayLength)== enPalindromeStatus::Palindrome)
		cout << "Yes, array is palindrome";
	else
		cout << "No, array is not palindrome";
	cout << endl;
}

int main()
{
	int Array[100];
	short ArrayLength = 0;

	FillArray(Array, ArrayLength);

	PrintArray(Array, ArrayLength, "Array Elements");

	PrintReault(Array, ArrayLength);

	return 0;
}