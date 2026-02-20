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

	cout << Message << "\n";
	Date.Year = ReadNonNegativeNumber("Enter a year : ");
	Date.Month = ReadNumberInRange(1, 12, "Enter a month : ");
	Date.Day = ReadNumberInRange(0, NumberOfDaysInMonth(Date.Year, Date.Month), "Enter a day : ");

	return Date;
}

void SwapDates(stDate& Date1, stDate& Date2)
{
	stDate Temp = Date1;
	Date1 = Date2;
	Date2 = Temp;
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

bool IsDate1EqualDate2(const stDate& Date1, const stDate& Date2)
{
	return ((Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) : false) : false);
}

short GetDayOrder(const stDate& Date)
{
	short a, y, m;
	a = (14 - Date.Month) / 12;
	y = Date.Year - a;
	m = Date.Month + 12 * a - 2;

	return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}
string GetDayName(const stDate& Date)
{
	string arNameOfDays[7] = { "Sunday" ,"Monday" ,"Tuesday","Wednesday","Thursday ","Friday", "Saturday" };
	return arNameOfDays[GetDayOrder(Date)];
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

stDate GetVacationEndingDate(stDate StartingDate,short VacationDays)
{
	while (VacationDays != 0)
	{
		if (IsBusinessDay(StartingDate))
			VacationDays--;

		IncreaseDateByOneDay(StartingDate);
	}

	return StartingDate;
}

void PrintDate(const stDate& Date)
{
	printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
}

int main()
{
	stDate StartingDate = ReadDate("Vacation starts:");
	cout << endl << endl;
	short VacationsDays = ReadNonNegativeNumber("Enter vacation days : ");
	cout << endl << endl;

	stDate EndingDate = GetVacationEndingDate(StartingDate, VacationsDays);
	cout << "Return date is : " << GetDayName(EndingDate) << ",";
	PrintDate(EndingDate);
	cout << endl << endl;
}