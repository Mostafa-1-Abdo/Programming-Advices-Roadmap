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

void PrintFrom1ToNumber(const int &Number)
{
	for (int i = 1; i <= Number; i++)
		cout << i << endl;
}

int main()
{
	PrintFrom1ToNumber(ReadPositiveNumber("Enter a number"));

	return 0;
}