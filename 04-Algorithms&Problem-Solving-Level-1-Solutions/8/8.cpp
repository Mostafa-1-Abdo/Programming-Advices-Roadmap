#include <iostream>
using namespace std;

enum enMarkStatus { Pass = 1, Fail };

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enMarkStatus CheckMarkStatus(const short &Mark)
{
	if (Mark >= 50)
		return enMarkStatus::Pass;
	return enMarkStatus::Fail;
}

void PrintStatus(const enMarkStatus &MarkStatus)
{
	if (MarkStatus == enMarkStatus::Pass)
		cout << "\nPass\n";
	else
		cout << "\nFail\n";
}

int main()
{
	PrintStatus(CheckMarkStatus(ReadPositiveNumber("Enter your mark")));

	return 0;
}