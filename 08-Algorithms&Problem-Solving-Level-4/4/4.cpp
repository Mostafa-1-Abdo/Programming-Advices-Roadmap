#include <iostream>
using namespace std;

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

bool IsLeapYear(const int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short NumberOfDaysInYear(const int Year)
{
	return (IsLeapYear(Year) ? 366 : 365);
}
short NumberOfHoursInYear(const int Year)
{
	return NumberOfDaysInYear(Year) * 24;
}
int NumberOfMinutesInYear(const int Year)
{
	return NumberOfHoursInYear(Year) * 60;
}
int NumberOfSecondsInYear(const int Year)
{
	return NumberOfMinutesInYear(Year) * 60;
}
void PrintYearDetails(const int Year)
{
	cout << "Number of days in year [" << Year << "] is " << NumberOfDaysInYear(Year) << "\n";
	cout << "Number of hours in year [" << Year << "] is " << NumberOfHoursInYear(Year) << "\n";
	cout << "Number of minutes in year [" << Year << "] is " << NumberOfSecondsInYear(Year) << "\n";
	cout << "Number of seconds in year [" << Year << "] is " << NumberOfSecondsInYear(Year) << "\n";
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	cout << endl << endl;

	PrintYearDetails(Year);
}