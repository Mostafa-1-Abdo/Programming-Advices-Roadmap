#include <iostream>
using namespace std;

short ReadNonNegativeNumber(const string& Message="Enter a number")
{
	short Number;
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

void PrintNumbersInRange(short From,short To)
{
	if (To <= From)
	{
		cout <<"\n" << From;
		PrintNumbersInRange(From-1, To);
	}
}

int main()
{
	int Number1 = ReadNonNegativeNumber("Enter the biggest number");
	int Number2 = ReadNonNegativeNumber("Enter the other number");

	PrintNumbersInRange(Number1, Number2);

	return 0;
}


