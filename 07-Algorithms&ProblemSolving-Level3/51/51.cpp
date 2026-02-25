#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double Balance;
	bool DeleteBit = false;
};

//_____________________________________General_____________________________________
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

int ReadNonNegativeNumber(const string& Message = "Enter a number")
{
	int Number;
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
//_________________________________________________________________________________

stClient StringConvertRecordLineToRecord(string RecordLine, const string& Delimiter = " ")
{
	stClient Client;
	vector <string> veFields = StringSplit(RecordLine, Delimiter);

	Client.AccountNumber = veFields[0];
	Client.PinCode = veFields[1];
	Client.Name = veFields[2];
	Client.Phone = veFields[3];
	Client.Balance = stod(veFields[4]);

	return Client;
}
vector <stClient> FileLoadRecords(const string& FileName, const string& Delimiter = " ")
{
	vector <stClient> veRecords;

	ifstream File(FileName);
	if (File.is_open())
	{
		string Line;
		while (getline(File, Line))
			veRecords.push_back(StringConvertRecordLineToRecord(Line, Delimiter));

		File.close();
	}
	else
		cout << "Error : Cannot open file " << FileName << "\n";

	return veRecords;
}
//+++
bool FindClientByAccountNumber(const string& FileName, const string& AccountNumber, stClient& FindClient, const string& Delimiter = " ")
{
	vector <stClient> veClients = FileLoadRecords(FileName, Delimiter);

	for (const stClient& Client : veClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			cout << "Client with account number (" << AccountNumber << ") found !\n\n";
			FindClient = Client;
			return true;
		}
	}
	cout << "Client with account number (" << AccountNumber << ") not found !";
	return false;
}
//+++
void PrintClientRecord(const stClient& Client)
{
	cout << "Account number  : " << Client.AccountNumber << "\n";
	cout << "Pin code        : " << Client.PinCode << "\n";
	cout << "Name            : " << Client.Name << "\n";
	cout << "Phone           : " << Client.Phone << "\n";
	cout << "Account balance : " << Client.Balance;
}
//+++
void UpdateClientRecord(stClient &Client)
{
	Client.PinCode = StringRead("Enter pin code : ");
	Client.Name = StringRead("Enter name : ");
	Client.Phone = StringRead("Enter phone : ");
	Client.Balance = ReadNonNegativeNumber("Enter balance : ");
}
//+++
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
void FileSaveRecordsLinesByVector(const string& FileName, const vector <stClient>& veClients,const string& Delimiter = " ", const bool& DeleteOldData = false)
{
	ofstream File;

	if (DeleteOldData)
		File.open(FileName);
	else
		File.open(FileName, ios::app);
	if (File.is_open())
	{
		for (const stClient& Client : veClients)
		{
			if (Client.DeleteBit == false)
				File << StringConvertRecordToRecordLine(Client, Delimiter) << "\n";
		}

		File.close();
	}
}
//+++
void UpdateClientByAccountNumber(const string& FileName, const string& AccountNumber, const string& Delimiter = " ")
{
	vector <stClient> veClients = FileLoadRecords(FileName, Delimiter);
	stClient Client;

	if (FindClientByAccountNumber(FileName, AccountNumber, Client, Delimiter))
	{
		PrintClientRecord(Client);
		cout << "\n\n";

		bool UpdateClient = StringReadChoice("Are you sure you want to update this client ? ");

		if (UpdateClient)
		{

			for (stClient& Client : veClients)
			{
				if (Client.AccountNumber == AccountNumber)
				{
					UpdateClientRecord(Client);
					break;
				}
			}

			FileSaveRecordsLinesByVector(FileName, veClients, Delimiter, true);

			veClients = FileLoadRecords(FileName, Delimiter);

			cout << "\n\nClient updated successfully";
		}

	}
}

int main()
{
	string FileName = StringRead("Enter file name : ");
	cout << endl << endl;

	string Delimiter = StringRead("Enter delimiter used in this file : ");
	cout << endl << endl;

	string AccountNumber = StringRead("Enter account number : ");
	cout << endl << endl;

	UpdateClientByAccountNumber(FileName, AccountNumber, Delimiter);
	cout << endl << endl;
}