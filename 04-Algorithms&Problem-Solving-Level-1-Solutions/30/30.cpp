#include <iostream>
using namespace std;

int ReadNonNegativeNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int CalculateFactorialOfN(const int& N)
{
	int Factorial=1;
		for (int i = 1; i <= N; i++)
			Factorial *= i;
		return Factorial;
}

void PrintFactorialOfN(const int & Factorial)
{
	cout << "\n\nFactorial = " << Factorial << endl;
}

int main()
{
	PrintFactorialOfN(CalculateFactorialOfN(ReadNonNegativeNumber("Enter a non-negative number")));

	return 0;
}