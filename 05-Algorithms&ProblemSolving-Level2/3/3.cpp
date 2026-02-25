#include <iostream>
using namespace std;

enum enPerfectStatus {Perfect=1,NotPerfect };

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int GetSumAllDivisors(const short &Number)
{
	int Sum = 0;
	for (int i = 1; i <=Number/2; i++)
	{
		if (Number % i == 0)
			Sum+=i;
	}
	return Sum;
}
enPerfectStatus CheckPerfectStatus(const int &Number)
{
	if (Number == GetSumAllDivisors(Number))
		return enPerfectStatus::Perfect;
	return enPerfectStatus::NotPerfect;
}
void PrintPerfectStatus(const int& Number)
{
	cout << "\n\n";
	if (CheckPerfectStatus(Number) == enPerfectStatus::Perfect)
		cout << Number << " is perfect";
	else
		cout << Number << " is not perfect";
	cout << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a number");
	PrintPerfectStatus(Number);

	return 0;
}