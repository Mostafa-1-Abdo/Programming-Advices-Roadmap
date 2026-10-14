#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double Balance;
};

//___________________________General___________________________
enum enLetterCase { Upper = 1, Lower };
string StringChangeLettersCase(string String, const enLetterCase& CharCase)
{
	for (short i = 0; i < String.length(); i++)
	{
		if (CharCase == enLetterCase::Upper)
			String[i] = toupper(String[i]);

		else
			String[i] = tolower(String[i]);
	}

	return String;
}
bool StringReadChoice(const string& Message)
{
	string Choice;

	cout << Message;
	do {
		cin >> Choice;

		Choice = StringChangeLettersCase(Choice, enLetterCase::Lower);

	} while (Choice != "yes" && Choice != "no");

	return Choice == "yes";
}

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message;
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

void FileSaveRecordLine(const string& FileName, const string& RecordLine)
{   
	ofstream File(FileName, ios::app);
	if (File.is_open())
	{
		File << RecordLine << "\n";

		File.close();
	}
}

void FileDeleteOldData(const string& FileName)
{
	bool DeleteOldData = StringReadChoice("Do you want delete old data if found ? ");

	if (DeleteOldData)
		DeleteOldData = StringReadChoice("Are you sure ? ");

	if (DeleteOldData)
	{
		ofstream File(FileName, ios::trunc);

		File.close();

		cout << "All old data deleted successfully";
	}
}
//_____________________________________________________________


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
void AddNewClient(const string& FileName,const string &Delimiter)
{
	short static ClientsNumberAdd = 1;

	cout << "Add client " << ClientsNumberAdd <<"\n";
	stClient Client = ReadClientRecord();
	cout << endl << endl;

	FileSaveRecordLine(FileName, StringConvertRecordToRecordLine(Client,Delimiter));
	cout << "Client Added Successfully";

	ClientsNumberAdd++;
}
//+++
bool AddMoreClient()
{
	return StringReadChoice("\n\nDo you want to add more clients ? ");
}
void AddClients(const string &FileName, const string& Delimiter)
{
	FileDeleteOldData(FileName);

	do{
		system("cls");

		AddNewClient(FileName, Delimiter);

	} while (AddMoreClient());
}

int main()
{
	string FileName = StringRead("Enter file name : ");
	cout << endl << endl;

	string Delimiter = StringRead("Enter delimiter used in this file : ");
	cout << endl << endl;

	AddClients(FileName, Delimiter);
}