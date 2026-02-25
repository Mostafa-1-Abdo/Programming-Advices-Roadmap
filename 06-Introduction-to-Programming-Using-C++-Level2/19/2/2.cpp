#include<iostream>
using namespace std;

int ReadNonNegativeNumber(const string& Message = "Enter a number")
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid number, enter a valid number\n";
			cin >> Number;
		}
	} while (Number < 0);
	return Number;
}

int CalculatePowerOfNumber(int Number, int Power)
{
	if (Power == 0)
		return 1;
	return Number * CalculatePowerOfNumber(Number, Power - 1);
}
void PrintPowerOfNumber(int Number, int Power)
{
	cout << "\n\nResult = " << CalculatePowerOfNumber(Number, Power) << endl;
}

int main()
{
	int Number = ReadNonNegativeNumber();
	int Power = ReadNonNegativeNumber("Enter the power");

	PrintPowerOfNumber(Number, Power);

	return 0;
}