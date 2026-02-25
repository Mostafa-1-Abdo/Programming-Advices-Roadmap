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

float CalculateTotalBillAfterServiceAndTax(const float& BillValue)
{
	float TotalBill;
	TotalBill = BillValue * 1.1;
	TotalBill *= 1.16;
	return TotalBill;
}

void PrintTotalBill()
{
	cout << "\n\ntotal bill = " << CalculateTotalBillAfterServiceAndTax(ReadPositiveNumber("Enter the bill"));
}

int main()
{
	PrintTotalBill();

	return 0;
}