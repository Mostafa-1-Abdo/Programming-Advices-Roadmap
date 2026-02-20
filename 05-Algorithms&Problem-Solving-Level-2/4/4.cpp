#include <iostream>
using namespace std;

enum enPerfectStatus { Perfect = 1, NotPerfect };

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int GetSumAllDivisors(const int& Number)
{
	int Sum = 0;
	for (int i = 1; i <= Number / 2; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Sum;
}
enPerfectStatus CheckPerfectStatus(const int& Number)
{
	if (Number == GetSumAllDivisors(Number))
		return enPerfectStatus::Perfect;
	return enPerfectStatus::NotPerfect;
}
void PrintPerfectNumbersFrom1ToN(const int& Number)
{
	cout << "\n\n";
	for (int i = 1; i <= Number; i++)
		if (CheckPerfectStatus(i) == enPerfectStatus::Perfect)
			cout << i << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a number");
	PrintPerfectNumbersFrom1ToN(Number);

	return 0;
}