#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enLetterCase { Upper = 1, Lower };
string StringChangeLettersCase(string String, const enLetterCase& CharCase)
{
	for (short i = 0; i < String.length(); i++)
	{
		if (CharCase == enLetterCase::Upper)
			String[i] = toupper(String[i]);

		else
			String[i] = tolower(String[i]);
	}

	return String;
}

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

//string StringReplace(string String,string OldWord, const string& NewWord,const bool &MatchCase = true)
//{
//	short StartIndex = 0;
//	string StringCopy = String;
//	
//	if (!MatchCase)
//	{
//		StringCopy = StringChangeLettersCase(String, enLetterCase::Lower);
//		OldWord = StringChangeLettersCase(OldWord, enLetterCase::Lower);
//	}
//
//	while ((StartIndex = StringCopy.find(OldWord,StartIndex)) != string::npos)
//	{
//		String.erase(StartIndex, OldWord.length());
//		String.insert(StartIndex, NewWord);
//
//		StringCopy.erase(StartIndex, OldWord.length());
//		StringCopy.insert(StartIndex, NewWord);
//
//		StartIndex += NewWord.length();
//	}
//
//	return String;
//}

vector <string> StringSpilt(string String, const string& Delimiter = " ")
{
	string Word;
	short EndIndex;
	vector <string> veWords;

	while ((EndIndex = String.find(Delimiter)) != string::npos)
	{
		Word = String.substr(0, EndIndex);

		if (!Word.empty())
			veWords.push_back(Word);

		String.erase(0, EndIndex + Delimiter.length());
	}
	if (!String.empty())
		veWords.push_back(String);

	return veWords;
}
string StringJoin(vector <string>& veWords, const string& Delimiter = " ")
{
	string String = "";

	for (string& Word : veWords)
	{
		String += Word;
		String += Delimiter;
	}

	return String.substr(0, String.length() - Delimiter.length());
}
string StringReplace(const string &String,const string &OldWord, const string& NewWord, const string& Delimiter = " ",const bool &MatchCase = true)
{
	vector <string> veWords = StringSpilt(String, Delimiter);

	for (string &Word : veWords)
	{
		if (MatchCase)
		{
			if (Word == OldWord)
				Word = NewWord;
		}

		else
		{
			if(StringChangeLettersCase(Word, enLetterCase::Lower)== StringChangeLettersCase(OldWord, enLetterCase::Lower))
				Word = NewWord;
		}

	}

	return StringJoin(veWords, Delimiter);
}

//string StringReplace(string String,string OldWord, const string& NewWord, const bool &MatchCase = true)
//{
//	short StartIndex = 0;
//	string StringCopy = String;
//
//	if (!MatchCase)
//	{
//		StringCopy = StringChangeLettersCase(String, enLetterCase::Lower);
//		OldWord = StringChangeLettersCase(OldWord, enLetterCase::Lower);
//	}
//
//	while ((StartIndex = StringCopy.find(OldWord, StartIndex)) != string::npos)
//	{
//		String.replace(StartIndex, OldWord.length(), NewWord);
//
//		StringCopy.replace(StartIndex, OldWord.length(), NewWord);
//
//		StartIndex += NewWord.length();
//	}
//
//	return String;
//}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "String after replace words : " << StringReplace(String, "Mostafa", "Nada", " ", true)<<endl;
	cout << "String after replace words : " << StringReplace(String, "Mostafa", "Nada", " ", false);
	cout << endl << endl;
}