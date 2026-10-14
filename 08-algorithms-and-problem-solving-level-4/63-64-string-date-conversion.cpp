#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	int Year;
};

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message;
	getline(cin >> ws, String);
	return String;
}

vector <string> StringSplit(string String, const string& Delimiter = " ")
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

stDate ConvertStringToDate(const string &Date,const string &Delimiter)
{
	vector <string> veDate = StringSplit(Date, Delimiter);

	return { (short)stoi(veDate[0]),(short)stoi(veDate[1]),stoi(veDate[2] )};
}

string ConvertDateToString(const stDate &Date,const string Delimiter = "/")
{
	return to_string(Date.Day) + Delimiter + to_string(Date.Month) + Delimiter +to_string(Date.Year);
}

void PrintDate(const stDate& Date)
{
	printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
}

int main()
{
	string DateAsString = StringRead("Enter a date : ");
	cout << endl << endl;

	stDate Date = ConvertStringToDate(DateAsString, "/");
	cout << endl << endl;

	PrintDate(Date);
	cout << endl << endl;

	cout<<ConvertDateToString(Date);
}