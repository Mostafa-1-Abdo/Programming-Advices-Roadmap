#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int ReadPINCode()
{
	int PIN;
	cout << "Enter PIN code\n";
	cin >> PIN;
	return PIN;
}

bool CheckPINCode(const int& PIN)
{
	return PIN == 1234;
}

void SetConsoleColor(const bool& PINStatus)
{
	if (PINStatus)
		system("color 2f");
	else
		system("color 4f");
}
void PrintResult(const bool& PINStatus,short Tries)
{
	if (PINStatus)
		cout << "\n\nWelcome\n"
		<< "Your balance is : 7500";
	else
	{
		cout << "\nWrong PIN\n"
			<< "You have " << Tries << " more tries\n";
		if (Tries == 0)
			cout << "Your card blocked, call the bank for help\n";
	}
	cout << endl;
}

void Atm()
{
	short Tries = 3;
	while (true)
	{
		system("color 0f");
		int PIN = ReadPINCode();
		bool PINStatus = CheckPINCode(PIN);
		if (!PINStatus)
			Tries--;
		SetConsoleColor(PINStatus);
		PrintResult(PINStatus, Tries);
		if (PINStatus || Tries==0)
			break;
		this_thread::sleep_for(chrono::seconds(3));
	}
}

int main()
{
	Atm();

	return 0;
}