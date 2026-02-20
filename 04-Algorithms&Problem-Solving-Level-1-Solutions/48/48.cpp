#include <iostream>
#include <cmath>
using namespace std;

struct stLoan
{
	float LoanAmount;
	float MonthlyPayment;
	short LoanMonths;
};

float ReadPositiveNumber(const string& Message)
{
	float Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

stLoan ReadLoanInf()
{
	stLoan Loan;
	Loan.LoanAmount = ReadPositiveNumber("Enter loan amount");
	Loan.LoanMonths = ReadPositiveNumber("Enter loan months");
	return Loan;
}

void CalculateMonthlyPayment(stLoan& Loan)
{
	Loan.MonthlyPayment = Loan.LoanAmount / Loan.LoanMonths;
}

void PrintMonthlyPayment(stLoan& Loan)
{
	CalculateMonthlyPayment(Loan);
	cout << "\n\nMonthly payment = " << Loan.MonthlyPayment << endl;
}

int main()
{
	stLoan Loan = ReadLoanInf();

	PrintMonthlyPayment(Loan);

	return 0;
}