#include <iostream>
using namespace std;

void PrintFibonacciSeries(const short& HowManyNumbers, long long Prv2 = 0, long long Prv1 = 1)
{
	if(HowManyNumbers>=1)
	{
		cout << Prv2 << "	";

		long long FebNumber = Prv1 + Prv2;
		Prv2 = Prv1;
		Prv1 = FebNumber;

		PrintFibonacciSeries(HowManyNumbers - 1, Prv2, Prv1);
	}
}

int main()
{
	PrintFibonacciSeries(10);
}