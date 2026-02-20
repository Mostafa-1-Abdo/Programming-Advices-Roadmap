#include <iostream>
using namespace std;

int ReadNumber(const string& Message)
{
	int Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

long double CalculatePowerOfNumber(const int& Number, const short& Power)
{
	if (Number == 0 && Power < 0)
	{
		cout << "\n\nMath ERROR\n";
		exit(1);
	}

	long long Result = 1;
	if (Power >= 0)
	{
		for (short i = 1; i <= Power; i++)
			Result *= Number;
		return Result;
	}
	else
	{
		for (short i = 1; i <= -Power; i++)
			Result *= Number;
		return 1.0L / Result;
	}
}

void PrintPowerOfNumber(const int& Number, const short& Power)
{
	cout << Number << "^" << Power << " = " << CalculatePowerOfNumber(Number, Power) << endl;
}

int main()
{
	int Number = ReadNumber("Enter a number");
	int Power = ReadNumber("Enter the power");
	PrintPowerOfNumber(Number, Power);

	return 0;
}