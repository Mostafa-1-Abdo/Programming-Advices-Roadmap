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

short StringCountNumberOfChar(const string &String,const char &Char)
{
	short coLetter = 0;

	for (short i = 0; i < String.length(); i++)
	{
			if (String[i] == Char)
				coLetter++;
	}

	return coLetter;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	char Char = CharRead();
	cout << endl << endl;

	cout << "Char '" << Char << "' count = " << StringCountNumberOfChar(String, Char) << endl;
	cout << endl << endl;
}