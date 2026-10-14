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

void PrintArray(int Array[100], const short& ArrayLength)
{
	cout << "\n\nArray Elements : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

int CalculateSumArray(int Array[100],const short& ArrayLength)
{
	int Sum = 0;
	for (short i = 0; i < ArrayLength; i++)
		Sum += Array[i];
	return Sum;
}
void PrintSumArray(int Array[100], const short& ArrayLength)
{
	cout << "\n\nSum of all numbers is : " << CalculateSumArray(Array, ArrayLength) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	short ArrayLength;

	FillArrayWithRandomNumbers(Array, ArrayLength);

	PrintArray(Array, ArrayLength);

	PrintSumArray(Array, ArrayLength);

	return 0;
}

