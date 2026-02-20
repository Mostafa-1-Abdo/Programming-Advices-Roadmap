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
	Loan.MonthlyPayment = ReadPositiveNumber("Enter monthly payment");
	return Loan;
}

void CalculateLoanMonths(stLoan& Loan)
{
	Loan.LoanMonths = ceil(Loan.LoanAmount / Loan.MonthlyPayment);
}

void PrintLoanMonths(stLoan& Loan)
{
	CalculateLoanMonths(Loan);
	cout << "\n\nNumber of loan months = " << Loan.LoanMonths << endl;
}

int main()
{
	stLoan Loan= ReadLoanInf();

	PrintLoanMonths(Loan);

	return 0;
}