#include <iostream>
#include <string>
#include <vector>
using namespace std;

string StringJoin(vector <string> &veWords,const string &Delimiter = " ")
{
	string String = "";

	for (string& Word : veWords)
	{
			String += Word;
			String += Delimiter;
	}

	return String.substr(0, String.length()-Delimiter.length());
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
	vector <string> veWords = { "Mostafa","Abdo","is","number","1"};
	PrintVector(veWords);
	cout << endl << endl;

	string String = StringJoin(veWords,"-_-");
	cout << String;
	cout << endl << endl;

}