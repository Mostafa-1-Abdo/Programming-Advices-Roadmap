#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char CharRead(const string& Message = "Enter a char")
{
	char Char;
	cout << Message << "\n";
	cin >> Char;
	return Char;
}

bool LetterIsVowel(char Letter)
{
	char arVowelLetters[5] = { 'a','e','i','o' ,'u' };
	Letter = tolower(Letter);

	for (char& Element : arVowelLetters)
	{
		if (Letter == Element)
			return true;
	}
	return false;
}
void PrintVowelResult(const char &Letter)
{
	cout << "letter '" << Letter << "' " << (LetterIsVowel(Letter) ? "is vowel" :"is not vowel");
}

int main()
{
	char Letter = CharRead("Enter a letter");
	cout << endl << endl;

	PrintVowelResult(Letter);
	cout << endl << endl;
}