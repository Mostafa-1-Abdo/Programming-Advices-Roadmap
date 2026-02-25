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
bool IsDayExist(const int Year,const short Month,const short Day)
{
	return Day <= NumberOfDaysInMonth(Year, Month) && Day >= 1;
}
short GetDayOrder(const int Year, const short Month, const short Day)
{
	if (!IsDayExist(Year, Month, Day))
	{
		return -1;
	}

	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12))  % 7;
}
string GetDayName(const short DayOrder)
{
	string arNameOfDays[7] = { "Sunday" ,"Monday" ,"Tuesday","Wednesday","Thursday ","Friday", "Saturday" };
	return arNameOfDays[DayOrder];
}
void PrintDayOfWeek(const int Year, const short Month, const short Day)
{
	short DayOrder = GetDayOrder(Year, Month, Day);

	if (DayOrder == -1)
	{
		cout << "Day is not exist";
		return;
	}

	cout << "Date      : " << Day << "/" << Month << "/" << Year << "\n";
	cout << "Day order : " << DayOrder << "\n";
	cout << "Day name  : " << GetDayName(DayOrder);
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	short Month = ReadNumberInRange("Enter a month : ",1,12);
	short Day  = ReadNonNegativeNumber("Enter a day : ");
	cout << endl << endl;

	PrintDayOfWeek(Year, Month, Day);
	cout << endl << endl;
}