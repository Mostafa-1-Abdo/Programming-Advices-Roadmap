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

short ReadNumber(const string& Message = "Enter a number")
{
	short Number;
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
bool ValidateNumberInRange(const short Number, const short From, const short To)
{
	return Number >= From && Number <= To;
}
short ReadNumberInRange(const string& Message, const short From, const short To)
{
	short Number;

	do {
		Number = ReadNumber(Message);

	} while (!(ValidateNumberInRange(Number, From, To)));

	return Number;
}

bool IsLeapYear(const int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
short NumberOfDaysInMonth(const int Year, const int Month)
{
	short arNumberOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arNumberOfDaysInMonths[Month - 1];
}
short NumberOfHoursInMonth(const int Year, const short Month)
{
	return NumberOfDaysInMonth(Year, Month) * 24;
}
int NumberOfMinutesInMonth(const int Year, const short Month)
{
	return NumberOfHoursInMonth(Year, Month) * 60;
}
int NumberOfSecondsInMonth(const int Year, const short Month)
{
	return NumberOfMinutesInMonth(Year, Month) * 60;
}
string GetMonthName(const short Month)
{
	string arNameOfMonths[12] = { "January" ,"February" ,"March","April","May","June", "July","August", "September","October","November","December" };
	return arNameOfMonths[Month - 1];
}
void PrintMonthDetails(const int Year, const short Month)
{
	string MonthName = GetMonthName(Month);

	cout << "Number of days in " << MonthName << " in year [" << Year << "] is " << NumberOfDaysInMonth(Year, Month) << "\n";
	cout << "Number of hours in " << MonthName << " in year [" << Year << "] is " << NumberOfHoursInMonth(Year, Month) << "\n";
	cout << "Number of minutes in " << MonthName << " in year [" << Year << "] is " << NumberOfSecondsInMonth(Year, Month) << "\n";
	cout << "Number of seconds in " << MonthName << " in year [" << Year << "] is " << NumberOfSecondsInMonth(Year, Month) << "\n";
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	short Month = ReadNumberInRange("Enter a month : ", 1, 12);
	cout << endl << endl;

	PrintMonthDetails(Year, Month);
}