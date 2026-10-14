#include <iostream>
using namespace std;

float ReadPositiveNumber(const string& Message)
{
	float Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateRemainder(const float &TotalBill,const float &CashPaid)
{
	return CashPaid - TotalBill;
}

void PrintResult(const float &Remainder)
{
	cout << "\n\n";
	if (Remainder < 0)
		cout << "The customer still owes : " << -Remainder;
	else
		cout << "The customer should receive change : " << Remainder;
	cout << endl;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Enter the total bill");
	float CashPaid = ReadPositiveNumber("Enter the cash paid");

	PrintResult(CalculateRemainder(TotalBill, CashPaid));

	return 0;
}