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

void GetReversedDigits(int Number)
{
	cout << "\n\nReversed Digits :\n";
	while(Number>0)
	{
		cout<<Number%10<<"\n";
		Number /= 10;
	}
	cout << endl;
}

int main()
{
	GetReversedDigits(ReadPositiveNumber("Enter a number"));
	
	return 0;
}