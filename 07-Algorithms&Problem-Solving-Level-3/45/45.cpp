#include <iostream>
#include <string>
using namespace std;

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double Balance;
};

//______________________________General______________________________

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message ;
	getline(cin >> ws, String);
	return String;
}

double ReadNonNegativeNumber(const string& Message = "Enter a number")
{
	double Number;

	do {
		cout << Message;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Invalid number, enter a valid number\n";
			cin >> Number;
		}
	} while (Number < 0);

	return Number;
}

//___________________________________________________________________

stClient ReadClientRecord()
{
	stClient Client;

	Client.AccountNumber = StringRead("Enter account number : ");
	Client.PinCode = StringRead("Enter pin code : ");
	Client.Name = StringRead("Enter name : ");
	Client.Phone = StringRead("Enter phone : ");
	Client.Balance = ReadNonNegativeNumber("Enter balance : ");

	return Client;
}

string StringConvertRecordToRecordLine(const stClient& Client, const string& Delimiter = " ")
{
	string RecordLine = "";

	RecordLine += Client.AccountNumber + Delimiter;
	RecordLine += Client.PinCode + Delimiter;
	RecordLine += Client.Name + Delimiter;
	RecordLine += Client.Phone + Delimiter;
	RecordLine += to_string(Client.Balance);

	return  RecordLine;
}

int main()
{
	stClient Client1;

	Client1 = ReadClientRecord();
	cout << endl << endl;

	cout << "Client record for saving is : " << StringConvertRecordToRecordLine(Client1, "#");
	cout << endl << endl;
}