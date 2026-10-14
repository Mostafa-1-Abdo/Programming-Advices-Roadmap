#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeStatus {Prime=1,NotPrime};

int ReadNumber(const string& Message)
{
	int Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

enPrimeStatus CheckPrimeStatus(const int &Number)
{
	if (Number<=1)
		return enPrimeStatus::NotPrime;
	else
	{
		for (int i = 2; i < sqrt(Number); i++)
		{
			if (Number%i==0)
				return enPrimeStatus::NotPrime;
		}
		return enPrimeStatus::Prime;
	}
}

void PrintPrimeStatus(const int& Number)
{
	
	cout << "\n\n";
	cout << Number << " is ";
	enPrimeStatus PrimeStatus = CheckPrimeStatus(Number);
	if (PrimeStatus == enPrimeStatus::Prime)
		cout << "prime";
	else
		cout << "not prime";
	cout << endl;
}

int main()
{
	PrintPrimeStatus(ReadNumber("Enter a number"));
	return 0;
}