#include <iostream>
using namespace std;

enum enMonth
{
	January = 1, February, March, April, May, June, July, August, September, October, November, December
};

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
short NumberOfDaysInMonth(const int Year,const int Month)
{
	switch ((enMonth)Month)
	{
	case enMonth::January:
	case enMonth::March:
	case enMonth::May:
	case enMonth::July:
	case enMonth::August:
	case enMonth::October:
	case enMonth::December:
		return 31;
	case enMonth::April:
	case enMonth::June:
	case enMonth::September:
	case enMonth::November:
		return 30;
	case February:
		return IsLeapYear(Year) ? 29 : 28;
	}
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
	switch ((enMonth)Month)
	{
	case enMonth::January:
		return "January";
	case enMonth::February:
		return "February";
	case enMonth::March:
		return "March";
	case enMonth::April:
		return "April";
	case enMonth::May:
		return "May";
	case enMonth::June:
		return "June";
	case enMonth::July:
		return "July";
	case enMonth::August:
		return "August";
	case enMonth::September:
		return "September";
	case enMonth::October:
		return "October";
	case enMonth::November:
		return "November";
	case enMonth::December:
		return "December";
	}
}
void PrintMonthDetails(const int Year,const short Month)
{
	string MonthName = GetMonthName(Month);

	cout << "Number of days in "<<MonthName<<" in year [" << Year << "] is " << NumberOfDaysInMonth(Year, Month) << "\n";
	cout << "Number of hours in "<<MonthName<<" in year [" << Year << "] is " << NumberOfHoursInMonth(Year, Month) << "\n";
	cout << "Number of minutes in "<<MonthName<<" in year [" << Year << "] is " << NumberOfSecondsInMonth(Year, Month) << "\n";
	cout << "Number of seconds in "<<MonthName<<" in year [" << Year << "] is " << NumberOfSecondsInMonth(Year, Month) << "\n";
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	int Month = ReadNumberInRange("Enter a month : ",1,12);
	cout << endl << endl;

	PrintMonthDetails(Year,Month);
}