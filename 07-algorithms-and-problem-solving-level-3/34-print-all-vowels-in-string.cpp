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
void StringPrintVowelLetters(const string &String)
{
	for (short i = 0; i < String.length(); i++)
	{
		if (LetterIsVowel(String[i]))
			cout << String[i] << "	";
	}
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	StringPrintVowelLetters(String);
	cout << endl << endl;
}