#include <iostream>
#include <string>
#include <cctype>
using namespace std;

enum enWhatToCount { All = 1, Upper, Lower };

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

short StringCountLetters(string String,const enWhatToCount &LetterCase)
{
	short coLetters = 0;

	for (short i = 0; i < String.length(); i++)
	{
		if (LetterCase == enWhatToCount::All)
			return String.length();

		else if (LetterCase == enWhatToCount::Upper && isupper(String[i]))
			coLetters++;

		else if (LetterCase == enWhatToCount::Lower && islower(String[i]))
			coLetters++;
	}

	return coLetters;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "Number of letters = " << StringCountLetters(String, enWhatToCount::All) <<endl;
	cout << "Number of upper letters = " << StringCountLetters(String, enWhatToCount::Upper) << endl;
	cout << "Number of lower letters = " << StringCountLetters(String, enWhatToCount::Lower) << endl;
}