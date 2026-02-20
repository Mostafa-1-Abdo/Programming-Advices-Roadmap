#include <iostream>
using namespace std;

struct stPiggyBank
{
	short Pennies;
	short Nickels;
	short Dimes;
	short Quarters;
	short Dollars;
};

stPiggyBank ReadPiggyBankContent()
{
	stPiggyBank PiggyBank;
	cout<<"Enter number of peenies\n";
	cin >> PiggyBank.Pennies;
	cout << "Enter number of nickels\n";
	cin >> PiggyBank.Nickels;
	cout << "Enter number of dimes\n";
	cin >> PiggyBank.Dimes;
	cout << "Enter number of quarters\n";
	cin >> PiggyBank.Quarters;
	cout << "Enter number of dollars\n";
	cin >> PiggyBank.Dollars;
	return PiggyBank;
}

short CalculateTotalPennies(const stPiggyBank &PiggyBank)
{
	return PiggyBank.Pennies + PiggyBank.Nickels * 5 + PiggyBank.Dimes * 10 + PiggyBank.Quarters * 25 + PiggyBank.Dollars * 100;
}

float CalculateTotalDollars(const short& TotalPennies)
{
	return (float)TotalPennies / 100;
}

int main()
{
	short TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
	cout << "\n\nTotal Pennies = " << TotalPennies <<endl;
	cout << "Total Dollars = " << CalculateTotalDollars(TotalPennies) << endl;

	return 0;
}