#include <iostream>
using namespace std;

enum enNumberStatus{All=1,Odd,Even};

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enNumberStatus CheckNumberStatus(const int &Number)
{
	if (Number % 2 == 0)
		return enNumberStatus::Even;
	return enNumberStatus::Odd;
}

int SumOddNumbersFrom1ToN(const int& N)
{
	int Sum=0;
	for (int i = 1; i <= N; i++)
	{
		if(CheckNumberStatus(i)== enNumberStatus::Odd)
		Sum += i;
	}
	return Sum;
}

void PrintSumOddNumbersFrom1ToN(const int &Sum)
{
	cout << "\n\nSum = " << Sum << endl;
}

int main()
{
	PrintSumOddNumbersFrom1ToN(SumOddNumbersFrom1ToN(ReadPositiveNumber("Enter a number")));

	return 0;
}