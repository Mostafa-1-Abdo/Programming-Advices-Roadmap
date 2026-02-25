#include <iostream>
#include <string>
#include <cctype>
using namespace std;

enum enWhatToCount { All = 1, Upper, Lower, Vowel };

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
short StringCountLetters(string String, const enWhatToCount& LetterCase)
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

		else if (LetterCase == enWhatToCount::Vowel && LetterIsVowel(String[i]))
			coLetters++;
	}

	return coLetters;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "Number of vowel letters = " << StringCountLetters(String, enWhatToCount::Vowel);
	cout << endl << endl;
}