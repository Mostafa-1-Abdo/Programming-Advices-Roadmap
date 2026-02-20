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

void CopyArrayInReverseOrder(const int Array1[100], const short& Array1Length, int Array2[100], short& Array2Length)
{
	Array2Length = Array1Length;
	for (short i = 0; i < Array1Length; i++)
		Array2[i] = Array1[Array1Length-1-i];
}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message<<" : ";
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
	short Array1Length;
	FillArrayWithRandomNumbers(Array1, Array1Length);

	int Array2[100];
	short Array2Length;
	CopyArrayInReverseOrder(Array1, Array1Length, Array2, Array2Length);

	PrintArray(Array1, Array1Length, "Array 1 elements");
	PrintArray(Array2, Array2Length, "Array 2 elements");

	return 0;
}