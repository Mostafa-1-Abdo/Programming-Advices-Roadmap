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

bool IsLastDayInMonth(const stDate& Date)
{
	return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
}

void DecreaseDateByOneDay(stDate& Date)
{
	if (Date.Day == 1)
	{
		if (Date.Month == 1)
		{
			Date.Month = 12;
			Date.Year--;
		}
		else
			Date.Month--;
		Date.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
	}
	else
	{
		Date.Day--;
	}
}
void DecreaseDateByXDays(stDate& Date, const int Days)
{
	for (short i = 0; i < Days; i++)
		DecreaseDateByOneDay(Date);
}
void DecreaseDateByOneWeek(stDate& Date)
{
	DecreaseDateByXDays(Date, 7);
}
void DecreaseDateByXWeeks(stDate& Date, const int Weeks)
{
	for (short i = 0; i < Weeks; i++)
		DecreaseDateByOneWeek(Date);
}
void DecreaseDateByOneMonth(stDate& Date)
{
	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
		Date.Month--;

	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
	if (Date.Month > NumberOfDaysInCurrentMonth)
		Date.Day = NumberOfDaysInCurrentMonth;
}
void DecreaseDateByXMonths(stDate& Date, const int Months)
{
	for (short i = 0; i < Months; i++)
		DecreaseDateByOneMonth(Date);
}
void DecreaseDateByOneYear(stDate& Date)
{
	Date.Year--;
}
void DecreaseDateByXYears(stDate& Date, const int Years)
{
	for (short i = 0; i < Years; i++)
		DecreaseDateByOneYear(Date);
}
void DecreaseDateByXYearsFaster(stDate& Date, const int Years)
{
	Date.Year -= Years;
}
void DecreaseDateByOneDecade(stDate& Date)
{
	Date.Year -= 10;
}
void DecreaseDateByXDecades(stDate& Date, const int Decades)
{
	for (short i = 0; i < Decades; i++)
		DecreaseDateByOneDecade(Date);
}
void DecreaseDateByXDecadesFaster(stDate& Date, const int Decades)
{
	Date.Year -= Decades * 10;
}
void DecreaseDateByOneCentury(stDate& Date)
{
	Date.Year -= 100;
}
void DecreaseDateByOneMillennium(stDate& Date)
{
	Date.Year -= 1000;
}

void PrintData(const stDate& Date)
{
	printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
}

int main()
{
	stDate Date = ReadDate("Enter a date");
	cout << endl << endl;

	cout << "Date after:";
	DecreaseDateByOneDay(Date);
	cout << "\n01-Subtracting one day is : ";
	PrintData(Date);

	DecreaseDateByXDays(Date, 10);
	cout << "\n02-Subtracting 10 days is : ";
	PrintData(Date);

	DecreaseDateByOneWeek(Date);
	cout << "\n03-Subtracting one week is : ";
	PrintData(Date);

	DecreaseDateByXWeeks(Date, 10);
	cout << "\n04-Subtracting 10 weeks is : ";
	PrintData(Date);

	DecreaseDateByOneMonth(Date);
	cout << "\n05-Subtracting one month is : ";
	PrintData(Date);

	DecreaseDateByXMonths(Date, 5);
	cout << "\n06-Subtracting 5 months is : ";
	PrintData(Date);

	DecreaseDateByOneYear(Date);
	cout << "\n07-Subtracting one year is : ";
	PrintData(Date);

	DecreaseDateByXYears(Date, 10);
	cout << "\n08-Subtracting 10 years is : ";
	PrintData(Date);

	DecreaseDateByXYearsFaster(Date, 10);
	cout << "\n09-Subtracting 10 years (faster) is : ";
	PrintData(Date);

	DecreaseDateByOneDecade(Date);
	cout << "\n010-Adding one decade is : ";
	PrintData(Date);

	DecreaseDateByXDecades(Date, 10);
	cout << "\n11-Subtracting 10 decades is : ";
	PrintData(Date);

	DecreaseDateByXDecadesFaster(Date, 10);
	cout << "\n12-Subtracting 10 decades (faster) is : ";
	PrintData(Date);

	DecreaseDateByOneCentury(Date);
	cout << "\n13-Subtracting one century is : ";
	PrintData(Date);

	DecreaseDateByOneMillennium(Date);
	cout << "\n14-Subtracting one millennium is : ";
	PrintData(Date);
}