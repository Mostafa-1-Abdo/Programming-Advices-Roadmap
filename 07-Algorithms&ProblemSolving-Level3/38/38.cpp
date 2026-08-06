#include <iostream>
#include <string>
using namespace std;

//string StringTrimLeft(string String)
//{ 
//	while (String[0] == ' ')
//		String.erase(0,1);
//	return String;
//}
//string StringTrimRight(string String)
//{
//	while (String[String.length() - 1] == ' ')
//		String.pop_back();
//	return String;
//}

enum enTrimCase {Trim=1,TrimLeft,TrimRight};
string StringTrimLeft(const string& String)
{
	for (short i = 0; i < String.length(); i++)
	{
		if (String[i] != ' ')
			return String.substr(i);
	}
	return "";
}
string StringTrimRight(const string& String)
{
	for (short i = String.length() - 1; i > 0; i--)
		if (String[i] != ' ')
			return String.substr(0, i + 1);
	return "";
}
string StringTrim(const string& String,const enTrimCase &TrimCase)
{
	if (TrimCase == enTrimCase::TrimLeft)
		return StringTrimLeft(String);
	else if (TrimCase == enTrimCase::TrimRight)
		return StringTrimRight(String);
	else
		return  StringTrimRight(StringTrimLeft(String));
}

int main()
{
	string String = "   Mostafa Abdo   ";
	
	cout << "String length = " << String.length() << endl;
	cout << String;
	cout << endl << endl;

	string String2 = StringTrim(String, enTrimCase::TrimLeft);
	cout << "String length after trim left = " << String2.length() << endl;
	cout << String2;
	cout << endl << endl;

	string String3 = StringTrim(String, enTrimCase::TrimRight);
	cout << "String length after trim right = " << String3.length() << endl;
	cout << String3;
	cout << endl << endl;

	string String4 = StringTrim(String, enTrimCase::Trim);
	cout << "String length after trim = " << String4.length() << endl;
	cout << String4;
	cout << endl << endl;
}