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

string StringRemovePunctuations(const string &String)
{
	string StringNew = "";

	for (short i = 0; i < String.length(); i++)
	{
		if (!ispunct(String[i]))
		{
			StringNew += String[i];
		}
	}

	return StringNew;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "String After remove punctuations : \n" << StringRemovePunctuations(String);
	cout << endl << endl;
}