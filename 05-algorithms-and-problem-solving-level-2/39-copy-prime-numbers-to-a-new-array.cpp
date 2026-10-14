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

enum enPrimeStatus { Prime = 1, NotPrime };
enPrimeStatus CheckPrimeStatus(const int& Number)
{
	if (Number <= 1)
		return enPrimeStatus::NotPrime;
	else
	{
		for (int i = 2; i <= sqrt(Number); i++)
		{
			if (Number % i == 0)
				return enPrimeStatus::NotPrime;
		}
		return enPrimeStatus::Prime;
	}
}

void AddArrayElement(const int& Number, int Array[100], short& ArrayLength)
{
	Array[ArrayLength] = Number;
	ArrayLength++;
}

void CopyArrayPrimeNumbers(const int Array1[100], const short& Array1Length, int Array2[100], short& Array2Length)
{
	for (short i = 0; i < Array1Length; i++)
	{
		if (CheckPrimeStatus(Array1[i]) == enPrimeStatus::Prime)
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
	short Array1Length = 0;
	FillArrayWithRandomNumbers(Array1, Array1Length);

	int Array2[100];
	short Array2Length = 0;
	CopyArrayPrimeNumbers(Array1, Array1Length, Array2, Array2Length);

	cout << "\n\nArray 1 elements : ";
	PrintArray(Array1, Array1Length);

	cout << "\n\nArray 2 elements : ";
	PrintArray(Array2, Array2Length);

	return 0;
}