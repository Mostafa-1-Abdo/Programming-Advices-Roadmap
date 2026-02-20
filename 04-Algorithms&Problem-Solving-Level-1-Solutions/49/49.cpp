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

bool CheckPINCode(const int &PIN)
{
	return PIN == 1234;
}

void SetConsoleColor(const bool &PINStatus)
{
	if (PINStatus)
		system("color 2f");
	else
		system("color 4f");
}
void PrintResult(const bool& PINStatus)
{
	if (PINStatus)
		cout << "\n\nWelcome\n"
		     <<"Your balance is : 7500";
	else
		cout << "\nWrong PIN\n";
	cout << endl;
}

void Atm()
{
	while (true)
	{
		system("color 0f");
		int PIN = ReadPINCode();
		bool PINStatus = CheckPINCode(PIN);
		SetConsoleColor(PINStatus);
		PrintResult(PINStatus);
		if(PINStatus)
			break;
		this_thread::sleep_for(chrono::seconds(3));
	}
}

int main()
{
	Atm();

	return 0;
}