#include <iostream>
using namespace std;

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float HoursToDays(const int &Hours)
{
	return (float)Hours / 24;
}

float HoursToWeeks(const int& Hours)
{
	return (float)Hours / (24 * 7);
}

void PrintDaysAndWeeks(const int &Hours)
{
	cout << "\n\n";
	cout<< HoursToDays(Hours) <<" Days\n";
	cout<< HoursToWeeks(Hours) <<" Weeks" << endl;
}

int main()
{
	PrintDaysAndWeeks(ReadPositiveNumber("Enter number of hours"));

	return 0;
}