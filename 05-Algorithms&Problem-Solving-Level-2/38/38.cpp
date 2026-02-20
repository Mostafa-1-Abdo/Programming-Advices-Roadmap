#include <iostream>
#include <cmath>
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

enum enNumberStatus { All = 1, Odd, Even };
enNumberStatus CheckNumberStatus(const int& Number)
{
	if (Number % 2 == 0)
		return enNumberStatus::Even;
	return enNumberStatus::Odd;
}

void AddArrayElement(const int &Number, int Array[100], short& ArrayLength)
{
	Array[ArrayLength] = Number;
	ArrayLength++;
}

void CopyArrayOddNumbers(const int Array1[100], const short& Array1Length, int Array2[100], short& Array2Length)
{
	for (short i = 0; i < Array1Length; i++)
	{
		if (CheckNumberStatus(Array1[i]) == enNumberStatus::Odd)
		{
			AddArrayElement(Array1[i], Array2, Array2Length);
		}
	}
}

void PrintArray(const int Array[100], const short& ArrayLength)
{
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[100];
	short Array1Length=0;
	FillArrayWithRandomNumbers(Array1, Array1Length);

	int Array2[100];
	short Array2Length=0;
	CopyArrayOddNumbers(Array1, Array1Length, Array2, Array2Length);

	cout << "\n\nArray 1 elements : ";
	PrintArray(Array1, Array1Length);

	cout << "\n\nArray 2 elements : ";
	PrintArray(Array2, Array2Length);

	return 0;
}