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

bool IsLeapYear(const int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int main()
{
	int Year = ReadNonNegativeNumber("Enter a year : ");
	cout << endl << endl;

	if (IsLeapYear(Year))
		cout << "Yes, year [" << Year << "] is a leap year";
	else
		cout << "No, year [" << Year << "] is not a leap year";
	cout << endl << endl;
}