#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double Balance;
};

//__________________________General____________________________________

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

//_____________________________________________________________________

stClient StringConvertRecordLineToRecord(const string &RecordLine, const string& Delimiter = " ")
{
	stClient Client;
	vector <string> veFields = StringSplit(RecordLine, Delimiter);

	if (veFields.size() == 5)
	{
		Client.AccountNumber = veFields[0];
		Client.PinCode = veFields[1];
		Client.Name = veFields[2];
		Client.Phone = veFields[3];
		Client.Balance = stod(veFields[4]);
	}

	else
		cout << "Error : Invalid record line!\n\n";

	return Client;
}

void PrintClientRecord(const stClient& Client)
{
	cout << "Account number  : " << Client.AccountNumber << "\n";
	cout << "Pin code        : " << Client.PinCode << "\n";
	cout << "Name            : " << Client.Name << "\n";
	cout << "Phone           : " << Client.Phone << "\n";
	cout << "Balance         : " << Client.Balance;
}

int main()
{
	string DataLine= "A150#1234#Mostafa Abdo#01225924553#50000.000000";

	cout << "Data line : " << DataLine;
	cout << endl << endl;

	stClient Client1 = StringConvertRecordLineToRecord(DataLine, "#");
	PrintClientRecord(Client1);
	cout << endl << endl;
}