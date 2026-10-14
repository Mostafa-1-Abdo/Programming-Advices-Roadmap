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

char InvertLetterCase(const char Letter)
{
	return isupper(Letter) ? tolower(Letter) : toupper(Letter);
}
string StringInvertLettersCase(string String)
{
	for (short i = 0; i < String.length(); i++)
		String[i] = InvertLetterCase(String[i]);

	return String;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << StringInvertLettersCase(String);
	cout << endl << endl;
}