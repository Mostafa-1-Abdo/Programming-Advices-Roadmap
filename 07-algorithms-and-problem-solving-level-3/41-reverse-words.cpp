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
string StringReverse(const string &String,const string &Delimiter = " ")
{
	vector <string> veWords = StringSpilt(String, Delimiter);
	string ReverseString = "";

	for (short i = veWords.size() - 1; i >= 0; i--)
	{
		ReverseString += veWords[i];
		ReverseString += Delimiter;
	}

	return ReverseString.substr(0, ReverseString.length() - Delimiter.length());
}
//string StringReverse(const string &String,const string &Delimiter = " ")
//{
//	vector <string> veWords = StringSpilt(String, Delimiter);
//	string ReverseString = "";
//
//	vector <string>::iterator Iter = veWords.end();
//
//	while (Iter>veWords.begin())
//	{
//		Iter--;
//
//		ReverseString += *Iter;
//		ReverseString += Delimiter;
//	}
//
//	return ReverseString.substr(0, ReverseString.length() - Delimiter.length());
//}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	cout << "String after reversing words : \n" << StringReverse(String, "/**/");
	cout << endl << endl;
}