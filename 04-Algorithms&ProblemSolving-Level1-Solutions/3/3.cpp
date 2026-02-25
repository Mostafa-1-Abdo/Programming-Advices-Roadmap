#include <iostream>
using namespace std;

enum enNumberType{Odd=1,Even};

int ReadNumber()
{
	int Number;
	cout << "Enter a number\n";
	cin >> Number;
	return Number;
}

enNumberType CheckNumberType(const int &Number)
{
	if (Number % 2 == 0)
		return enNumberType::Even;
	return enNumberType::Odd;
}

void PrintNumberType(const enNumberType &NumberType)
{
	if (NumberType == enNumberType::Odd)
		cout << "\nThe number is odd\n";
	else
		cout << "\nThe number is even\n";
}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}