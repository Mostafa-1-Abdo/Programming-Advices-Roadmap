#include <iostream>
using namespace std;

void PrintFibonacciSeries(const short& HowManyNumbers,long long Prv2 = 0,long long Prv1 = 1)
{
	for (short i = 1; i <= HowManyNumbers; i++)
	{
		cout << Prv2 << "	";

		long long FebNumber = Prv1 + Prv2;
		Prv2 = Prv1;
		Prv1 = FebNumber;
	}
}

int main()
{
	PrintFibonacciSeries(10);
}