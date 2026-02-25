#include <iostream>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	int Year;
};
struct stPeriod
{
	stDate StartingDate;
	stDate EndingDate;
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
short ReadNumberInRange(const short From, const short To, const string& Message = "Enter a number : ")
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

stDate ReadDate(const string Message = "Enter a date")
{
	stDate Date;

	cout << Message << "\n";
	Date.Year = ReadNonNegativeNumber("Enter a year : ");
	Date.Month = ReadNumberInRange(1, 12, "Enter a month : ");
	Date.Day = ReadNumberInRange(0, NumberOfDaysInMonth(Date.Year, Date.Month), "Enter a day : ");

	return Date;
}

bool IsDate1beforeDate2(const stDate& Date1, const stDate& Date2)
{
	return (Date1.Year < Date2.Year) ? true : (Date1.Year != Date2.Year) ? false : (Date1.Month < Date2.Month) ? true : (Date1.Month != Date2.Month) ? false : (Date1.Day < Date2.Day) ? true : false;
}
bool IsDate1EqualDate2(const stDate& Date1, const stDate& Date2)
{
	return ((Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) : false) : false);
}
bool IsDate1AfterDate2(const stDate& Date1, const stDate& Date2)
{
	return !IsDate1beforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2);
}
enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDates(const stDate& Date1, const stDate& Date2)
{
	if (IsDate1beforeDate2(Date1, Date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}

bool IsDateWithinPeriod(stPeriod Period,stDate Date)
{
	return !(CompareDates(Period.StartingDate, Date) == enDateCompare::After ||	CompareDates(Period.EndingDate, Date) == enDateCompare::Before);
}

int main()
{
	stPeriod Period;
	cout << "Enter period:\n\n";
	Period.StartingDate = ReadDate("Enter start date:");
	cout << endl << endl;
	Period.EndingDate = ReadDate("Enter end date:");
	cout << endl << endl;

	stDate Date = ReadDate();
	cout << endl << endl;

	if (IsDateWithinPeriod(Period, Date))
		cout << "Yes, date is within period";
	else
		cout << "No, date is within period";
	cout << endl << endl;
}