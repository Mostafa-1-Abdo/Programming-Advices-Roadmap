#include <iostream>
#include <cmath>
using namespace std;

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enum enPrimeStatus { Prime = 1, NotPrime };
enPrimeStatus CheckPrimeStatus(const int& Number)
{
	if (Number <= 1)
		return enPrimeStatus::NotPrime;
	else
	{
		for (int i = 2; i <= sqrt(Number); i++)
		{
			if (Number % i == 0)
				return enPrimeStatus::NotPrime;
		}
		return enPrimeStatus::Prime;
	}
}
void PrintAllPrimeNumberFrom1ToN(const int& N)
{
	cout << "\n\nPrime numbers from 1 to " << N << " : \n";
	for (short i=0 ; i <= N; i++)
	{
		if (CheckPrimeStatus(i) == enPrimeStatus::Prime)
			cout << i<<"\n";
	}
	cout<< endl;
}

int main()
{
	PrintAllPrimeNumberFrom1ToN(ReadPositiveNumber("Enter a number"));

	return 0;
}