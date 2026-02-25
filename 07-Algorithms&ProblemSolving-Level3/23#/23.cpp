#include <iostream>
#include <string>
using namespace std;

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

void StringPrintFirstLetterOfEachWord(const string& String)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < String.length(); i++)
	{
		if (IsFirstLetter && String[i] != ' ')
			cout << String[i] << "    ";

		IsFirstLetter = String[i] == ' ';
	}
}

int main()
{
	string String = StringRead();

	StringPrintFirstLetterOfEachWord(String);
}