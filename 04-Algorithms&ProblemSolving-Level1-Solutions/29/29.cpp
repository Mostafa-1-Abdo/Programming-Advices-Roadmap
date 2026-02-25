#include <iostream>
using namespace std;

enum enNumberStatus {All=1, Odd , Even };

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enNumberStatus CheckNumberStatus(const int& Number)
{
	if (Number % 2 == 0)
		return enNumberStatus::Even;
	return enNumberStatus::Odd;
}

int SumEvenNumbersFrom1ToN(const int& N)
{
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckNumberStatus(i) == enNumberStatus::Even)
			Sum += i;
	}
	return Sum;
}

void PrintSumEvenNumbersFrom1ToN(const int& Sum)
{
	cout << "\n\nSum = " << Sum << endl;
}

int main()
{
	PrintSumEvenNumbersFrom1ToN(SumEvenNumbersFrom1ToN(ReadPositiveNumber("Enter a number")));

	return 0;
}