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

void PrintVector(vector <string>& Vector, const string& Message = "Vector elements : ")
{
	cout << Message ;
	for (string& Element : Vector)
	{
		cout << "\n" << Element ;
	}
}

vector <string> StringSpilt(string String,const string &Delimiter = " ")
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

int main()
{
	string String = StringRead();
	cout << endl << endl;

	vector <string> veWords = StringSpilt(String);

	PrintVector(veWords, "Vector elements : ");
	cout << endl << endl;

}