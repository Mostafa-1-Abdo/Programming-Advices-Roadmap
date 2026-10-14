#include <iostream>
#include <string>
#include <cctype>
using namespace std;

enum enLetterCase { Upper = 1, Lower };

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

string StringChangeLettersCase(string String,const enLetterCase &CharCase)
{
	for (short i = 0; i < String.length(); i++)
	{
			if(CharCase == enLetterCase::Upper)
				String[i] = toupper(String[i]);

			else
				String[i] = tolower(String[i]);
	}

	return String;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "String after upper : \n";
	cout << StringChangeLettersCase(String, enLetterCase::Upper) << endl;
	cout << endl << endl;

	cout << "String after lower: \n";
	cout << StringChangeLettersCase(String, enLetterCase::Lower) << endl;

}