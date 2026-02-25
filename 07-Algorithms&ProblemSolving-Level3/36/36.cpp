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

short StringCountWords(string String,const string &Delimiter = " ")
{
	string Word;
	short EndIndex;
	short coWords = 0;

	while ((EndIndex = String.find(Delimiter)) != string::npos)
	{
		Word = String.substr(0, EndIndex);

		if (!Word.empty())
			coWords++;

		String.erase(0, EndIndex + Delimiter.length());
	}
	if (!String.empty())
		coWords++;

	return coWords;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "The number of words in your string is : " << StringCountWords(String);
	cout << endl << endl;
}