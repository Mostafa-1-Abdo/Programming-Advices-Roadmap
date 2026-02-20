#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
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
//_____________________________________________________________

stClient StringConvertRecordLineToRecord(const string& RecordLine, const string& Delimiter = " ")
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
void PrintHeader(const short &NumberOfClients)
{
	cout << left;
	cout << "\t\t\t\tClients List (" << NumberOfClients << ")" << " Client(s)\n";
	cout << "_______________________________________________________________________________________________\n\n";
	cout << "|" << setw(15) << "Account Number";
	cout << "|" << setw(10) << "Pin Code";
	cout << "|" << setw(40) << "Client Name";
	cout << "|" << setw(12) << "Phone";
	cout << "|" << setw(12) << "Balance" << "|\n";
	cout << "_______________________________________________________________________________________________\n";
}
void PrintClientRecord(const stClient& Client)
{
	cout << "|" << setw(15) << Client.AccountNumber;
	cout << "|" << setw(10) << Client.PinCode;
	cout << "|" << setw(40) << Client.Name;
	cout << "|" << setw(12) << Client.Phone;
	cout << "|" << setw(12) << Client.Balance << "|\n";
}
void PrintClientsRecords(const string &FileName, const string& Delimiter)
{
	vector <stClient> veClients = FileLoadRecords(FileName, Delimiter);

	PrintHeader(veClients.size());
	for (const stClient &Client : veClients)
	{
		PrintClientRecord(Client);
	}
	cout << "_______________________________________________________________________________________________";
}

int main()
{
	string FileName = StringRead("Enter file name : ");
	cout << endl << endl;

	string Delimiter = StringRead("Enter delimiter used in this file : ");
	cout << endl << endl;

	PrintClientsRecords(FileName, Delimiter);
}