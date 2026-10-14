#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

string StringLowerFirstLetterOfEachWord(string String)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < String.length(); i++)
	{
		if (IsFirstLetter && String[i] != ' ')
			String[i] = tolower(String[i]);

		IsFirstLetter = String[i] == ' ';
	}

	return String;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << StringLowerFirstLetterOfEachWord(String);
	cout << endl << endl;
}