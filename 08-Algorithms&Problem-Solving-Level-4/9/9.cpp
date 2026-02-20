#include <iostream>
#include <iomanip>
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

string GetMonthShortName(const short Month)
{
	string arNameOfMonths[12] = { "Jan" ,"Feb" ,"Mar","Apr","May","Jun", "Jul","Aug", "Sep","Oct","Nov","Dec" };
	return arNameOfMonths[Month - 1];
}
bool IsLeapYear(const int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
short GetDayOrder(const int Year, const short Month, const short Day)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}
short NumberOfDaysInMonth(const int Year, const int Month)
{
	short arNumberOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arNumberOfDaysInMonths[Month - 1];
}
void PrintMonthCalendar(const int Year, const short Month)
{
	short DayOrder = GetDayOrder(Year, Month, 1);
	short NumberOfDays = NumberOfDaysInMonth(Year, Month);

	printf("_______________%s_______________\n", GetMonthShortName(Month).c_str());
	cout << "Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
	for (short i = 0; i < DayOrder; i++)
	{
		cout << "     ";
	}
	for (short i = 1; i <= NumberOfDays; i++)
	{
		cout << setw(3) << i << "  ";
		DayOrder++;

		if (DayOrder == 7)
		{
			cout << "\n";
			DayOrder = 0;
		}
	}
	cout << "\n_________________________________";
}
void PrintYearCalendar(const int Year)
{
	cout << "_________________________________\n\n";
	printf("         Calendar - %d          \n", Year);
	cout << "_________________________________";
	for (short i = 1; i <= 12; i++)
	{
		cout << "\n\n";
		PrintMonthCalendar(Year,i);
		
	}
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	cout << endl << endl;

	PrintYearCalendar(Year);
	cout << endl << endl;
}