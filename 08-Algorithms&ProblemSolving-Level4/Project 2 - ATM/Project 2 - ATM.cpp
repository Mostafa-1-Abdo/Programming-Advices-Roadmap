#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

enum enMainMenuOption
{
	QuickWithdraw = 1, NormalWithdraw, Deposit, CheckBalance, Logout
};

struct stClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double Balance = 0;
};
//_________________________General_________________________
int ReadNumber(const string& Message = "Enter a number")
{
	int Number;
	cout << Message;
	cin >> Number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid number, enter a valid number\n";
		cin >> Number;
	}
	return Number;
}
bool ValidateNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}
int ReadNumberInRange(const string& Message, const short From, const short To)
{
	int Number;

	do {
		Number = ReadNumber(Message);

	} while (!(ValidateNumberInRange(Number, From, To)));

	return Number;
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

string StringRead(const string& Message = "Enter a string")
{
	string String;
	cout << Message;
	getline(cin >> ws, String);
	return String;
}

enum enLetterCase
{
	Upper = 1, Lower
};
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
bool StringReadOption(const string& Message)
{
	string Option;

	cout << Message;
	do {
		cin >> Option;

		Option = StringChangeLettersCase(Option, enLetterCase::Lower);

	} while (Option != "yes" && Option != "no");

	return Option == "yes";
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

void PrintHeader(const string& Heading)
{
	cout << "------------------------------------\n";
	cout << "\t" << Heading << "\n";
	cout << "------------------------------------\n";
}

void WaitAndClear()
{
	cout << "Press any key to go back to main menu...";
	system("pause>0");
	system("cls");
}
//_________________________________________________________

//_________________________ATMGeneral_________________________
stClient ConvertClientRecordLineToRecord(const string& RecordLine, const string& Delimiter)
{
	vector <string> veFields = StringSplit(RecordLine, Delimiter);

	return { veFields[0] ,veFields[1] ,veFields[2] ,veFields[3] ,stod(veFields[4]) };
}
vector <stClient> FileLoadClientsListInVector(const string& ClientsFileName, const string& Delimiter)
{
	vector <stClient> veClients;

	ifstream File(ClientsFileName);
	if (File.is_open())
	{
		string Line;
		while (getline(File, Line))
		{
			veClients.push_back(ConvertClientRecordLineToRecord(Line, Delimiter));
		}

		File.close();
	}
	else
		cout << "Error : Cannot open file (" << ClientsFileName << ")";

	return veClients;
}

string ConvertClientRecordToRecordLine(const stClient& Client, const string& Delimiter)
{
	return	Client.AccountNumber + Delimiter + Client.PinCode + Delimiter + Client.Name + Delimiter + Client.Phone + Delimiter + to_string(Client.Balance);
}
void FileSaveClientsRecordsLiensByVector(const string& ClientsFileName, const string& Delimiter, const vector <stClient>& veClients)
{
	ofstream File(ClientsFileName);
	if (File.is_open())
	{
		for (const stClient& Client : veClients)
			File << ConvertClientRecordToRecordLine(Client, Delimiter) << "\n";

		File.close();
	}
}

void ApplyTransaction(double& ClientBalance, const int WithdrawalAmount)
{
	if (ClientBalance < WithdrawalAmount)
	{
		cout << "\n\nInsufficient balance, Transaction was cancelled!";
		return;
	}

	ClientBalance -= WithdrawalAmount;
	cout << "\n\nDone Successfully, new balance is " << ClientBalance;
}
//_________________________________________________________
bool IsLoginValid(vector <stClient>& veClients, const string& AccountNumber, const string PinCode, stClient*& poClient)
{
	for (stClient& Client : veClients)
	{
		if (Client.AccountNumber == AccountNumber && Client.PinCode == PinCode)
		{
			poClient = &Client;
			return true;
		}
	}
	return false;
}
stClient* ShowLoginScreen(vector <stClient>& veClients)
{
	stClient* poClient;
	string AccountNumber, PinCode;
	bool LoginValid = true;

	do
	{
		PrintHeader("    Login Screen");

		if (!LoginValid)
			cout << "Invalid Account Number or Pin Code!\n";

		AccountNumber = StringRead("Enter Account Number : ");
		PinCode = StringRead("Enter Pin Code : ");

		LoginValid = IsLoginValid(veClients, AccountNumber, PinCode, poClient);

		system("cls");

	} while (!LoginValid);

	return poClient;
}

void ShowMainMenuScreen()
{
	cout << "=============================================\n";
	cout << "\t\t Main Menu Screen\n";
	cout << "=============================================\n";
	cout << "\t[1] Quick Withdraw.\n";
	cout << "\t[2] Normal Withdraw.\n";
	cout << "\t[3] Deposit.\n";
	cout << "\t[4] Check Balance.\n";
	cout << "\t[5] Logout.\n";
	cout << "=============================================\n";
}

void PrintQuickWithdrawOptions()
{
	cout << "\t[1] 20";
	cout << "\t\t[2] 50\n";
	cout << "\t[3] 100";
	cout << "\t\t[4] 200\n";
	cout << "\t[5] 400";
	cout << "\t\t[6] 600\n";
	cout << "\t[7] 800";
	cout << "\t\t[8] 1000\n";
	cout << "\t[9] Exit\n";
	cout << "------------------------------------\n";
}
short ConvertOptionToWithdrawalAmount(const short Option)
{
	short arAmounts[] = { 20,50,100,200,400,600,800,1000 };
	return arAmounts[Option - 1];
}
void ShowQuickWithdrawScreen(double& ClientBalance)
{
	PrintHeader("Quick Withdraw Screen");
	PrintQuickWithdrawOptions();

	cout << "Your balance is " << ClientBalance;
	short Option = ReadNumberInRange("\nChoose what do you want to do ? 1:9 ? ", 1, 9);

	if (Option < 9 && StringReadOption("\n\nAre you sure you want to perform this transaction? "))
	{
		ApplyTransaction(ClientBalance, ConvertOptionToWithdrawalAmount(Option));
	}
}

enum class enTransactionType
{
	Withdrawal = 1, Deposit
};
string TransactionTypeToString(const enTransactionType TransactionType)
{
	switch (TransactionType)
	{
	case enTransactionType::Withdrawal:
		return "Withdrawal";
	case enTransactionType::Deposit:
		return "Deposit";
	}
}
void ShowTransactionScreen(double& ClientBalance, const enTransactionType TransactionType)
{
	PrintHeader(TransactionTypeToString(TransactionType) + " Screen");

	int Amount;
	do
	{
		Amount = ReadNonNegativeNumber("Enter an amount multiple of 5's : ");

	} while (Amount % 5 != 0);
	if (TransactionType == enTransactionType::Deposit)
		Amount *= -1;

	if (StringReadOption("\n\nAre you sure you want to perform this transaction? "))
	{
		ApplyTransaction(ClientBalance, Amount);
	}
}

void ShowCheckBalanceScreen(const double Balance)
{
	PrintHeader("Check Balance Screen");
	cout << "Your balance is " << Balance;
}

void ATM(const string& ClientsFileName, const string& Delimiter)
{
	vector <stClient> veClients = FileLoadClientsListInVector(ClientsFileName, Delimiter);
	stClient* Client = ShowLoginScreen(veClients);

	while (true)
	{
		ShowMainMenuScreen();

		enMainMenuOption Option = (enMainMenuOption)ReadNumberInRange("Choose what do you want to do ? 1:5 ? ", 1, 5);

		system("cls");
		switch (Option)
		{
		case enMainMenuOption::QuickWithdraw:
			ShowQuickWithdrawScreen(Client->Balance);
			break;
		case enMainMenuOption::NormalWithdraw:
			ShowTransactionScreen(Client->Balance, enTransactionType::Withdrawal);
			break;
		case enMainMenuOption::Deposit:
			ShowTransactionScreen(Client->Balance, enTransactionType::Deposit);
			break;
		case enMainMenuOption::CheckBalance:
			ShowCheckBalanceScreen(Client->Balance);
			break;
		case enMainMenuOption::Logout:
			return;
		}

		FileSaveClientsRecordsLiensByVector(ClientsFileName, Delimiter, veClients);

		cout << endl << endl;
		WaitAndClear();
	}
}

int main()
{
	string ClientsFileName = "Clients.txt";
	string ClientsDelimiter = "#";

	ATM(ClientsFileName, ClientsDelimiter);
}