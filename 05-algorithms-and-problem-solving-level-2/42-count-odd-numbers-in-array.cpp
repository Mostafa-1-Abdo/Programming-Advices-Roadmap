#include <iostream>
using namespace std;

enum enNumberStatus { All = 1, Odd, Even };

int ReadPositiveNumber(const string& Message)
{
	int Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Array[100], short& ArrayLength)
{
	ArrayLength = ReadPositiveNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumberInRange(1, 100);
	}
	cout << endl;
}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message << " : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

enNumberStatus CheckNumberStatus(const int& Number)
{
	if (Number % 2 == 0)
		return enNumberStatus::Even;
	return enNumberStatus::Odd;
}
short CountArrayOddNumbers(const int Array[100], const short& ArrayLength)
{
	short Counter = 0;
	for (short i = 0; i < ArrayLength; i++)
		if(CheckNumberStatus(Array[i])== enNumberStatus::Odd)
			Counter++;
			return Counter;
}
void PrintReault(const int Array[100], const short& ArrayLength)
{
	cout << "\n\nOdd numbers count is : " << CountArrayOddNumbers(Array, ArrayLength) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	short ArrayLength = 0;

	FillArrayWithRandomNumbers(Array, ArrayLength);

	PrintArray(Array, ArrayLength, "Array Elements");

	PrintReault(Array, ArrayLength);

	return 0;
}