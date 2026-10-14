#include <iostream>
#include <string>
using namespace std;

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

float SumNumbers()
{
	short Counter = 1;
	float Number;
	float Sum=0;
	do {
		Number = ReadNumber("Enter number " + to_string(Counter));
		if (Number == -99)
			break;
		Sum += Number;
		Counter++;
	} while (true);
	return Sum;
}

void PrintSum()
{
	cout << "\n\nSum = " << SumNumbers() << endl;
}

int main()
{
	PrintSum();

	return 0;
}