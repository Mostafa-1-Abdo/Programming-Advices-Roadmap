#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
string StringJoin(const string arWords[],const short &ArrayLength,const string &Delimiter = " ")
{
	string String = "";

	for (short i = 0; i < ArrayLength; i++)
	{
			String += arWords[i];
			String += Delimiter;
	}

	return String.substr(0, String.length() - Delimiter.length());
}

void PrintVector(vector <string>& Vector, const string& Message = "Vector elements : ")
{
	cout << Message;
	for (string& Element : Vector)
	{
		cout << Element << "    ";
	}
}

int main()
{
	vector <string> veWords = { "Mostafa","Abdo","is","number","1" };
	string String = StringJoin(veWords, "___");
	cout << String;
	cout << endl << endl;

	string arWords[] = { "Mostafa","Abdo","is","number","1" };
	string String2 = StringJoin(arWords, 5, "___");
	cout << String2;
	cout << endl << endl;
}