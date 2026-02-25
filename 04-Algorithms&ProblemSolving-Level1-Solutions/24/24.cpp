#include <iostream>
using namespace std;

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}

void PrintAgeStatus(short Age)
{
	cout << "\n\n";
	if (ValidatNumberInRange(Age, 18, 45))
		cout << Age <<" : Valide Age\n";
	else
		cout << Age <<" : Invalide Age\n";
}

int main()
{
	PrintAgeStatus(ReadPositiveNumber("Enter your age"));

	return 0;
}