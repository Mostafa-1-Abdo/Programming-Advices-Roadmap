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

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

short StringCountChar(string String,char Char,const bool &MatchCase = true)
{
	short coChar = 0;

	for (short i = 0; i < String.length(); i++)
	{
		if (!MatchCase)
		{
			Char = tolower(Char);
			String[i] = tolower(String[i]);
		}

		if (Char == String[i])
			coChar++;
	}

	return coChar;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	char Char = CharRead();
	cout << endl << endl;

	cout << "Char '" << Char << "' with match case count = " << StringCountChar(String, Char) << endl;
	cout << "Char '" << Char << "' with not match case count = " << StringCountChar(String, Char, false);
	cout << endl << endl;
}