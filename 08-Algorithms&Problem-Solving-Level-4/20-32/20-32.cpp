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
void IncreaseDateByXDays(stDate &Date,const int Days)
{
	for (short i = 0; i < Days; i++)
		IncreaseDateByOneDay(Date);
}
void IncreaseDateByOneWeek(stDate& Date)
{
	IncreaseDateByXDays(Date, 7);
}
void IncreaseDateByXWeeks(stDate& Date,const int Weeks)
{
	for (short i = 0; i < Weeks; i++)
		IncreaseDateByOneWeek(Date);
}
void IncreaseDateByOneMonth(stDate& Date)
{
	if (Date.Month == 12)
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
		Date.Month++;

	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
	if (Date.Month > NumberOfDaysInCurrentMonth)
		Date.Day = NumberOfDaysInCurrentMonth;
}
void IncreaseDateByXMonths(stDate& Date, const int Months)
{
	for (short i = 0; i < Months; i++)
		IncreaseDateByOneMonth(Date);
}
void IncreaseDateByOneYear(stDate& Date)
{
	Date.Year++;
}
void IncreaseDateByXYears(stDate& Date, const int Years)
{
	for (short i = 0; i < Years; i++)
		IncreaseDateByOneYear(Date);
}
void IncreaseDateByXYearsFaster(stDate& Date, const int Years)
{
	Date.Year += Years;
}
void IncreaseDateByOneDecade(stDate& Date)
{
	Date.Year += 10;
}
void IncreaseDateByXDecades(stDate& Date, const int Decades)
{
	for (short i = 0; i < Decades; i++)
		IncreaseDateByOneDecade(Date);
}
void IncreaseDateByXDecadesFaster(stDate& Date, const int Decades)
{
	Date.Year += Decades * 10;
}
void IncreaseDateByOneCentury(stDate& Date)
{
	Date.Year += 100;
}
void IncreaseDateByOneMillennium(stDate& Date)
{
	Date.Year += 1000;
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
	IncreaseDateByOneDay(Date);
	cout << "\n01-Adding one day is : ";
	PrintData(Date);

	IncreaseDateByXDays(Date, 10);
	cout << "\n02-Adding 10 days is : ";
	PrintData(Date);

	IncreaseDateByOneWeek(Date);
	cout << "\n03-Adding one week is : ";
	PrintData(Date);

	IncreaseDateByXWeeks(Date,10);
	cout << "\n04-Adding 10 weeks is : ";
	PrintData(Date);

	IncreaseDateByOneMonth(Date);
	cout << "\n05-Adding one month is : ";
	PrintData(Date);

	IncreaseDateByXMonths(Date,5);
	cout << "\n06-Adding 5 months is : ";
	PrintData(Date);

	IncreaseDateByOneYear(Date);
	cout << "\n07-Adding one year is : ";
	PrintData(Date);

	IncreaseDateByXYears(Date, 10);
	cout << "\n08-Adding 10 years is : ";
	PrintData(Date);

	IncreaseDateByXYearsFaster(Date, 10);
	cout << "\n09-Adding 10 years (faster) is : ";
	PrintData(Date);

	IncreaseDateByOneDecade(Date);
	cout << "\n010-Adding one decade is : ";
	PrintData(Date);

	IncreaseDateByXDecades(Date, 10);
	cout << "\n11-Adding 10 decades is : ";
	PrintData(Date);

	IncreaseDateByXDecadesFaster(Date, 10);
	cout << "\n12-Adding 10 decades (faster) is : ";
	PrintData(Date);

	IncreaseDateByOneCentury(Date);
	cout << "\n13-Adding one century is : ";
	PrintData(Date);

	IncreaseDateByOneMillennium(Date);
	cout << "\n14-Adding one millennium is : ";
	PrintData(Date);
}