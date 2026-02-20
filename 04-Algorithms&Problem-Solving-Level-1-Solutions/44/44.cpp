#include <iostream>
using namespace std;

enum enDaysOfWeek {Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
	return (enDaysOfWeek)ReadPositiveNumber("Enter a number of the day\n(1) Sunday\n(2) Monday\n(3) Tuesday\n(4) Wednesday\n(5) Thursday\n(6) Friday\n(7) Saturday");
}

void PrintDayOfWeek(const enDaysOfWeek &DayOfWeek)
{
	cout << "\n\nThe day is ";
	switch (DayOfWeek)
	{
	case enDaysOfWeek::Sunday:
			cout << "Sunday";
			break;
	case enDaysOfWeek::Monday:
			cout << "Monday";
			break;
	case enDaysOfWeek::Tuesday:
			cout << "Tuesday";
			break;
	case enDaysOfWeek::Wednesday:
			cout << "Wednesday";
			break;
	case enDaysOfWeek::Thursday:
			cout << "Thursday";
			break;
	case enDaysOfWeek::Friday:
			cout << "Friday";
			break;
	case enDaysOfWeek::Saturday:
			cout << "Saturday";
			break;
	default:
		cout << "Wrong day";
	}
	cout << endl;
}

int main()
{
	PrintDayOfWeek(ReadDayOfWeek());

	return 0;
}