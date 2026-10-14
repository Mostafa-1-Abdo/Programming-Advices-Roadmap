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
short GetTotalDaysFromBeginningOfYear(const int Year, const short Month, const short Day)
{
	if (!IsDayExist(Year, Month, Day))
	{
		cout << "Day is not exist";
		return -1;
	}

	short TotalDays = 0;

	for (short i = 1; i < Month; i++)
	{
		TotalDays += NumberOfDaysInMonth(Year, i);
	}
	TotalDays += Day;

	return TotalDays;
}
void PrintTotalDaysFromBeginningOfYear(const int Year, const short Month, const short Day)
{
	if (GetTotalDaysFromBeginningOfYear(Year, Month, Day) == -1)
	{
		return;
	}

	cout << "Number of days from the beginning of the year is " << GetTotalDaysFromBeginningOfYear(Year, Month, Day);
}
stDate GetDataFromDayOrderInYear(const int Year,short DayOrder)
{
	stDate Date{ 0,1,Year };
	short MonthDays = NumberOfDaysInMonth(Year, Date.Month);

	while (DayOrder > MonthDays)
	{
		DayOrder -= MonthDays;
		Date.Month++;
		MonthDays = NumberOfDaysInMonth(Year, Date.Month);
	}
	Date.Day = DayOrder;

	return Date;
}
void PrintData(stDate Date)
{
	printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	short Month = ReadNumberInRange("Enter a month : ", 1, 12);
	short Day = ReadNonNegativeNumber("Enter a day : ");
	cout << endl << endl;

	PrintTotalDaysFromBeginningOfYear(Year, Month, Day);
	cout << endl << endl;
	

	short DayOrder = ReadNonNegativeNumber("Enter order of the in the year : ");
	stDate Date = GetDataFromDayOrderInYear(Year, DayOrder);
	PrintData(Date);
	cout << endl << endl;
}