#include <iostream>
using namespace std;

struct stTime
{
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};

int ReadPositiveNumber(const string &Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

stTime ReadTime()
{
	stTime Time;
	Time.Days=ReadPositiveNumber("Enter number of days");
	Time.Hours=ReadPositiveNumber("Enter number of hours");
	Time.Minutes=ReadPositiveNumber("Enter number of minutes");
	Time.Seconds=ReadPositiveNumber("Enter number of seconds");

	return Time;
}

int CalculateSeconds(const stTime &Time)
{
	return Time.Days * 24 * 60 * 60 + Time.Hours * 60 * 60 + Time.Minutes * 60 + Time.Seconds;
}

void PrintSeconds()
{
	cout<< CalculateSeconds(ReadTime()) <<" Seconds" << endl;
}


int main()
{
	PrintSeconds();

	return 0;
}