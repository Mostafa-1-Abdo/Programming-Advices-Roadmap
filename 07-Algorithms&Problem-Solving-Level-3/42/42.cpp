#include <iostream>
#include <string>
#include <vector>
using namespace std;

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

//string StringReplace(string String, const string& OldWord, const string& NewWord)
//{
//	short StartIndex = 0;
//
//	while ((StartIndex = String.find(OldWord,StartIndex)) != string::npos)
//	{
//		String.erase(StartIndex, OldWord.length());
//		String.insert(StartIndex, NewWord);
//
//		StartIndex += NewWord.length();
//	}
//
//	return String;
//}

//vector <string> StringSpilt(string String, const string& Delimiter = " ")
//{
//	string Word;
//	short EndIndex;
//	vector <string> veWords;
//
//	while ((EndIndex = String.find(Delimiter)) != string::npos)
//	{
//		Word = String.substr(0, EndIndex);
//
//		if (!Word.empty())
//			veWords.push_back(Word);
//
//		String.erase(0, EndIndex + Delimiter.length());
//	}
//	if (!String.empty())
//		veWords.push_back(String);
//
//	return veWords;
//}
//string StringJoin(vector <string>& veWords, const string& Delimiter = " ")
//{
//	string String = "";
//
//	for (string& Word : veWords)
//	{
//		String += Word;
//		String += Delimiter;
//	}
//
//	return String.substr(0, String.length() - Delimiter.length());
//}
//string StringReplace(const string &String,const string &OldWord, const string& NewWord, const string& Delimiter = " ")
//{
//	vector <string> veWords = StringSpilt(String, Delimiter);
//
//	for (string &Word : veWords)
//	{
//		if (Word == OldWord)
//			Word = NewWord;
//	}
//
//	return StringJoin(veWords, Delimiter);
//}

string StringReplace(string String, const string& OldWord, const string& NewWord)
{
	short StartIndex = 0;

	while ((StartIndex = String.find(OldWord, StartIndex)) != string::npos)
	{
		String.replace(StartIndex, OldWord.length(), NewWord);

		StartIndex += NewWord.length();
	}

	return String;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "String after replace words : \n" << StringReplace(String, "Mostafa", "Nada");
	cout << endl << endl;
}