#include <iostream>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	int Year;
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
short NumberOfDaysInMonth(const int Year, const int Month)
{
	short arNumberOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arNumberOfDaysInMonths[Month - 1];
}
bool IsDayExist(const int Year, const short Month, const short Day)
{
	return Day <= NumberOfDaysInMonth(Year, Month) && Day >= 1;
}
short ReadValidDay(const int Year, const short Month)
{
	short Day;

	do
	{
		Day = ReadNonNegativeNumber("Enter a day : ");

	} while (!IsDayExist(Year, Month, Day));

	return Day;
}
stDate ReadDate(const string Message = "Enter a date")
{
	stDate Date;
	Date.Year = ReadNonNegativeNumber("Enter a year : ");
	Date.Month = ReadNumberInRange("Enter a month : ", 1, 12);
	Date.Day = ReadValidDay(Date.Year, Date.Month);

	return Date;
}

bool IsLastMonthInYear(const short Month)
{
	return Month == 12;
}

short NumberOfDaysInMonth(const int Year, const int Month)
{
	short arNumberOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arNumberOfDaysInMonths[Month - 1];
}
bool IsLastDayInMonth(const stDate &Date)
{
	return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
}

int main()
{
	stDate Date = ReadDate();
	cout << endl << endl;

	if (IsLastMonthInYear(Date.Month))
		cout << "Yes, month is last month in year";
	else
		cout << "No, month is not last month in year";
	cout << endl << endl;

	if (IsLastDayInMonth( Date))
		cout << "Yes, day is last day in month";
	else
		cout << "No, day is not last day in month";
	cout << endl << endl;
}