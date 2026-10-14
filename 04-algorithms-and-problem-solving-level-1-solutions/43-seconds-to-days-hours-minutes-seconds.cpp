#include <iostream>
using namespace std;

struct stTime
{
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

stTime Calculate_Days_Hours_Minutes_Seconds(int TotalSeconds)
{
	const short SecondsPerMinutes = 60;
	const short SecondsPerHours = 60 * SecondsPerMinutes;
	const int SecondsPerDays = SecondsPerHours * 24;
	int ReminderSeconds;

	stTime Time;
	Time.Days = TotalSeconds / SecondsPerDays;
	ReminderSeconds = TotalSeconds % SecondsPerDays;
	Time.Hours = ReminderSeconds / SecondsPerHours;
	ReminderSeconds %= SecondsPerHours;
	Time.Minutes = ReminderSeconds / SecondsPerMinutes;
	Time.Seconds = ReminderSeconds % SecondsPerMinutes;
	return Time;
}

void Print_Days_Hours_Minutes_Seconds(stTime Time)
{
	cout << "\n\n";
	cout <<Time.Days << ":" << Time.Hours << ":" << Time.Minutes << ":" << Time.Seconds << endl;
}


int main()
{
	Print_Days_Hours_Minutes_Seconds(Calculate_Days_Hours_Minutes_Seconds(ReadPositiveNumber("Enter number of seconds")));

	return 0;
}