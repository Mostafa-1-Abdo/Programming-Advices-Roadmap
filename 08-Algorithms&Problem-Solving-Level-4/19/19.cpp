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
	Date.Year = ReadNonNegativeNumber("Enter a year : ");
	Date.Month = ReadNumberInRange(1, 12, "Enter a month : ");
	Date.Day = ReadNumberInRange(0, NumberOfDaysInMonth(Date.Year, Date.Month), "Enter a day : ");

	return Date;
}

bool IsDate1LessThanDate2(const stDate& Date1, const stDate& Date2)
{
	return (Date1.Year < Date2.Year) ? true : (Date1.Year != Date2.Year) ? false : (Date1.Month < Date2.Month) ? true : (Date1.Month != Date2.Month) ? false : (Date1.Day < Date2.Day) ? true : false;
}
bool IsDate1EqualDate2(const stDate& Date1, const stDate& Date2)
{
	return ((Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) : false) : false);
}
bool IsLastDayInMonth(const stDate& Date)
{
	return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
}
bool IsLastMonthInYear(const short Month)
{
	return Month == 12;
}
void IncreaseDateByOneDay(stDate& Date)
{
	if (IsLastDayInMonth(Date))
	{
		Date.Day = 1;
		if (IsLastMonthInYear(Date.Month))
		{

			Date.Month = 1;
			Date.Year++;
			return;
		}
		Date.Month++;
	}
	else
	{
		Date.Day++;
	}
}
void SwapDates(stDate &Date1,stDate &Date2)
{
	stDate Temp = Date1;
	Date1 = Date2;
	Date2 = Temp;
}
int GetDifferenceInDays(stDate Date1,  stDate Date2, bool IncludeEndDay = false)
{
	int coDays = 0;
	short SwapFlag = 1;

	if (!IsDate1LessThanDate2(Date1, Date2))
	{
		SwapDates(Date1, Date2);
		SwapFlag = -1;
	}

	while (!IsDate1EqualDate2(Date1, Date2))
	{
		coDays++;
		IncreaseDateByOneDay(Date1);
	}

	return  (IncludeEndDay ? ++coDays : coDays) * SwapFlag;
}

int main()
{
	stDate Date1 = ReadDate();
	cout << endl << endl;
	stDate Date2 = ReadDate();
	cout << endl << endl;

	cout << GetDifferenceInDays(Date1, Date2,true);
}