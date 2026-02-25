#include <iostream>
using namespace std;

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float GetThePercentage(const int& TotalSales)
{
	if (TotalSales > 1000000)
		return 0.01;
	else if(TotalSales<=1000000&& TotalSales>500000)
		return 0.02;
	else if (TotalSales <= 500000 && TotalSales>100000)
		return 0.03;
	else if (TotalSales <= 100000 && TotalSales>50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateCommission(const int& TotalSales)
{
	return TotalSales * GetThePercentage(TotalSales);
}

void PrintCommission(const float & Commission)
{
	cout << "\n\nTotal commission = " << Commission << endl;
}

int main()
{
	PrintCommission(CalculateCommission(ReadPositiveNumber("Enter total sales")));

	return 0;
}