#include <iostream>
#include <cctype>
using namespace std;

char CharRead(const string& Message = "Enter a char")
{
	char Char;
	cout << Message << "\n";
	cin >> Char;
	return Char;
}

char InvertLetterCase(const char Letter)
{
	return isupper(Letter) ? tolower(Letter) : toupper(Letter);
}

int main()
{
	char Letter = CharRead("Enter a letter");
	cout << endl << endl;

	cout << InvertLetterCase(Letter);
	cout << endl << endl;
}