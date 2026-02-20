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

void PrintFromNumberTo1(const int& Number)
{
	for (int i = Number; i >= 1; i--)
		cout << i << endl;
}

int main()
{
	PrintFromNumberTo1(ReadPositiveNumber("Enter a number"));

	return 0;
}