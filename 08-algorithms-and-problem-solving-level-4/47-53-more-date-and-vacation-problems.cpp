#include <iostream>
using namespace std;
#include <ctime>
#pragma warning(disable : 4996)

struct stDate
{
	short Day;
	short Month;
	int Year;
};

bool IsLeapYear(const int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
short NumberOfDaysInMonth(const int Year, const short Month)
{
	short arNumberOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arNumberOfDaysInMonths[Month - 1];
}


short GetDayOrder(const stDate &Date)
{
	short a, y, m;
	a = (14 - Date.Month) / 12;
	y = Date.Year - a;
	m = Date.Month + 12 * a - 2;

	return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}
string GetDayName(const short DayOrder)
{
	string arNameOfDays[7] = { "Sunday" ,"Monday" ,"Tuesday","Wednesday","Thursday ","Friday", "Saturday" };
	return arNameOfDays[DayOrder];
}

bool IsLastDayInMonth(const stDate& Date)
{
	return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
}
void IncreaseDateByOneDay(stDate& Date)
{
	if (IsLastDayInMonth(Date))
	{
		Date.Day = 1;
		if (Date.Month == 12)
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

bool IsDate1LessThanDate2(const stDate& Date1, const stDate& Date2)
{
	return (Date1.Year < Date2.Year) ? true : (Date1.Year != Date2.Year) ? false : (Date1.Month < Date2.Month) ? true : (Date1.Month != Date2.Month) ? false : (Date1.Day < Date2.Day) ? true : false;
}
long long GetDifferenceInDays(const stDate& Date1, const stDate& Date2, bool IncludeEndDay = false)
{
	stDate SmallerDate;
	stDate BiggerDate;

	long long coDays = 0;

	if (IsDate1LessThanDate2(Date1, Date2))
	{
		SmallerDate = Date1;
		BiggerDate = Date2;
	}
	else
	{
		SmallerDate = Date2;
		BiggerDate = Date1;
	}

	while (IsDate1LessThanDate2(SmallerDate, BiggerDate))
	{
		coDays++;
		IncreaseDateByOneDay(SmallerDate);
	}

	return  IncludeEndDay ? ++coDays : coDays;
}

void PrintData(const stDate& Date)
{
	printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
}

bool IsEndOfWeek(const stDate &Date)
{
	return GetDayOrder(Date) == 6;
}
bool IsWeekend(const stDate& Date)
{
	short DayOrder = GetDayOrder(Date);

	return (DayOrder == 5 || DayOrder == 6);
}
bool IsBusinessDay(const stDate& Date)
{
	return !IsWeekend(Date);
}

short DaysUntilEndOfWeek(const stDate& Date)
{
	return 6-GetDayOrder(Date);
}

short DaysUntilEndOfMonth(const stDate& Date)
{
	return (NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day) + 1;
}
short DaysUntilEndOfYear(stDate Date)
{
	return (short)GetDifferenceInDays(Date, {31,12,Date.Year},true);
}

stDate GetSystemDate()
{
	stDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;

	return Date;
}

int main()
{
	stDate Date = GetSystemDate();
	short DayOrder = GetDayOrder(Date);

	cout << "Date : ";
	PrintData(Date);
	cout << "\nToday is " << GetDayName(DayOrder);
	cout << endl << endl;

	cout << "Is it end of week?\n";
	if (IsEndOfWeek(Date))
		cout << "Yes, it is end of week";
	else
		cout << "No, it is not end of week";
	cout << endl << endl;

	cout << "Is it weekend?\n";
	if (IsWeekend(Date))
		cout << "Yes, it is weekend";
	else
		cout << "No, it is not weekend";
	cout << endl << endl;

	cout << "Is it business day?\n";
	if (IsBusinessDay(Date))
		cout << "Yes, it is business day";
	else
		cout << "No, it is not business day";
	cout << endl << endl;


	cout << "Days until end of week " << DaysUntilEndOfWeek(Date) << "\n";
	cout << "Days until end of month " << DaysUntilEndOfMonth(Date) << "\n";
	cout << "Days until end of year " << DaysUntilEndOfYear(Date);
	cout << endl << endl;
}