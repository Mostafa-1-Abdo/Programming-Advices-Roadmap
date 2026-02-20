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
void StringPrintEachWord(string String, const string& Delimiter = " ")
{
	string Word;
	short EndIndex;

	while ((EndIndex = String.find(Delimiter)) != string::npos)
	{
		Word = String.substr(0, EndIndex);

		if (!Word.empty())
			cout << Word << '\n';

		String.erase(0, EndIndex + Delimiter.length());
	}
	if (!String.empty())
		cout << String;
}

int main()
{
	string String = StringRead();
	cout << endl << endl;

	StringPrintEachWord(String);
	cout << endl << endl;
}